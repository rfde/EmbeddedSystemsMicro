//*******************************************************************
#include "lib.h"
#include "config.h"

//*******************************************************************
int main(void)
{
	// Setze GPIO1, Pin 28 Output (1 an Stelle 28 schreiben) (LED)
	LPC_GPIO1->FIODIR |= (1 << 28);
	// Setze GPIO2, Pin 10 Input (0 an Stelle 10 schreiben) (Taster)
	LPC_GPIO2->FIODIR &= ~(1 << 10);
	
	
	while( 1 )
	{
		// Falls GPIO2, Pin 10 == 1 (d.h. Taster gedrückt)
  		// (Frage: Warum geht hier nicht FIOPIN statt FIOSET?)
		if (LPC_GPIO2->FIOSET & (1 << 10)) {
			// Schreibe 1 in GPIO1, Pin 28 (LED an)
			LPC_GPIO1->FIOSET = (1 << 28);
		} else {
			// Schreibe 0 in GPIO1, Pin 28 (LED aus)
			LPC_GPIO1->FIOSET &= ~(1 << 28);
		}
	}
}

//EOF

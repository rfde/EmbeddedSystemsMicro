//*******************************************************************
#include "lib.h"
#include "config.h"

//*******************************************************************
int main(void)
{
  int cnt = 0;
  
  disp.printf( 0, 0, 0, __DATE__ " " __TIME__ );
		
  while( 1 )
  {
		disp.printf( 2, 0, 20, "cnt:%6d", cnt++ );
  }
}

//EOF

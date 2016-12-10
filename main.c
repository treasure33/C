#include <stdio.h>
#include "andy_led.h"


int main(void)
{
	unsigned char i=0;
	unsigned char io=1;
	
	int z=0;
	for (z=0;z<128;z++)
	{
  	  int rol = rollupzerobit(z,FLTOR); 
	  printf("%03d - 0b%s\n", rol, format_binary(rol));
	}
	return 0;
}

#include <stdio.h>
#include "andy_led.h"


int main(void)
{
	unsigned char i=0;
	unsigned char io=1;
	
	int z=0;
	// printf("\t\t\t\t\t   {\n");
	for (z=0;z<128;z++)
	{
//	    	printf("%03d - 0b%s\n", rollupzerobit(z,LTOR), format_binary(rollupzerobit(z,LTOR)));
	    if (z%8==0 && i==1)
		i=0;
            else
		if (z%8==0 && i==0)
		   i=1;

	    if (i==1)	
	    	printf("%03d - 0b%s\n", rollupzerobit(z,FLTOR), format_binary(rollupzerobit(z,FLTOR)));
	    else
	    	printf("%03d - 0b%s\n", rollupzerobit(z,ELTOR), format_binary(rollupzerobit(z,ELTOR)));

	    //printf("\t\t\t\t\t\t%03d, //- 0b%s\n", rollupzerobit(z,RTOL), format_binary(rollupzerobit(z,RTOL)));
/*	    printf("\t\t\t\t\t\t%03d, //- 0b%s\n", i, format_binary(i));
	    i<<=1;	
	    i=i+io;*/
	}
	// printf("\t\t\t\t\t   };\n");
	return 0;
}

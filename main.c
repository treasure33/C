#include <stdio.h>
#include "andy.h"


int main(void)
{
	unsigned char i=1;
	unsigned char io=1;
	
	int z=0;
	printf("\t\t\t\t\t   {\n");
	for (z=0;z<8;z++)
	{
	    //printf("%03d - 0b%s\n", rollupzerobit(z,LTOR), format_binary(rollupzerobit(z,LTOR)));
	    //printf("\t\t\t\t\t\t%03d, //- 0b%s\n", rollupzerobit(z,RTOL), format_binary(rollupzerobit(z,RTOL)));
	    printf("\t\t\t\t\t\t%03d, //- 0b%s\n", i, format_binary(i));
	    i<<=1;	
	    i=i+io;
	}
	printf("\t\t\t\t\t   };\n");
	return 0;
}

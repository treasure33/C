#include <stdio.h>
#include "andy.h"

char *format_binary(unsigned int x)
{
    #define MAXLEN 8 // width of output format
    #define MAXCNT 4 // count per printf statement
    static char fmtbuf[(MAXLEN+1)*MAXCNT];
    static int count = 0;
    char *b;
    count = count % MAXCNT + 1;
    b = &fmtbuf[(MAXLEN+1)*count];
    b[MAXLEN] = '\0';
    int z;   
    for (z = 0; z < MAXLEN; z++) 
    { 
	b[MAXLEN-1-z] = ((x>>z) & 0x1) ? '1' : '0'; 
    }
    return b;
}

int main(void)
{
	unsigned char i=127;
	int z=0;
	printf("\t\t\t\t\t   {\n");
	for (z=0;z<8;z++)
	{
	    //printf("%03d - 0b%s\n", rollupzerobit(z,LTOR), format_binary(rollupzerobit(z,LTOR)));
	    //printf("\t\t\t\t\t\t%03d, //- 0b%s\n", rollupzerobit(z,RTOL), format_binary(rollupzerobit(z,RTOL)));
	    printf("\t\t\t\t\t\t%03d, //- 0b%s\n", i, format_binary(i));
	    i>>=1;	
	}
	printf("\t\t\t\t\t   };\n");
	return 0;
}

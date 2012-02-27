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
	int z=0;
	for (z=0;z<32;z++)
	{
	    printf("%03d - 0b%s\n", roolupbit(z,LTOR), format_binary(roolupbit(z,LTOR)));
	}
	return 0;
}

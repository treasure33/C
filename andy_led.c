#include "andy_led.h"

unsigned char	rollupzerobit(int i, enum rollupmode mode)
{
    if (i/8>0)
	i = i%8;

    switch (mode)
    {
	case LTOR:
        return roll_lefttoright[i];
	case RTOL:
		return roll_righttoleft[i];
	case FRTOL:
		return fill_righttoleft[i];
	case FLTOR:
		return fill_lefttoright[i];
	case ERTOL:
		return empty_righttoleft[i];
	case ELTOR:
		return empty_lefttoright[i];
	default:
		return 0;
    }
}

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

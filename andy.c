/* Сдесь будет какой то код */
#include "andy.h"

unsigned char	roolupbit(int i, enum roolupmode mode)
{
    if (i/8>0)
	i = i%8;

    switch (mode)
    {
	case LTOR:
    		return r_lefttoright[i];
	case RTOL:
		return r_righttoleft[i];
	default:
		return 0;
    }
}


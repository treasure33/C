/* Сдесь будет какой то код */
#include "andy.h"

unsigned char	rollupzerobit(int i, enum roolupmode mode)
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
	default:
		return 0;
    }
}


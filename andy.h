static const unsigned char roll_righttoleft[]={
						254, //- 0b11111110
						253, //- 0b11111101
						251, //- 0b11111011
						247, //- 0b11110111
						239, //- 0b11101111
						223, //- 0b11011111
						191, //- 0b10111111
						127  //- 0b01111111
						};
static const unsigned char roll_lefttoright[]={
						127, //- 0b01111111
						191, //- 0b10111111
						223, //- 0b11011111
						239, //- 0b11101111
						247, //- 0b11110111
						251, //- 0b11111011
						253, //- 0b11111101
						254  //- 0b11111110
					   	};
static const unsigned char fill_righttoleft[]={ 254, //- 0b11111110
						252, //- 0b11111100
						248, //- 0b11111000
						240, //- 0b11110000
						224, //- 0b11100000
						192, //- 0b11000000
						128, //- 0b10000000
						000  //- 0b00000000
						};

enum roolupmode {
    LTOR    = 1,
    RTOL    = 2,
    FRTOL   = 3
 };

unsigned char	roolupbit(int i, enum roolupmode mode);


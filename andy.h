static const unsigned char roll_righttoleft[]={ /* Двигаем бит 0 с права на лево */
						254, //- 0b11111110
						253, //- 0b11111101
						251, //- 0b11111011
						247, //- 0b11110111
						239, //- 0b11101111
						223, //- 0b11011111
						191, //- 0b10111111
						127  //- 0b01111111
						};
static const unsigned char roll_lefttoright[]={ /* Двигаем бит 0 с лева на право */ 
						127, //- 0b01111111
						191, //- 0b10111111
						223, //- 0b11011111
						239, //- 0b11101111
						247, //- 0b11110111
						251, //- 0b11111011
						253, //- 0b11111101
						254  //- 0b11111110
					   	};
static const unsigned char fill_righttoleft[]={ /* Заполняем битом 0 с права на лево */
						254, //- 0b11111110
						252, //- 0b11111100
						248, //- 0b11111000
						240, //- 0b11110000
						224, //- 0b11100000
						192, //- 0b11000000
						128, //- 0b10000000
						000  //- 0b00000000
						};
static const unsigned char fill_lefttoright[]={ /* Заполняем битом 0 с лева на право */
						127, //- 0b01111111
						063, //- 0b00111111
						031, //- 0b00011111
						015, //- 0b00001111
						007, //- 0b00000111
						003, //- 0b00000011
						001, //- 0b00000001
						000  //- 0b00000000
					   };


enum rollupmode {
    LTOR    = 1,
    RTOL    = 2,
    FRTOL   = 3,
    FLTOR   = 4
 };

unsigned char	rollupzerobit(int i, enum rollupmode mode);
char *format_binary(unsigned int x);                                                                                   

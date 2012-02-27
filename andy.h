static const unsigned char r_righttoleft[]={254, 253, 251, 247, 239, 223, 191, 127};
static const unsigned char r_lefttoright[]={127, 191, 223, 239, 247, 251, 253, 254};

enum roolupmode {
    LTOR    = 1,
    RTOL    = 2
 };

unsigned char	roolupbit(int i, enum roolupmode mode);


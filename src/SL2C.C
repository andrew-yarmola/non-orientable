#include "SL2C.h"
const SL2C operator*(const SL2C&x,const SL2C&y)
{
    return SL2C((x.a*y.a+x.b*y.c).z,(x.a*y.b+x.b*y.d).z,
                (x.c*y.a+x.d*y.c).z,(x.c*y.b+x.d*y.d).z);
}

const SL2C inverse(const SL2C&x)
{
    return SL2C(x.d,-x.b,-x.c,x.a);
}

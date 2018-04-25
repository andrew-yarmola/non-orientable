#include "SL2ACJ.h"

const SL2ACJ operator*(const SL2ACJ&x,const SL2ACJ&y)
{
    return SL2ACJ(x.a*y.a+x.b*y.c,x.a*y.b+x.b*y.d,
                  x.c*y.a+x.d*y.c,x.c*y.b+x.d*y.d);
}

const SL2ACJ operator+(const SL2ACJ&x,const SL2ACJ&y)
{
    return SL2ACJ(x.a+y.a,x.b+y.b,
                  x.c+y.c,x.d+y.d);
}

const SL2ACJ operator-(const SL2ACJ&x,const SL2ACJ&y)
{
    return SL2ACJ(x.a-y.a,x.b-y.b,
                  x.c-y.c,x.d-y.d);
}

const SL2ACJ inverse(const SL2ACJ&x)
{
    return SL2ACJ(x.d,-x.b,-x.c,x.a);
}

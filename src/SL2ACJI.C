#include "SL2ACJI.h"

const SL2ACJI operator*(const SL2ACJI&x,const SL2ACJI&y)
{
    if (x.inv) {
        return SL2ACJI(x.a*conj(y.a)+x.b*conj(y.c),x.a*conj(y.b)+x.b*conj(y.d),
                       x.c*conj(y.a)+x.d*conj(y.c),x.c*conj(y.b)+x.d*conj(y.d),
                      !y.inv);
    } else {
        return SL2ACJI(x.a*y.a+x.b*y.c,x.a*y.b+x.b*y.d,
                       x.c*y.a+x.d*y.c,x.c*y.b+x.d*y.d,
                       y.inv);
    }
}

const SL2ACJI inverse(const SL2ACJI&x)
{
    if (x.inv) {
        return SL2ACJI(conj(x.d),conj(-x.b),conj(-x.c),conj(x.a),true);
    } else {
        return SL2ACJI(x.d,-x.b,-x.c,x.a,false);
    }
}

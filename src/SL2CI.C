#include "SL2CI.h"
const SL2CI operator*(const SL2CI&x,const SL2CI&y)
{
    if (x.inv) {
        return SL2CI((x.a*conj(y.a)+x.b*conj(y.c)).z,(x.a*conj(y.b)+x.b*conj(y.d)).z,
                     (x.c*conj(y.a)+x.d*conj(y.c)).z,(x.c*conj(y.b)+x.d*conj(y.d)).z,
                     !y.inv);
    } else {
        return SL2CI((x.a*y.a+x.b*y.c).z,(x.a*y.b+x.b*y.d).z,
                     (x.c*y.a+x.d*y.c).z,(x.c*y.b+x.d*y.d).z,
                      y.inv);
    }
}

const SL2CI inverse(const SL2CI&x)
{
    if (x.inv) {
        return SL2CI(conj(x.d),conj(-x.b),conj(-x.c),conj(x.a),true);
    } else {
        return SL2CI(x.d,-x.b,-x.c,x.a,false);
    }
}

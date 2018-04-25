#ifndef _SL2CI_h_
#define _SL2CI_h_
#include "Complex.h"

struct SL2CI{
    SL2CI():a(1),b(0),c(0),d(1),inv(false){}
    SL2CI(const XComplex&aa,const XComplex&bb,const XComplex&cc,const XComplex&dd,const bool&ii)
        :a(aa),b(bb),c(cc),d(dd),inv(ii){}
    XComplex a,b,c,d;
    bool inv;
};

const SL2CI operator*(const SL2CI&x,const SL2CI&y);
const SL2CI inverse(const SL2CI&x);
#endif

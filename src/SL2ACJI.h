#ifndef _SL2ACJI_h_
#define _SL2ACJI_h_
#include "ACJ.h"

struct SL2ACJI{
    SL2ACJI():a(1),b(0),c(0),d(1),inv(false){}
    SL2ACJI(const ACJ&aa,const ACJ&bb,const ACJ&cc,const ACJ&dd,const bool&ii)
        :a(aa),b(bb),c(cc),d(dd),inv(ii){}
    ACJ a,b,c,d;
    bool inv;
};

const SL2ACJI operator*(const SL2ACJI&x,const SL2ACJI&y);
const SL2ACJI inverse(const SL2ACJI&x);
//const int not_identity(const SL2ACJI&x);
//const int not_zero(const SL2ACJI&x);
#endif

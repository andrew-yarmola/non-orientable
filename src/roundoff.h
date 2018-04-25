#ifndef _roundoff_h_
#define _roundoff_h_
#include <float.h> 
#include <math.h> 

#define EPS DBL_EPSILON
#define HALFEPS (EPS/2)

inline double fabs(double x){return x<0?-x:x;}
void initialize_roundoff();
int roundoff_ok();
#ifndef __sparc__
inline double infinity(){return 1.0/0.0;}
#endif 

#endif

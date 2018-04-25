/*
 *  Params.cpp
 *  mom
 *
 *  Created by Nathaniel Thurston on 27/09/2007.
 *  Copyright 2007 THingith ehf.. All rights reserved.
 *
 */

#include "SL2CI.h"
#include "SL2ACJI.h"
#include "Params.h"

// the crucial map taking B_0 to B_infinity (and taking
// B_infinity to B_1') is of the form
// g(z) = p + 1 / (s^2 z)
//

SL2CI constructG(const Params<XComplex>& params)
{
	XComplex I(0., 1.);
	const XComplex& sl = params.loxodromic_sqrt;
	return SL2CI((I*(params.parabolic*sl).z).z, (I/sl).z, (I*sl).z, XComplex(0.), true);
}

SL2CI constructT(const Params<XComplex>& params, int x, int y)
{
	return SL2CI(XComplex(1.), (params.lattice * double(y) + double(x)).z, XComplex(0.), XComplex(1.), false);
}

SL2ACJI constructG(const Params<ACJ>& params)
{
	ACJ I(XComplex(0., 1.));
	const ACJ& sl = params.loxodromic_sqrt;
	return SL2ACJI(I*params.parabolic*sl, I/sl, I*sl, ACJ(0.), true);
}

SL2ACJI constructT(const Params<ACJ>& params, int x, int y)
{
	return SL2ACJI(ACJ(XComplex(1.)), params.lattice * double(y) + double(x), ACJ(XComplex(0.)), ACJ(XComplex(1.)), false);
}

int g_power(std::string w) {
    int count = 0;
    for (std::string::size_type p = 0; p < w.size(); ++p) {
        if (w[p] == 'g' || w[p] == 'G') ++count;
    }
    return count;
} 

bool g_power_sort(std::string a, std::string b) { return g_power(a) < g_power(b); }


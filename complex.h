#ifndef __STDC_VERSION_COMPLEX_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_COMPLEX_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_COMPLEX_H__ 1
#endif

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2022 Jakob Kaivo <jkk@ung.org>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <__ung.h>

#if (__STDC_VERSION_COMPLEX_H__ < 199901L)
#error "<complex.h> requires C99 or higher"
#endif

#if (defined __STDC_NO_COMPLEX__)
#error "<complex.h> requies compiler support"
#endif

#ifdef __STDC_IEC_559_COMPLEX__
#	define I                                                    _Imaginary_I
#	define imaginary                                              _Imaginary
#	define _Imaginary_I \
						(((union { \
							float _Imaginary __i; \
							float __f; \
						}){ .__f = 1.0 }).__i)
#else
#	define I                                                      _Complex_I
#endif

#define complex                                                         _Complex
#define _Complex_I \
	 					(((union { \
							float _Complex __c; \
							float __f[2]; \
						}){ .__f = { 0.0, 1.0 } }).__c)
#if	(201112L <= __STDC_VERSION_COMPLEX_H__)
#	ifdef __STDC_IEC_559_COMPLEX__
#		define CMPLX(__x, __y) \
		((double complex)((double)(__x) + _Imaginary_I * (double)(__y)))
#		define CMPLXF(__x, __y) \
		((float complex)((float)(__x) + _Imaginary_I * (float)(__y)))
#	else
#		define CMPLX(__x, __y) \
						(((union { \
							double complex __c; \
							double __d[2]; \
						}){ .__d = { __x, __y } }).__c)
#		define CMPLXF(__x, __y) \
						(((union { \
							float complex __c; \
							float __f[2]; \
						}){ .__f = { __x, __y } }).__c)
#	endif
#endif

#ifdef __STDC_IEC_559_COMPLEX__
#	define CMPLXL(__x, __y) \
				((long double complex)((long double)(__x) + \
					_Imaginary_I * (long double)(__y)))
#else
#	define CMPLXL(__x, __y) \
				(((union { \
					long double complex __c; \
					long double __ld[2]; \
				}){ .__ld = { __x, __y } }).__c)
#endif

double cabs(double complex z);
float cabsf(float complex z);
long double cabsl(long double complex z);

double complex cacos(double complex z);
float complex cacosf(float complex z);
long double complex cacosl(long double complex z);

double complex cacosh(double complex z);
float complex cacoshf(float complex z);
long double complex cacoshl(long double complex z);

double carg(double complex z);
float cargf(float complex z);
long double cargl(long double complex z);

double complex casin(double complex z);
float complex casinf(float complex z);
long double complex casinl(long double complex z);

double complex casinh(double complex z);
float complex casinhf(float complex z);
long double complex casinhl(long double complex z);

double complex catan(double complex z);
float complex catanf(float complex z);
long double complex catanl(long double complex z);

double complex catanh(double complex z);
float complex catanhf(float complex z);
long double complex catanhl(long double complex z);

double complex ccos(double complex z);
float complex ccosf(float complex z);
long double complex ccosl(long double complex z);

double complex ccosh(double complex z);
float complex ccoshf(float complex z);
long double complex ccoshl(long double complex z);

double complex cexp(double complex z);
float complex cexpf(float complex z);
long double complex cexpl(long double complex z);

double cimag(double complex z);
float cimagf(float complex z);
long double cimagl(long double complex z);

double complex clog(double complex z);
float complex clogf(float complex z);
long double complex clogl(long double complex z);

double complex conj(double complex z);
float complex conjf(float complex z);
long double complex conjl(long double complex z);

double complex cpow(double complex x, double complex y);
float complex cpowf(float complex x, float complex y);
long double complex cpowl(long double complex x, long double complex y);

double complex cproj(double complex z);
float complex cprojf(float complex z);
long double complex cprojl(long double complex z);

double creal(double complex z);
float crealf(float complex z);
long double creall(long double complex z);

double complex csin(double complex z);
float complex csinf(float complex z);
long double complex csinl(long double complex z);

double complex csinh(double complex z);
float complex csinhf(float complex z);
long double complex csinhl(long double complex z);

double complex csqrt(double complex z);
float complex csqrtf(float complex z);
long double complex csqrtl(long double complex z);

double complex ctan(double complex z);
float complex ctanf(float complex z);
long double complex ctanl(long double complex z);

double complex ctanh(double complex z);
float complex ctanhf(float complex z);
long double complex ctanhl(long double complex z);

#endif

#ifndef __COMPLEX_H__
#define __COMPLEX_H__

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2020 Jakob Kaivo <jkk@ung.org>

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

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/complex/I.c */
#ifdef __STDC_IEC_559_COMPLEX__
#define I                                                           _Imaginary_I
#else
#define I                                                             _Complex_I
#endif
/* ./src/complex/_Complex_I.c */
#define _Complex_I \
	 (((union { \
		float _Complex __c; \
		float __f[2]; \
	}){ .__f = { 0.0, 1.0 } }).__c)
/* ./src/complex/_Imaginary_I.c */
#ifdef __STDC_IEC_559_COMPLEX__
#define _Imaginary_I \
	(((union { \
		float _Imaginary __i; \
		float __f; \
	}){ .__f = 1.0 }).__i)
#endif
/* ./src/complex/complex.c */
#define complex                                                         _Complex
/* ./src/complex/imaginary.c */
#ifdef __STDC_IEC_559_COMPLEX__
#define imaginary                                                     _Imaginary
#endif
#endif

#if	(defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__)
/* ./src/complex/CMPLX.c */
#ifdef __STDC_IEC_559_COMPLEX__
#define CMPLX(__x, __y) \
	((double complex)((double)(__x) + _Imaginary_I * (double)(__y)))
#else
#define CMPLX(__x, __y) \
	(((union { \
		double complex __c; \
		double __d[2]; \
	}){ .__d = { __x, __y } }).__c)
#endif
/* ./src/complex/CMPLXF.c */
#ifdef __STDC_IEC_559_COMPLEX__
#define CMPLXF(__x, __y) \
	((float complex)((float)(__x) + _Imaginary_I * (float)(__y)))
#else
#define CMPLXF(__x, __y) \
	(((union { \
		float complex __c; \
		float __f[2]; \
	}){ .__f = { __x, __y } }).__c)
#endif
/* ./src/complex/CMPLXL.c */
#ifdef __STDC_IEC_559_COMPLEX__
#define CMPLXL(__x, __y) \
	((long double complex)((long double)(__x) + \
		_Imaginary_I * (long double)(__y)))
#else
#define CMPLXL(__x, __y) \
	(((union { \
		long double complex __c; \
		long double __ld[2]; \
	}){ .__ld = { __x, __y } }).__c)
#endif
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/complex/cabs.c */
double cabs(double complex z);
float cabsf(float complex z);
long double cabsl(long double complex z);
/* ./src/complex/cacos.c */
double complex cacos(double complex z);
float complex cacosf(float complex z);
long double complex cacosl(long double complex z);
/* ./src/complex/cacosh.c */
double complex cacosh(double complex z);
float complex cacoshf(float complex z);
long double complex cacoshl(long double complex z);
/* ./src/complex/carg.c */
double carg(double complex z);
float cargf(float complex z);
long double cargl(long double complex z);
/* ./src/complex/casin.c */
double complex casin(double complex z);
float complex casinf(float complex z);
long double complex casinl(long double complex z);
/* ./src/complex/casinh.c */
double complex casinh(double complex z);
float complex casinhf(float complex z);
long double complex casinhl(long double complex z);
/* ./src/complex/catan.c */
double complex catan(double complex z);
float complex catanf(float complex z);
long double complex catanl(long double complex z);
/* ./src/complex/catanh.c */
double complex catanh(double complex z);
float complex catanhf(float complex z);
long double complex catanhl(long double complex z);
/* ./src/complex/ccos.c */
double complex ccos(double complex z);
float complex ccosf(float complex z);
long double complex ccosl(long double complex z);
/* ./src/complex/ccosh.c */
double complex ccosh(double complex z);
float complex ccoshf(float complex z);
long double complex ccoshl(long double complex z);
/* ./src/complex/cexp.c */
double complex cexp(double complex z);
float complex cexpf(float complex z);
long double complex cexpl(long double complex z);
/* ./src/complex/cimag.c */
double cimag(double complex z);
float cimagf(float complex z);
long double cimagl(long double complex z);
/* ./src/complex/clog.c */
double complex clog(double complex z);
float complex clogf(float complex z);
long double complex clogl(long double complex z);
/* ./src/complex/conj.c */
double complex conj(double complex z);
float complex conjf(float complex z);
long double complex conjl(long double complex z);
/* ./src/complex/cpow.c */
double complex cpow(double complex x, double complex y);
float complex cpowf(float complex x, float complex y);
long double complex cpowl(long double complex x, long double complex y);
/* ./src/complex/cproj.c */
double complex cproj(double complex z);
float complex cprojf(float complex z);
long double complex cprojl(long double complex z);
/* ./src/complex/creal.c */
double creal(double complex z);
float crealf(float complex z);
long double creall(long double complex z);
/* ./src/complex/csin.c */
double complex csin(double complex z);
float complex csinf(float complex z);
long double complex csinl(long double complex z);
/* ./src/complex/csinh.c */
double complex csinh(double complex z);
float complex csinhf(float complex z);
long double complex csinhl(long double complex z);
/* ./src/complex/csqrt.c */
double complex csqrt(double complex z);
float complex csqrtf(float complex z);
long double complex csqrtl(long double complex z);
/* ./src/complex/ctan.c */
double complex ctan(double complex z);
float complex ctanf(float complex z);
long double complex ctanl(long double complex z);
/* ./src/complex/ctanh.c */
double complex ctanh(double complex z);
float complex ctanhf(float complex z);
long double complex ctanhl(long double complex z);
#endif


#endif

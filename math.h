#ifndef __MATH_H__
#define __MATH_H__

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

#if defined _XOPEN_SOURCE && _XOPEN_SOURCE - 1 < 0
#undef _XOPEN_SOURCE
#define _XOPEN_SOURCE 400
#endif

#if defined _XOPEN_SOURCE && !defined _POSIX_C_SOURCE
#	if (_XOPEN_SOURCE >= 700)
#		define _POSIX_C_SOURCE 200809L
#	elif (_XOPEN_SOURCE >= 600)
#		define _POSIX_C_SOURCE 200112L
#	elif (_XOPEN_SOURCE >= 500)
#		define _POSIX_C_SOURCE 199506L
#	else
#		define _POSIX_C_SOURCE 2
#	endif
#endif

#if defined _POSIX_C_SOURCE && !defined _POSIX_SOURCE
#	define _POSIX_SOURCE
#endif

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

/* ./src/math/HUGE_VAL.c */
#define HUGE_VAL                       (1.0) /* TODO: massive positive double */

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/math/FP_FAST_FMA.c */
#if 0          /* if fma is generally as fast or faster than multiply and add */
#define FP_FAST_FMA
#else
#undef FP_FAST_FMA
#endif
/* ./src/math/FP_FAST_FMAF.c */
#if 0         /* if fmaf is generally as fast or faster than multiply and add */
#define FP_FAST_FMAF
#else
#undef FP_FAST_FMAF
#endif
/* ./src/math/FP_FAST_FMAL.c */
#if 0         /* if fmal is generally as fast or faster than multiply and add */
#define FP_FAST_FMAL
#else
#undef FP_FAST_FMAL
#endif
/* ./src/math/FP_ILOGB0.c */
#define FP_ILOGB0                                                        INT_MIN
/* ./src/math/FP_ILOGBNAN.c */
#define FP_ILOGBNAN                                                      INT_MAX
/* ./src/math/FP_INFINITE.c */
#define FP_INFINITE                                                            0
/* ./src/math/FP_NAN.c */
#define FP_NAN                                                                 1
/* ./src/math/FP_NORMAL.c */
#define FP_NORMAL                                                              2
/* ./src/math/FP_SUBNORMAL.c */
#define FP_SUBNORMAL                                                           3
/* ./src/math/FP_ZERO.c */
#define FP_ZERO                                                                4
/* ./src/math/HUGE_VALF.c */
#define HUGE_VALF                         0.0 /* TODO: massive positive float */
/* ./src/math/HUGE_VALL.c */
#define HUGE_VALL                  0.0  /* TODO: massive positive long double */
/* ./src/math/INFINITY.c */
#define INFINITY                9e999 /* TODO: positive or unsigned float infinity */
/* ./src/math/MATH_ERREXCEPT.c */
#define MATH_ERREXCEPT                                                         2
/* ./src/math/MATH_ERRNO.c */
#define MATH_ERRNO                                                             1
/* ./src/math/NAN.c */
#define NAN           0.0                           /* TODO: float quiet NaN */
/* ./src/math/fpclassify.c */
#define fpclassify(__x) \
	              ((sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : \
		       (sizeof (__x) == sizeof (double)) ? __fpclassify(__x) : \
		                                          __fpclassifyl(__x))
/* ./src/math/isfinite.c */
#define isfinite(__x)                           (fpclassify(__x) != FP_INFINITE)
/* ./src/math/isgreater.c */
#define isgreater(__x, __y)                                      ((__x) > (__y))
/* ./src/math/isgreaterequal.c */
#define isgreaterequal(__x, __y)                                ((__x) >= (__y))
/* ./src/math/isinf.c */
#define isinf(__x)                              (fpclassify(__x) == FP_INFINITE)
/* ./src/math/isless.c */
#define isless(__x, __y)                                         ((__x) < (__y))
/* ./src/math/islessequal.c */
#define islessequal(__x, __y)                                   ((__x) <= (__y))
/* ./src/math/islessgreater.c */
#define islessgreater(__x, __y)                 ((__x) < (__y) || (__x) > (__y))
/* ./src/math/isnan.c */
#define isnan(__x)                                   (fpclassify(__x) == FP_NAN)
/* ./src/math/isnormal.c */
#define isnormal(__x)                             (fpclassify(__x) == FP_NORMAL)
/* ./src/math/isunordered.c */
#define isunordered(__x, __y)                                         /* TODO */
/* ./src/math/math_errhandling.c */
#define math_errhandling                           (MATH_ERRNO | MATH_ERREXCEPT)
/* ./src/math/signbit.c */
#define signbit(__x) \
	(sizeof(__x) == sizeof(long double) ? \
		((((union { \
			long double __f; \
			char __c[sizeof(__x)]; \
		}){.__f = (__x)}).__c[sizeof(__x)-1] & 0x80) == 0x80 ? 1 : 0) : \
	sizeof(__x) == sizeof(double) ? \
		((((union { \
			double __f; \
			char __c[sizeof(__x)]; \
		}){.__f = (__x)}).__c[sizeof(__x)-1] & 0x80) == 0x80 ? 1 : 0) : \
		(((union { \
			float __f; \
			char __c[sizeof(__x)]; \
		}){.__f = (__x)}).__c[sizeof(__x)-1] & 0x80) == 0x80 ? 1 : 0)
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/math/MAXFLOAT.c */
#define MAXFLOAT                                                           1E+37
/* ./src/math/M_1_PI.c */
#define M_1_PI 1.0/3.14159
/* ./src/math/M_2_PI.c */
#define M_2_PI 2.0/3.14159
/* ./src/math/M_2_SQRTPI.c */
#define M_2_SQRTPI 2.0/sqrt(3.14159)
/* ./src/math/M_E.c */
#define M_E                                                        value of e
/* ./src/math/M_LN10.c */
#define M_LN10     // log_e 10
/* ./src/math/M_LN2.c */
#define M_LN2      // log_e 2
/* ./src/math/M_LOG10E.c */
#define M_LOG10E    // log_10 e
/* ./src/math/M_LOG2E.c */
#define M_LOG2E     // log_2 e
/* ./src/math/M_PI.c */
#define M_PI 3.14159
/* ./src/math/M_PI_2.c */
#define M_PI_2 3.14159/2.0
/* ./src/math/M_PI_4.c */
#define M_PI_4 3.14159/4.0
/* ./src/math/M_SQRT1_2.c */
#define M_SQRT1_2 1.0/sqrt(2.0)
/* ./src/math/M_SQRT2.c */
#define M_SQRT2 sqrt(2.0)
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/math/double_t.c */
#ifndef __TYPE_double_t_DEFINED__
#define __TYPE_double_t_DEFINED__
#if FLT_EVAL_METHOD == 0
typedef double double_t;
#elif FLT_EVAL_METHOD == 1
typedef double double_t;
#elif FLT_EVAL_METHOD == 2
typedef long double double_t;
#else
 /* implementation defined */
#endif
#endif

/* ./src/math/float_t.c */
#ifndef __TYPE_float_t_DEFINED__
#define __TYPE_float_t_DEFINED__
#if FLT_EVAL_METHOD == 0
typedef float float_t;
#elif FLT_EVAL_METHOD == 1
typedef double float_t;
#elif FLT_EVAL_METHOD == 2
typedef long double float_t;
#else
 /* implementation defined */
#endif
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/math/signgam.c */
extern int signgam;
#endif

/* ./src/math/__fpclassify.c */
int __fpclassify(double x);
int __fpclassifyf(float x);
int __fpclassifyl(long double x);

/* ./src/math/acos.c */
double acos(double x);
float acosf(float x);
long double acosl(long double x);
/* ./src/math/asin.c */
double asin(double x);
float asinf(float x);
long double asinl(long double x);
/* ./src/math/atan.c */
double atan(double x);
float atanf(float x);
long double atanl(long double x);
/* ./src/math/atan2.c */
double atan2(double y, double x);
float atan2f(float y, float x);
long double atan2l(long double y, long double x);
/* ./src/math/ceil.c */
double ceil(double x);
float ceilf(float x);
long double ceill(long double x);
/* ./src/math/cos.c */
double cos(double x);
float cosf(float x);
long double cosl(long double x);
/* ./src/math/cosh.c */
double cosh(double x);
float coshf(float x);
long double coshl(long double x);
/* ./src/math/exp.c */
double exp(double x);
float expf(float x);
long double expl(long double x);
/* ./src/math/fabs.c */
double fabs(double x);
float fabsf(float x);
long double fabsl(long double x);
/* ./src/math/floor.c */
double floor(double x);
float floorf(float x);
long double floorl(long double x);
/* ./src/math/fmod.c */
double fmod(double x, double y);
float fmodf(float x, float y);
long double fmodl(long double x, long double y);
/* ./src/math/frexp.c */
double frexp(double value, int *exp);
float frexpf(float value, int *exp);
long double frexpl(long double value, int *exp);
/* ./src/math/ldexp.c */
double ldexp(double x, int exp);
float ldexpf(float x, int exp);
long double ldexpl(long double x, int exp);
/* ./src/math/log.c */
double log(double x);
float logf(float x);
long double logl(long double x);
/* ./src/math/log10.c */
double log10(double x);
float log10f(float x);
long double log10l(long double x);
/* ./src/math/modf.c */
double modf(double value, double *iptr);
float modff(float value, float *iptr);
long double modfl(long double value, long double *iptr);
/* ./src/math/pow.c */
double pow(double x, double y);
float powf(float x, float y);
long double powl(long double x, long double y);
/* ./src/math/sin.c */
double sin(double x);
float sinf(float x);
long double sinl(long double x);
/* ./src/math/sinh.c */
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
/* ./src/math/sqrt.c */
double sqrt(double x);
float sqrtf(float x);
long double sqrtl(long double x);
/* ./src/math/tan.c */
double tan(double x);
float tanf(float x);
long double tanl(long double x);
/* ./src/math/tanh.c */
double tanh(double x);
float tanhf(float x);
long double tanhl(long double x);

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/math/copysign.c */
double copysign(double x, double y);
float copysignf(float x, float y);
long double copysignl(long double x, long double y);
/* ./src/math/exp2.c */
double exp2(double x);
float exp2f(float x);
long double exp2l(long double x);
/* ./src/math/fdim.c */
double fdim(double x, double y);
float fdimf(float x, float y);
long double fdiml(long double x, long double y);
/* ./src/math/fma.c */
double fma(double x, double y, double z);
float fmaf(float x, float y, float z);
long double fmal(long double x, long double y, long double z);
/* ./src/math/fmax.c */
double fmax(double x, double y);
float fmaxf(float x, float y);
long double fmaxl(long double x, long double y);
/* ./src/math/fmin.c */
double fmin(double x, double y);
float fminf(float x, float y);
long double fminl(long double x, long double y);
/* ./src/math/llrint.c */
long long int llrint(double x);
long long int llrintf(float x);
long long int llrintl(long double x);
/* ./src/math/llround.c */
long long int llround(double x);
long long int llroundf(float x);
long long int llroundl(long double x);
/* ./src/math/log2.c */
double log2(double x);
float log2f(float x);
long double log2l(long double x);
/* ./src/math/lrint.c */
long int lrint(double x);
long int lrintf(float x);
long int lrintl(long double x);
/* ./src/math/lround.c */
long int lround(double x);
long int lroundf(float x);
long int lroundl(long double x);
/* ./src/math/nan.c */
double nan(const char *tagp);
float nanf(const char *tagp);
long double nanl(const char *tagp);
/* ./src/math/nearbyint.c */
double nearbyint(double x);
float nearbyintf(float x);
long double nearbyintl(long double x);
/* ./src/math/nexttoward.c */
double nexttoward(double x, double y);
float nexttowardf(float x, float y);
long double nexttowardl(long double x, long double y);
/* ./src/math/remquo.c */
double remquo(double x, double y, int *quo);
float remquof(float x, float y, int *quo);
long double remquol(long double x, long double y, int *quo);
/* ./src/math/round.c */
double round(double x);
float roundf(float x);
long double roundl(long double x);
/* ./src/math/scalbln.c */
double scalbln(double x, long int n);
float scalblnf(float x, long int n);
long double scalblnl(long double x, long int n);
/* ./src/math/scalbn.c */
double scalbn(double x, int n);
float scalbnf(float x, int n);
long double scalbnl(long double x, int n);
/* ./src/math/tgamma.c */
double tgamma(double x);
float tgammaf(float x);
long double tgammal(long double x);
/* ./src/math/trunc.c */
double trunc(double x);
float truncf(float x);
long double truncl(long double x);
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__) || \
	(defined _XOPEN_SOURCE)
/* ./src/math/erf.c */
double erf(double x);
float erff(float x);
long double erfl(long double x);
/* ./src/math/erfc.c */
double erfc(double x);
float erfcf(float x);
long double erfcl(long double x);
/* ./src/math/hypot.c */
double hypot(double x, double y);
float hypotf(float x, float y);
long double hypotl(long double x, long double y);
/* ./src/math/lgamma.c */
double lgamma(double x);
float lgammaf(float x);
long double lgammal(long double x);
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/math/acosh.c */
double acosh(double x);
float acoshf(float x);
long double acoshl(long double x);
/* ./src/math/asinh.c */
double asinh(double x);
float asinhf(float x);
long double asinhl(long double x);
/* ./src/math/atanh.c */
double atanh(double x);
float atanhf(float x);
long double atanhl(long double x);
/* ./src/math/cbrt.c */
double cbrt(double x);
float cbrtf(float x);
long double cbrtl(long double x);
/* ./src/math/expm1.c */
double expm1(double x);
float expm1f(float x);
long double expm1l(long double x);
/* ./src/math/ilogb.c */
int ilogb(double x);
int ilogbf(float x);
int ilogbl(long double x);
/* ./src/math/log1p.c */
double log1p(double x);
float log1pf(float x);
long double log1pl(long double x);
/* ./src/math/logb.c */
double logb(double x);
float logbf(float x);
long double logbl(long double x);
/* ./src/math/nextafter.c */
double nextafter(double x, double y);
float nextafterf(float x, float y);
long double nextafterl(long double x, long double y);
/* ./src/math/rint.c */
double rint(double x);
float rintf(float x);
long double rintl(long double x);
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/math/remainder.c */
double remainder(double x, double y);
float remainderf(float x, float y);
long double remainderl(long double x, long double y);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/math/j0.c */
double j0(double __x);
/* ./src/math/j1.c */
double j1(double __x);
/* ./src/math/jn.c */
double jn(int __n, double __x);
/* ./src/math/y0.c */
double y0(double __x);
/* ./src/math/y1.c */
double y1(double __x);
/* ./src/math/yn.c */
double yn(int __n, double __x);
#endif

#if	(defined _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
/* ./src/math/gamma.c */
double gamma(double __x);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/math/scalb.c */
double scalb(double __x, double __n);
#endif


#endif

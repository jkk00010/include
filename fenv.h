#ifndef __STDC_VERSION_FENV_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_FENV_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_FENV_H__ 1
#endif

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

#include <__ung.h>

#define FE_ALL_EXCEPT (FE_DIVBYZERO|FE_INEXACT|FE_INVALID|FE_OVERFLOW|FE_UNDERFLOW)
#define FE_DFL_ENV                                               (&__FE_DFL_ENV)
#define FE_DIVBYZERO                                                      (1<<0)
#define FE_DOWNWARD                                                          (3)
#define FE_INEXACT                                                        (1<<1)
#define FE_INVALID                                                        (1<<2)
#define FE_OVERFLOW                                                       (1<<3)
#define FE_TONEAREST                                                         (1)
#define FE_TOWARDZERO                                                        (0)
#define FE_UNDERFLOW                                                      (1<<4)
#define FE_UPWARD                                                            (2)

typedef struct { struct __fenv_t *__impl; }                              fenv_t;
typedef struct { struct __fexcept_t *__impl; }                        fexcept_t;

int feclearexcept(int);
int fegetenv(fenv_t *);
int fegetexceptflag(fexcept_t *, int);
int fegetround(void);
int feholdexcept(fenv_t *);
int feraiseexcept(int);
int fesetenv(const fenv_t *);
int fesetexceptflag(const fexcept_t *, int);
int fesetround(int);
int fetestexcept(int);
int feupdateenv(const fenv_t *);
extern const fenv_t __FE_DFL_ENV;

#ifndef __UNG_INTERNAL__
int __feclearexcept(const char *, const char *, unsigned long long, int);
#define feclearexcept(__i) __feclearexcept(__FILE__, __func__, __LINE__, __i)
int __feclearexcept(const char *, const char *, unsigned long long, int);
#define feclearexcept(__i) __feclearexcept(__FILE__, __func__, __LINE__, __i)
int __fegetexceptflag(const char *, const char *, unsigned long long, fexcept_t *, int);
#define fegetexceptflag(__e, __i) __fegetexceptflag(__FILE__, __func__, __LINE__, __e, __i)
int __fegetround(const char *, const char *, unsigned long long);
#define fegetround() __fegetround(__FILE__, __func__, __LINE__)
int __feholdexcept(const char *, const char *, unsigned long long, fenv_t *);
#define feclearexcept(__e) __feclearexcept(__FILE__, __func__, __LINE__, __e)
int __feraiseexcept(const char *, const char *, unsigned long long, int);
#define feraiseexcept(__i) __feraiseexcept(__FILE__, __func__, __LINE__, __i)
int __fesetenv(const char *, const char *, unsigned long long, const fenv_t *);
#define fesetenv(__e) __fesetenv(__FILE__, __func__, __LINE__, __e)
int __fesetexceptflag(const char *, const char *, unsigned long long, const fexcept_t *, int);
#define fesetexceptflag(__e, __i) __fesetexceptflag(__FILE__, __func__, __LINE__, __e, __i)
int __fesetround(const char *, const char *, unsigned long long, int);
#define fesetround(__i) __fesetround(__FILE__, __func__, __LINE__, __i)
int __fetestexcept(const char *, const char *, unsigned long long, int);
#define fetestexcept(__i) __fetestexcept(__FILE__, __func__, __LINE__, __i)
int __feupdateenv(const char *, const char *, unsigned long long, const fenv_t *);
#define feupdateenv(__e) __feupdateenv(__FILE__, __func__, __LINE__, __e)
#endif

#endif

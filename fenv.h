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

#if (__STDC_VERSION_FENV_H__ < 199901L)
# error "<fenv.h> requires C99 or higher"
#endif

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

typedef unsigned long long int                                           fenv_t;
typedef unsigned long long int                                        fexcept_t;

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

#define feclearexcept(__i) \
	__checked_i(__FILE__, __func__, __LINE__, feclearexcept, __i)
#define fegetenv(__f) \
	__checked_i(__FILE__, __func__, __LINE__, fegetenv, __f)
#define fegetexceptflag(__f, __i) \
	__checked_i(__FILE__, __func__, __LINE__, fegetexceptflag, __f, __i)
#define fegetround() \
	__checked_i(__FILE__, __func__, __LINE__, fegetround)
#define feholdexcept(__f) \
	__checked_i(__FILE__, __func__, __LINE__, feholdexcept, __f)
#define feraiseexcept(__i) \
	__checked_i(__FILE__, __func__, __LINE__, feraiseexcept, __i)
#define fesetenv(__f) \
	__checked_i(__FILE__, __func__, __LINE__, fesetenv, __f)
#define fesetexceptflag(__f, __i) \
	__checked_i(__FILE__, __func__, __LINE__, fesetexceptflag, __f, __i)
#define fesetround(__i) \
	__checked_i(__FILE__, __func__, __LINE__, fesetround, __i)
#define fetestexcept(__i) \
	__checked_i(__FILE__, __func__, __LINE__, fetestexcept, __i)
#define feupdateenv(__f) \
	__checked_i(__FILE__, __func__, __LINE__, feupdateenv, __f)

extern const fenv_t __FE_DFL_ENV;

#endif

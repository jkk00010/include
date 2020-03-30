#ifndef __FENV_H__
#define __FENV_H__

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
/* ./src/fenv/FE_ALL_EXCEPT.c */
#define FE_ALL_EXCEPT (FE_DIVBYZERO|FE_INEXACT|FE_INVALID|FE_OVERFLOW|FE_UNDERFLOW)
/* ./src/fenv/FE_DFL_ENV.c */
#define FE_DFL_ENV                                   ((const fenv_t*)FE_DFL_ENV)
/* ./src/fenv/FE_DIVBYZERO.c */
#define FE_DIVBYZERO                                                      (1<<0)
/* ./src/fenv/FE_DOWNWARD.c */
#define FE_DOWNWARD                                                          (3)
/* ./src/fenv/FE_INEXACT.c */
#define FE_INEXACT                                                        (1<<1)
/* ./src/fenv/FE_INVALID.c */
#define FE_INVALID                                                        (1<<2)
/* ./src/fenv/FE_OVERFLOW.c */
#define FE_OVERFLOW                                                       (1<<3)
/* ./src/fenv/FE_TONEAREST.c */
#define FE_TONEAREST                                                         (1)
/* ./src/fenv/FE_TOWARDZERO.c */
#define FE_TOWARDZERO                                                        (0)
/* ./src/fenv/FE_UNDERFLOW.c */
#define FE_UNDERFLOW                                                      (1<<4)
/* ./src/fenv/FE_UPWARD.c */
#define FE_UPWARD                                                            (2)
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/fenv/fenv_t.c */
#ifndef __TYPE_fenv_t_DEFINED__
#define __TYPE_fenv_t_DEFINED__
typedef unsigned long long int                                           fenv_t;
#endif

/* ./src/fenv/fexcept_t.c */
#ifndef __TYPE_fexcept_t_DEFINED__
#define __TYPE_fexcept_t_DEFINED__
typedef unsigned long long int                                        fexcept_t;
#endif

#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/fenv/feclearexcept.c */
int feclearexcept(int __excepts);
/* ./src/fenv/fegetenv.c */
int fegetenv(fenv_t *__envp);
/* ./src/fenv/fegetexceptflag.c */
int fegetexceptflag(fexcept_t *__flagp, int __excepts);
/* ./src/fenv/fegetround.c */
int fegetround(void);
/* ./src/fenv/feholdexcept.c */
int feholdexcept(fenv_t *__envp);
/* ./src/fenv/feraiseexcept.c */
int feraiseexcept(int __excepts);
/* ./src/fenv/fesetenv.c */
int fesetenv(const fenv_t *__envp);
/* ./src/fenv/fesetexceptflag.c */
int fesetexceptflag(const fexcept_t *__flagp, int __excepts);
/* ./src/fenv/fesetround.c */
int fesetround(int __round);
/* ./src/fenv/fetestexcept.c */
int fetestexcept(int __excepts);
/* ./src/fenv/feupdateenv.c */
int feupdateenv(const fenv_t *__envp);
#endif


#endif

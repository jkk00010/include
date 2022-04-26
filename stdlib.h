#ifndef __STDC_VERSION_STDLIB_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_STDLIB_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_STDLIB_H__ 1
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

/* ./src/stdlib/EXIT_FAILURE.c */
#define EXIT_FAILURE                                                         (1)
/* ./src/stdlib/EXIT_SUCCESS.c */
#define EXIT_SUCCESS                                                         (0)
/* ./src/stdlib/MB_CUR_MAX.c */
#define MB_CUR_MAX                                                           (4)
/* ./src/stdlib/RAND_MAX.c */
#define RAND_MAX                                                         (32767)
/* src/stddef/NULL.c */
#define NULL                                                          ((void*)0)

#if	(defined _XOPEN_SOURCE)
/* src/sys/wait/WEXITSTATUS.c */
#define WEXITSTATUS(__stat_val)                              (__stat_val & 0xff)
/* src/sys/wait/WIFEXITED.c */
#define WIFEXITED(__stat_val)                                (__stat_val <= 255)
/* src/sys/wait/WIFSIGNALED.c */
#define WIFSIGNALED(__stat_val)                             (__stat_val & 0x100)
/* src/sys/wait/WIFSTOPPED.c */
#define WIFSTOPPED(__stat_val)                              (__stat_val & 0x200)
/* src/sys/wait/WNOHANG.c */
#define WNOHANG                                                           (1<<0)
/* src/sys/wait/WSTOPSIG.c */
#define WSTOPSIG(__stat_val)                                 (__stat_val & 0xff)
/* src/sys/wait/WTERMSIG.c */
#define WTERMSIG(__stat_val)                                 (__stat_val & 0xff)
/* src/sys/wait/WUNTRACED.c */
#define WUNTRACED                                                         (1<<1)
#endif

/* ./src/stdlib/div_t.c */
#ifndef __TYPE_div_t_DEFINED__
#define __TYPE_div_t_DEFINED__
typedef struct {
	int quot;
	int rem;
} div_t;
#endif

/* ./src/stdlib/ldiv_t.c */
#ifndef __TYPE_ldiv_t_DEFINED__
#define __TYPE_ldiv_t_DEFINED__
typedef struct {
	long int quot;
	long int rem;
} ldiv_t;
#endif

/* src/stddef/size_t.c */
#ifndef __TYPE_size_t_DEFINED__
#define __TYPE_size_t_DEFINED__
#ifdef __LLP64__
# if !defined __STDC_VERSION__ || __STDC_VERSION__ < 199909L
typedef unsigned __int64                                                 size_t;
# else
typedef unsigned long long int                                           size_t;
# endif
#else
typedef unsigned long int                                                size_t;
#endif
#endif

/* src/stddef/wchar_t.c */
#ifndef __TYPE_wchar_t_DEFINED__
#define __TYPE_wchar_t_DEFINED__
typedef int                                                             wchar_t;
#endif


#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/stdlib/lldiv_t.c */
#ifndef __TYPE_lldiv_t_DEFINED__
#define __TYPE_lldiv_t_DEFINED__
typedef struct {
	long long int quot;
	long long int rem;
} lldiv_t;
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 200112L)
#define _Noreturn
#endif

/* ./src/stdlib/abort.c */
_Noreturn void abort(void);
/* ./src/stdlib/abs.c */
int abs(int __j);
/* ./src/stdlib/atexit.c */
int atexit(void (*__func)(void));
/* ./src/stdlib/atof.c */
double atof(const char * __nptr);
/* ./src/stdlib/atoi.c */
int atoi(const char * __nptr);
/* ./src/stdlib/atol.c */
long int atol(const char * __nptr);
/* ./src/stdlib/bsearch.c */
void * bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void*));
/* ./src/stdlib/calloc.c */
void * calloc(size_t __nmemb, size_t __size);
/* ./src/stdlib/div.c */
div_t div(int __numer, int __denom);
/* ./src/stdlib/exit.c */
_Noreturn void exit(int __status);
/* ./src/stdlib/free.c */
void free(void * __ptr);
/* ./src/stdlib/getenv.c */
char * getenv(const char * __name);
/* ./src/stdlib/labs.c */
long int labs(long int __j);
/* ./src/stdlib/ldiv.c */
ldiv_t ldiv(long int __numer, long int __denom);
/* ./src/stdlib/malloc.c */
void * malloc(size_t __size);
/* ./src/stdlib/mblen.c */
int mblen(const char * __s, size_t __n);
/* ./src/stdlib/mbstowcs.c */
size_t mbstowcs(wchar_t * restrict __pwcs, const char * restrict __s, size_t __n);
/* ./src/stdlib/mbtowc.c */
int mbtowc(wchar_t * restrict __pwc, const char * restrict __s, size_t __n);
/* ./src/stdlib/qsort.c */
void qsort(void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
/* ./src/stdlib/rand.c */
int rand(void);
/* ./src/stdlib/realloc.c */
void * realloc(void * __ptr, size_t __size);
/* ./src/stdlib/srand.c */
void srand(unsigned int __seed);
/* ./src/stdlib/strtod.c */
double strtod(const char * restrict __nptr, char ** restrict __endptr);
/* ./src/stdlib/strtol.c */
long int strtol(const char * restrict __nptr, char ** restrict __endptr, int __base);
/* ./src/stdlib/strtoul.c */
unsigned long int strtoul(const char * __nptr, char ** __endptr, int __base);
/* ./src/stdlib/system.c */
int system(const char * __string);
/* ./src/stdlib/wcstombs.c */
size_t wcstombs(char * restrict __s, const wchar_t * restrict __pwcs, size_t __n);
/* ./src/stdlib/wctomb.c */
int wctomb(char * __s, wchar_t __wchar);

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/stdlib/_Exit.c */
_Noreturn void _Exit(int __status);
/* ./src/stdlib/atoll.c */
long long int atoll(const char *__nptr);
/* ./src/stdlib/llabs.c */
long long int llabs(long long int __j);
/* ./src/stdlib/lldiv.c */
lldiv_t lldiv(long long int __numer, long long int __denom);
/* ./src/stdlib/strtof.c */
float strtof(const char * restrict __nptr, char ** restrict __endptr);
/* ./src/stdlib/strtold.c */
long double strtold(const char * restrict __nptr, char ** restrict __endptr);
/* ./src/stdlib/strtoll.c */
long long int strtoll(const char * restrict __nptr, char ** restrict __endptr, int __base);
/* ./src/stdlib/strtoull.c */
unsigned long long int strtoull(const char * restrict __nptr, char ** restrict __endptr, int __base);
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/stdlib/getsubopt.c */
int getsubopt(char ** __optionp, char * const * __keylistp, char ** __valuep);
/* ./src/stdlib/mkstemp.c */
int mkstemp(char * __template);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/stdlib/drand48.c */
double drand48(void);
/* ./src/stdlib/erand48.c */
double erand48(unsigned short xsubi[3]);
/* ./src/stdlib/jrand48.c */
long jrand48(unsigned short xsub[3]);
/* ./src/stdlib/lcong48.c */
void lcong48(unsigned short param[7]);
/* ./src/stdlib/lrand48.c */
long lrand48(void);
/* ./src/stdlib/mrand48.c */
long mrand48(void);
/* ./src/stdlib/nrand48.c */
long nrand48(unsigned short xsubi[3]);
/* ./src/stdlib/putenv.c */
int putenv(char * __string);
/* ./src/stdlib/seed48.c */
unsigned short * seed48(unsigned short seed16v[3]);
/* ./src/stdlib/setkey.c */
void setkey(const char * __key);
/* ./src/stdlib/srand48.c */
void srand48(long __seedval);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/stdlib/a64l.c */
long a64l(const char *__s);
/* ./src/stdlib/grantpt.c */
int grantpt(int __fildes);
/* ./src/stdlib/initstate.c */
char * initstate(unsigned __seed, char * __state, size_t __size);
/* ./src/stdlib/l64a.c */
char * l64a(long __value);
/* ./src/stdlib/ptsname.c */
char * ptsname(int __fildes);
/* ./src/stdlib/random.c */
long random(void);
/* ./src/stdlib/realpath.c */
char * realpath(const char * restrict __file_name, char * restrict __resolved_name);
/* ./src/stdlib/setstate.c */
char * setstate(char * __state);
/* ./src/stdlib/srandom.c */
void srandom(unsigned __seed);
/* ./src/stdlib/unlockpt.c */
int unlockpt(int __fildes);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 600)
/* ./src/stdlib/ttyslot.c */
int ttyslot(void);
/* ./src/stdlib/valloc.c */
void *valloc(size_t __size);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
/* ./src/stdlib/ecvt.c */
char *ecvt(double __value, int __ndigit, int *__decpt, int *__sign);
/* ./src/stdlib/fcvt.c */
char *fcvt(double __value, int __ndigit, int *__decpt, int *__sign);
/* ./src/stdlib/gcvt.c */
char *gcvt(double __value, int __ndigit, char *__buf);
/* ./src/stdlib/mktemp.c */
char *mktemp(char *__template);
#endif


#endif

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

#include <__ung.h>

#define EXIT_FAILURE                                                         (1)
#define EXIT_SUCCESS                                                         (0)
#define MB_CUR_MAX                                                           (4)
#define RAND_MAX                                                         (32767)
#define NULL                                                          ((void*)0)

#ifndef __TYPE_div_t_DEFINED__
#define __TYPE_div_t_DEFINED__
typedef struct {
	int quot;
	int rem;
} div_t;
#endif

#ifndef __TYPE_ldiv_t_DEFINED__
#define __TYPE_ldiv_t_DEFINED__
typedef struct {
	long int quot;
	long int rem;
} ldiv_t;
#endif

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

#ifndef __TYPE_wchar_t_DEFINED__
#define __TYPE_wchar_t_DEFINED__
typedef int                                                             wchar_t;
#endif


#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
#ifndef __TYPE_lldiv_t_DEFINED__
#define __TYPE_lldiv_t_DEFINED__
typedef struct {
	long long int quot;
	long long int rem;
} lldiv_t;
#endif
#endif

_Noreturn void abort(void);
#define abort() \
	__checked(__FILE__, __func__, __LINE__, abort)

int abs(int __j);
#define abs(__j) \
	__checked_i(__FILE__, __func__, __LINE__, abs, __j)

int atexit(void (*__func)(void));
#define atexit(__func) \
	__checked_i(__FILE__, __func__, __LINE__, atext, __func)

double atof(const char * __nptr);
#define atof(__s) \
	__checked_d(__FILE__, __func__, __LINE__, atof, __s)

int atoi(const char * __nptr);
#define atoi(__s) \
	__checked_i(__FILE__, __func__, __LINE__, atoi, __s)

long int atol(const char * __nptr);
#define atol(__s) \
	__checked_l(__FILE__, __func__, __LINE__, atol, __s)

void * bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void*));
#define bsearch(__k, __b, __n, __s, __c) \
	__checked_p(__FILE__, __func__, __LINE__, bsearch, __k, __b, __n, __s, __c)

void * calloc(size_t __nmemb, size_t __size);
#define calloc(__n, __s) \
	__checked_p(__FILE__, __func__, __LINE__, calloc, __n, __s)

div_t div(int __numer, int __denom);
#define div(__n, __d) \
	__checked_div(__FILE__, __func__, __LINE__, __n, __d)

_Noreturn void exit(int __status);
#define exit(__s) \
	__checked(__FILE__, __func__, __LINE__, exit, __s)

void free(void * __ptr);
#define free(__p) \
	__checked(__FILE__, __func__, __LINE__, free, __p)

char * getenv(const char * __name);
#define getenv(__n) \
	__checked_p(__FILE__, __func__, __LINE__, getenv, __n)

long int labs(long int __j);
#define labs(__j) \
	__checked_l(__FILE__, __func__, __LINE__, labs, __j)

ldiv_t ldiv(long int __numer, long int __denom);
#define ldiv(__n, __d) \
	__checked_ldiv(__FILE__, __func__, __LINE__, ldiv, __n, __d)

void * malloc(size_t __size);
#define malloc(__s) \
	__checked_p(__FILE__, __func__, __LINE__, malloc, __s)

int mblen(const char * __s, size_t __n);
#define mblen(__s, __n) \
	__checked_i(__FILE__, __func__, __LINE__, mblen, __s, __n)

size_t mbstowcs(wchar_t * restrict __pwcs, const char * restrict __s, size_t __n);
#define mbstowcs(__pwcs, __s, __n) \
	__checked_s(__FILE__, __func__, __LINE__, mbstowcs, __pwcs, __s, __n)

int mbtowc(wchar_t * restrict __pwc, const char * restrict __s, size_t __n);
#define mbtowc(__pwc, __s, __n) \
	__checked_i(__FILE__, __func__, __LINE__, mbtowc, __pwd, __s, __n)

void qsort(void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
#define qsort(__b, __n, __s, __c) \
	__checked(__FILE__, __func__, __LINE__, qsort, __b, __n, __s, __c)

int rand(void);
#define rand() \
	__checked_i(__FILE__, __func__, __LINE__, rand)

void * realloc(void * __ptr, size_t __size);
#define realloc(__p, __s) \
	__checked_p(__FILE__, __func__, __LINE__, realloc, __p, __s)

void srand(unsigned int __seed);
#define srand(__s) \
	__checked(__FILE__, __func__, __LINE__, srand, __s)

double strtod(const char * restrict __nptr, char ** restrict __endptr);
#define strtod(__s, __e) \
	__checked_d(__FILE__, __func__, __LINE__, strtod, __s, __e)

long int strtol(const char * restrict __nptr, char ** restrict __endptr, int __base);
#define strtol(__s, __e, __b) \
	__checked_l(__FILE__, __func__, __LINE__, strtol, __s, __e, __b)

unsigned long int strtoul(const char * __nptr, char ** __endptr, int __base);
#define strtoul(__s, __e, __b) \
	__checked_ul(__FILE__, __func__, __LINE__, strtoul, __s, __e, __b)

int system(const char * __string);
#define system(__s) \
	__checked_i(__FILE__, __func__, __LINE__, system, __s)

size_t wcstombs(char * restrict __s, const wchar_t * restrict __pwcs, size_t __n);
#define wcstombs(__s, __pwcs, __n) \
	__checked_s(__FILE__, __func__, __LINE__, wcstombs, __s, __pwcs, __n)

int wctomb(char * __s, wchar_t __wchar);
#define wctomb(__s, __w) \
	__checked_i(__FILE__, __func__, __LINE__, wctomb, __s, __w)


#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
_Noreturn void _Exit(int __status);
#define _Exit(__s) \
	__checked(__FILE__, __func__, __LINE__, _Exit, __s)

long long int atoll(const char *__nptr);
#define atoll(__s) \
	__checked_ll(__FILE__, __func__, __LINE__, atoll, __s)

long long int llabs(long long int __j);
#define llabs(__j) \
	__checked_ll(__FILE__, __func__, __LINE__, llabs, __j)

lldiv_t lldiv(long long int __numer, long long int __denom);
#define lldiv(__n, __d) \
	__checked_lldiv(__FILE__, __func__, __LINE__, lldiv, __n, __d)

float strtof(const char * restrict __nptr, char ** restrict __endptr);
#define strtof(__s, __e) \
	__checked_f(__FILE__, __func__, __LINE__, strtof, __s, __e)

long double strtold(const char * restrict __nptr, char ** restrict __endptr);
#define strtold(__s, __e) \
	__checked_ld(__FILE__, __func__, __LINE__, strtold, __s, __e)

long long int strtoll(const char * restrict __nptr, char ** restrict __endptr, int __base);
#define strtoll(__s, __e, __b) \
	__checked_ll(__FILE__, __func__, __LINE__, strtoll, __s, __e, __b)

unsigned long long int strtoull(const char * restrict __nptr, char ** restrict __endptr, int __base);
#define strtoull(__s, __e, __b) \
	__checked_ull(__FILE__, __func__, __LINE__, strtoull, __s, __e, __b)

#endif

#endif

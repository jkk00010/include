#ifndef __STDC_VERSION_STDLIB_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_STDLIB_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_STDLIB_H__ 1
#endif

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2024 Jakob Kaivo <jkk@ung.org>

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
int abs(int __j);
int atexit(void (*__func)(void));
double atof(const char * __nptr);
int atoi(const char * __nptr);
long int atol(const char * __nptr);
void * bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void*));
void * calloc(size_t __nmemb, size_t __size);
div_t div(int __numer, int __denom);
_Noreturn void exit(int __status);
void free(void * __ptr);
char * getenv(const char * __name);
long int labs(long int __j);
ldiv_t ldiv(long int __numer, long int __denom);
void * malloc(size_t __size);
int mblen(const char * __s, size_t __n);
size_t mbstowcs(wchar_t * restrict __pwcs, const char * restrict __s, size_t __n);
int mbtowc(wchar_t * restrict __pwc, const char * restrict __s, size_t __n);
void qsort(void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
int rand(void);
void * realloc(void * __ptr, size_t __size);
void srand(unsigned int __seed);
double strtod(const char * restrict __nptr, char ** restrict __endptr);
long int strtol(const char * restrict __nptr, char ** restrict __endptr, int __base);
unsigned long int strtoul(const char * __nptr, char ** __endptr, int __base);
int system(const char * __string);
size_t wcstombs(char * restrict __s, const wchar_t * restrict __pwcs, size_t __n);
int wctomb(char * __s, wchar_t __wchar);

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
_Noreturn void _Exit(int __status);
long long int atoll(const char *__nptr);
long long int llabs(long long int __j);
lldiv_t lldiv(long long int __numer, long long int __denom);
float strtof(const char * restrict __nptr, char ** restrict __endptr);
long double strtold(const char * restrict __nptr, char ** restrict __endptr);
long long int strtoll(const char * restrict __nptr, char ** restrict __endptr, int __base);
unsigned long long int strtoull(const char * restrict __nptr, char ** restrict __endptr, int __base);
#endif

#ifdef __STDC_WANT_LIB_EXT1__
typedef int errno_t;
typedef size_t rsize_t;
typedef void (*constraint_handler_t)(const char * restrict, void * restrict, errno_t);

constraint_handler_t set_constraint_handler_s(constraint_handler_t handler);
void abort_handler_s(const char * restrict msg, void * restrict ptr, errno_t error);
void ignore_handler_s(const char * restrict msg, void * restrict ptr, errno_t error);
errno_t getenv_s(size_t * restrict len, char * restrict value, rsize_t maxsize, const char * restrict name);
void *bsearch_s(const void *key, const void *base, rsize_t nmemb, rsize_t size, int (*compar)(const void *k, const void *y, void *context), void *context);
errno_t qsort_s(void *base, rsize_t nmemb, rsize_t size, int (*compar)(const void *x, const void *y, void *context), void *context);
errno_t wctomb_s(int * restrict status, char * restrict s, rsize_t smax, wchar_t wc);
errno_t mbstowcs_s(size_t * restrict retval, wchar_t * restrict dst, rsize_t dstmax, const char * restrict src, rsize_t len);
errno_t wcstombs_s(size_t * restrict retval, char * restrict dst, rsize_t dstmax, const wchar_t * restrict src, rsize_t len);
#endif

#ifndef __UNG_INTERNAL__
_Noreturn void __abort(const char *, const char *, unsigned long long);
#define abort() __abort(__FILE__, __func__, __LINE__)

int __abs(const char *, const char *, unsigned long long, int __j);
#define abs(__j) __abs(__FILE__, __func__, __LINE__, __j)

int __atexit(const char *, const char *, unsigned long long, void (*__func)(void));
#define atexit(__func) (__FILE__, __func__, __LINE__, __func)

double __atof(const char *, const char *, unsigned long long, const char * __nptr);
#define atof(__nptr) __atof(__FILE__, __func__, __LINE__, __nptr)

int __atoi(const char *, const char *, unsigned long long, const char * __nptr);
#define atoi(__nptr) __atoi(__FILE__, __func__, __LINE__, __nptr)

long int __atol(const char *, const char *, unsigned long long, const char * __nptr);
#define atol(__nptr) __atol(__FILE__, __func__, __LINE__, __nptr)

void * __bsearch(const char *, const char *, unsigned long long, const void * __key, const void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void*));
#define bsearch(__key, __base, __nmemb, __size, __compar) __bsearch(__FILE__, __func__, __LINE__, __key, __base, __nmemb, __size, __compar)

void * __calloc(const char *, const char *, unsigned long long, size_t, size_t);
#define calloc(__n, __s) __calloc(__FILE__, __func__, __LINE__, __n, __s)

div_t __div(const char *, const char *, unsigned long long, int __numer, int __denom);
#define div(__numer, __denom) __div(__FILE__, __func__, __LINE__, __numer, __denom)

_Noreturn void __exit(const char *, const char *, unsigned long long, int __status);
#define exit(__status) __exit(__FILE__, __func__, __LINE__, __status)

void __free(const char *, const char *, unsigned long long, void *);
#define free(__p) __free(__FILE__, __func__, __LINE__, __p)

char * __getenv(const char *, const char *, unsigned long long, const char * __name);
#define getenv(__name) __getenv(__FILE__, __func__, __LINE__, __name)

long int __labs(const char *, const char *, unsigned long long, long int __j);
#define labs(__j) __labs(__FILE__, __func__, __LINE__, __j)

ldiv_t __ldiv(const char *, const char *, unsigned long long, long int __numer, long int __denom);
#define ldiv(__numer, __denom) __ldiv(__FILE__, __func__, __LINE__, __numer, __denom)

void * __malloc(const char *, const char *, unsigned long long, size_t);
#define malloc(__n) __malloc(__FILE__, __func__, __LINE__, __n)

int __mblen(const char *, const char *, unsigned long long, const char * __s, size_t __n);
#define mblen(__s, __n) __mblen(__FILE__, __func__, __LINE__, __s, __n)

size_t __mbstowcs(const char *, const char *, unsigned long long, wchar_t * restrict __pwcs, const char * restrict __s, size_t __n);
#define mbstowcs(__pwcs, __s, __n) __mbstowcs(__FILE__, __func__, __LINE__, __pwcs, __s, __n)

int __mbtowc(const char *, const char *, unsigned long long, wchar_t * restrict __pwc, const char * restrict __s, size_t __n);
#define mbtowc(__pwc, __s, __n) __mbtowc(__FILE__, __func__, __LINE__, __pwc, __s, __n)

void __qsort(const char *, const char *, unsigned long long, void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
#define qsort(__base, __nmemb, __size, __compar) __qsort(__FILE__, __func__, __LINE__, __base, __nmemb, __size, __compar)

int __rand(const char *, const char *, unsigned long long);
#define rand() __rand(__FILE__, __func__, __LINE__)

void * __realloc(const char *, const char *, unsigned long long, void *, size_t);
#define realloc(__p, __s) __realloc(__FILE__, __func__, __LINE__, __p, __s)

void __srand(const char *, const char *, unsigned long long, unsigned int __seed);
#define srand(__seed) __srand(__FILE__, __func__, __LINE__, __seed)

double __strtod(const char *, const char *, unsigned long long, const char * restrict __nptr, char ** restrict __endptr);
#define strtod(__nptr, __endptr) __strtod(__FILE__, __func__, __LINE__, __nptr, __endptr)

long int __strtol(const char *, const char *, unsigned long long, const char * restrict __nptr, char ** restrict __endptr, int __base);
#define strtol(__nptr, __endptr, __base) __strtol(__FILE__, __func__, __LINE__, __nptr, __endptr, __base)

unsigned long int __strtoul(const char *, const char *, unsigned long long, const char * __nptr, char ** __endptr, int __base);
#define strtoul(__nptr, __endptr, __base) __strtoul(__FILE__, __func__, __LINE__, __nptr, __endptr, __base)

int __system(const char *, const char *, unsigned long long, const char * __string);
#define sysem(__string) __system(__FILE__, __func__, __LINE__, __string)

size_t __wcstombs(const char *, const char *, unsigned long long, char * restrict __s, const wchar_t * restrict __pwcs, size_t __n);
#define wcstombs(__s, __pwcs, __n) __wcstombs(__FILE__, __func__, __LINE__, __s, __pwcs, __n)

int __wctomb(const char *, const char *, unsigned long long, char * __s, wchar_t __wchar);
#define wctomb(__s, __whcar) __wctomb(__FILE__, __func__, __LINE__, __s, __wchar)

_Noreturn void ___Exit(const char *, const char *, unsigned long long, int __status);
#define _Exit(__status) ___Exit(__FILE__, __func__, __LINE__, __status)

long long int __atoll(const char *, const char *, unsigned long long, const char *__nptr);
#define atoll(__nptr) __atoll(__FILE__, __func__, __LINE__, __nptr)

long long int __llabs(const char *, const char *, unsigned long long, long long int __j);
#define llabs(__j) __llabs(__FILE__, __func__, __LINE__, __j)

lldiv_t __lldiv(const char *, const char *, unsigned long long, long long int __numer, long long int __denom);
#define lldiv(__numer, __denom) __lldiv(__FILE__, __func__, __LINE__, __numer, __denom)

float __strtof(const char *, const char *, unsigned long long, const char * restrict __nptr, char ** restrict __endptr);
#define strtof(__nptr, __endptr) __strtof(__FILE__, __func__, __LINE__, __nptr, __endptr)

long double __strtold(const char *, const char *, unsigned long long, const char * restrict __nptr, char ** restrict __endptr);
#define strtold(__nptr, __endptr) __strtold(__FILE__, __func__, __LINE__, __nptr, __endptr)

long long int __strtoll(const char *, const char *, unsigned long long, const char * restrict __nptr, char ** restrict __endptr, int __base);
#define strtoll(__nptr, __endptr, __base) __strtoll(__FILE__, __func__, __LINE__, __nptr, __endptr, __base)

unsigned long long int __strtoull(const char *, const char *, unsigned long long, const char * restrict __nptr, char ** restrict __endptr, int __base);
#define strtoull(__nptr, __endptr, __base) __strtoul(__FILE__, __func__, __LINE__, __nptr, __endptr, __base)
#endif

#endif

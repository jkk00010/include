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
int abs(int __j);
int atexit(void (*__func)(void));
double atof(const char * __nptr);
int atoi(const char * __nptr);
long int atol(const char * __nptr);
void * bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void*));
void * calloc(size_t __nmemb, size_t __size);
void * __calloc(const char *, const char *, unsigned long long, size_t, size_t);
#define calloc(__n, __s) __calloc(__FILE__, __func__, __LINE__, __n, __s)

div_t div(int __numer, int __denom);
_Noreturn void exit(int __status);
void free(void * __ptr);
void __free(const char *, const char *, unsigned long long, void *);
#define free(__p) __free(__FILE__, __func__, __LINE__, __p)

char * getenv(const char * __name);
long int labs(long int __j);
ldiv_t ldiv(long int __numer, long int __denom);
void * malloc(size_t __size);
void * __malloc(const char *, const char *, unsigned long long, size_t);
#define malloc(__n) __malloc(__FILE__, __func__, __LINE__, __n)

int mblen(const char * __s, size_t __n);
size_t mbstowcs(wchar_t * restrict __pwcs, const char * restrict __s, size_t __n);
int mbtowc(wchar_t * restrict __pwc, const char * restrict __s, size_t __n);
void qsort(void * __base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
int rand(void);
void * realloc(void * __ptr, size_t __size);
void * __realloc(const char *, const char *, unsigned long long, void *, size_t);
#define realloc(__p, __s) __realloc(__FILE__, __func__, __LINE__, __p, __s)

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

#endif

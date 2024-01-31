#ifndef __STDC_VERSION_WCHAR_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_WCHAR_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_WCHAR_H__ 1
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

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
#define WCHAR_MAX                                                     (0x10FFFF)
#define WCHAR_MIN                                                            (0)
#define NULL                                                          ((void*)0)
#define WEOF                                                      ((wint_t)(-1))
#endif

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
#ifndef __TYPE_mbstate_t_DEFINED__
#define __TYPE_mbstate_t_DEFINED__
typedef int                                                           mbstate_t;
#endif

#ifndef __TYPE_struct_tm_DEFINED__
#define __TYPE_struct_tm_DEFINED__
struct tm;
#endif

#ifndef __TYPE_va_list_DEFINED__
#define __TYPE_va_list_DEFINED__
typedef __builtin_va_list                                               va_list;
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

#ifndef __TYPE_FILE_DEFINED__
#define __TYPE_FILE_DEFINED__
typedef struct __FILE                                                      FILE;
#endif

#ifndef __TYPE_wint_t_DEFINED__
#define __TYPE_wint_t_DEFINED__
typedef int                                                              wint_t;
#endif

#endif


#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
wint_t btowc(int __c);
wint_t fgetwc(FILE * __stream);
wchar_t * fgetws(wchar_t * restrict __s, int __n, FILE * restrict __stream);
wint_t fputwc(wchar_t __c, FILE * __stream);
int fputws(const wchar_t * restrict __s, FILE * restrict __stream);
int fwide(FILE * __stream, int __mode);
int fwprintf(FILE * restrict __stream, const wchar_t * restrict __format, ...);
int fwscanf(FILE * restrict __stream, const wchar_t * restrict __format, ...);
wint_t getwc(FILE * __stream);
wint_t getwchar(void);
size_t mbrlen(const char * restrict __s, size_t __n, mbstate_t * restrict __ps);
size_t mbrtowc(wchar_t * restrict __pwc, const char * restrict __s, size_t __n, mbstate_t * restrict __ps);
int mbsinit(const mbstate_t * __ps);
size_t mbsrtowcs(wchar_t * restrict __dst, const char * restrict __src, size_t __len, mbstate_t * restrict __ps);
wint_t putwc(wchar_t __c, FILE * __stream);
wint_t putwchar(wchar_t __c);
int swprintf(wchar_t * restrict __s, size_t __n, const wchar_t * restrict __format, ...);
int swscanf(const wchar_t * restrict __s, const wchar_t * restrict __format, ...);
wint_t ungetwc(wint_t __c, FILE * __stream);
int vfwprintf(FILE * restrict __stream, const wchar_t * restrict __format, va_list __arg);
int vswprintf(wchar_t * restrict __s, size_t __n, const wchar_t * restrict __format, va_list __arg);
int vwprintf(const wchar_t * restrict __format, va_list __arg);
size_t wcrtomb(char * restrict __s, wchar_t __wc, mbstate_t * restrict __ps);
wchar_t * wcscat(wchar_t * restrict __s1, const wchar_t * restrict __s2);
wchar_t * wcschr(const wchar_t * __s, wchar_t __c);
int wcscmp(const wchar_t * __s1, const wchar_t * __s2);
int wcscoll(const wchar_t * __s1, const wchar_t * __s2);
wchar_t * wcscpy(wchar_t * restrict __s1, const wchar_t * restrict __s2);
size_t wcscspn(const wchar_t * __s1, const wchar_t * __s2);
size_t wcsftime(wchar_t * restrict __s, size_t __maxsize, const wchar_t * restrict __format, const struct tm * restrict __timeptr);
size_t wcslen(const wchar_t * __s);
wchar_t * wcsncat(wchar_t * restrict __s1, const wchar_t * restrict __s2, size_t __n);
int wcsncmp(const wchar_t * __s1, const wchar_t * __s2, size_t __n);
wchar_t * wcsncpy(wchar_t * restrict __s1, const wchar_t * restrict __s2, size_t __n);
wchar_t * wcspbrk(const wchar_t * __s1, const wchar_t * __s2);
wchar_t * wcsrchr(const wchar_t * __s, wchar_t __c);
size_t wcsrtombs(char * restrict __dst, const wchar_t ** restrict __src, size_t __len, mbstate_t * restrict __ps);
size_t wcsspn(const wchar_t * __s1, const wchar_t * __s2);
wchar_t * wcsstr(const wchar_t * __s1, const wchar_t * __s2);
double wcstod(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr);
wchar_t * wcstok(wchar_t * restrict __s1, const wchar_t * restrict __s2, wchar_t ** restrict __ptr);
long int wcstol(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
unsigned long int wcstoul(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
size_t wcsxfrm(wchar_t * restrict __s1, const wchar_t * restrict __s2, size_t __n);
int wctob(wint_t __c);
wchar_t * wmemchr(const wchar_t * __s, wchar_t __c, size_t __n);
int wmemcmp(const wchar_t * __s1, const wchar_t * __s2, size_t __n);
wchar_t * wmemcpy(wchar_t * restrict __s1, const wchar_t * restrict __s2, size_t __n);
wchar_t * wmemmove(wchar_t * __s1, const wchar_t * __s2, size_t __n);
wchar_t * wmemset(wchar_t * __s, wchar_t __c, size_t __n);
int wprintf(const wchar_t * restrict __format, ...);
int wscanf(const wchar_t * restrict __format, ...);
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
int vfwscanf(FILE * restrict __stream, const wchar_t * restrict __format, va_list __arg);
int vswscanf(const wchar_t * restrict __s, const wchar_t * restrict __format, va_list __arg);
int vwscanf(const wchar_t * restrict __format, va_list __arg);
float wcstof(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr);
long double wcstold(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr);
long long int wcstoll(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
unsigned long long int wcstoull(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
#endif

wchar_t * wcswcs(const wchar_t * __s1, const wchar_t * __s2);

#endif

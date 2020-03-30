#ifndef __WCHAR_H__
#define __WCHAR_H__

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

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
/* ./src/wchar/WCHAR_MAX.c */
#define WCHAR_MAX                                                     (0x10FFFF)
/* ./src/wchar/WCHAR_MIN.c */
#define WCHAR_MIN                                                            (0)
/* src/stddef/NULL.c */
#define NULL                                                          ((void*)0)
/* src/wctype/WEOF.c */
#define WEOF                                                      ((wint_t)(-1))
#endif

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
/* ./src/wchar/mbstate_t.c */
#ifndef __TYPE_mbstate_t_DEFINED__
#define __TYPE_mbstate_t_DEFINED__
typedef int                                                           mbstate_t;
#endif

/* ./src/wchar/struct_tm.c */
#ifndef __TYPE_struct_tm_DEFINED__
#define __TYPE_struct_tm_DEFINED__
struct tm;
#endif

/* src/stdarg/va_list.c */
#ifndef __TYPE_va_list_DEFINED__
#define __TYPE_va_list_DEFINED__
typedef __builtin_va_list                                               va_list;
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

/* src/stdio/FILE.c */
#ifndef __TYPE_FILE_DEFINED__
#define __TYPE_FILE_DEFINED__
typedef struct __FILE                                                      FILE;
#endif

/* src/wctype/wint_t.c */
#ifndef __TYPE_wint_t_DEFINED__
#define __TYPE_wint_t_DEFINED__
typedef int                                                              wint_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* src/wctype/wctype_t.c */
#ifndef __TYPE_wctype_t_DEFINED__
#define __TYPE_wctype_t_DEFINED__
typedef int                                                            wctype_t;
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
/* ./src/wchar/btowc.c */
wint_t btowc(int __c);
/* ./src/wchar/fgetwc.c */
wint_t fgetwc(FILE * __stream);
/* ./src/wchar/fgetws.c */
wchar_t * fgetws(wchar_t * restrict __s, int __n, FILE * restrict __stream);
/* ./src/wchar/fputwc.c */
wint_t fputwc(wchar_t __c, FILE * __stream);
/* ./src/wchar/fputws.c */
int fputws(const wchar_t * restrict __s, FILE * restrict __stream);
/* ./src/wchar/fwide.c */
int fwide(FILE * __stream, int __mode);
/* ./src/wchar/fwprintf.c */
int fwprintf(FILE * restrict __stream, const wchar_t * restrict __format, ...);
/* ./src/wchar/fwscanf.c */
int fwscanf(FILE * restrict __stream, const wchar_t * restrict __format, ...);
/* ./src/wchar/getwc.c */
wint_t getwc(FILE * __stream);
/* ./src/wchar/getwchar.c */
wint_t getwchar(void);
/* ./src/wchar/mbrlen.c */
size_t mbrlen(const char * restrict __s, size_t __n, mbstate_t * restrict __ps);
/* ./src/wchar/mbrtowc.c */
size_t mbrtowc(wchar_t * restrict __pwc, const char * restrict __s, size_t __n, mbstate_t * restrict __ps);
/* ./src/wchar/mbsinit.c */
int mbsinit(const mbstate_t * __ps);
/* ./src/wchar/mbsrtowcs.c */
size_t mbsrtowcs(wchar_t * restrict __dst, const char * restrict __src, size_t __len, mbstate_t * restrict __ps);
/* ./src/wchar/putwc.c */
wint_t putwc(wchar_t __c, FILE * __stream);
/* ./src/wchar/putwchar.c */
wint_t putwchar(wchar_t __c);
/* ./src/wchar/swprintf.c */
int swprintf(wchar_t * restrict __s, size_t __n, const wchar_t * restrict __format, ...);
/* ./src/wchar/swscanf.c */
int swscanf(const wchar_t * restrict __s, const wchar_t * restrict __format, ...);
/* ./src/wchar/ungetwc.c */
wint_t ungetwc(wint_t __c, FILE * __stream);
/* ./src/wchar/vfwprintf.c */
int vfwprintf(FILE * restrict __stream, const wchar_t * restrict __format, va_list __arg);
/* ./src/wchar/vswprintf.c */
int vswprintf(wchar_t * restrict __s, size_t __n, const wchar_t * restrict __format, va_list __arg);
/* ./src/wchar/vwprintf.c */
int vwprintf(const wchar_t * restrict __format, va_list __arg);
/* ./src/wchar/wcrtomb.c */
size_t wcrtomb(char * restrict __s, wchar_t __wc, mbstate_t * restrict __ps);
/* ./src/wchar/wcscat.c */
wchar_t * wcscat(wchar_t * restrict __s1, const wchar_t * restrict __s2);
/* ./src/wchar/wcschr.c */
wchar_t * wcschr(const wchar_t * __s, wchar_t __c);
/* ./src/wchar/wcscmp.c */
int wcscmp(const wchar_t * __s1, const wchar_t * __s2);
/* ./src/wchar/wcscoll.c */
int wcscoll(const wchar_t * __s1, const wchar_t * __s2);
/* ./src/wchar/wcscpy.c */
wchar_t * wcscpy(wchar_t * restrict __s1, const wchar_t * restrict __s2);
/* ./src/wchar/wcscspn.c */
size_t wcscspn(const wchar_t * __s1, const wchar_t * __s2);
/* ./src/wchar/wcsftime.c */
size_t wcsftime(wchar_t * restrict __s, size_t __maxsize, const wchar_t * restrict __format, const struct tm * restrict __timeptr);
/* ./src/wchar/wcslen.c */
size_t wcslen(const wchar_t * __s);
/* ./src/wchar/wcsncat.c */
wchar_t * wcsncat(wchar_t * restrict __s1, const wchar_t * restrict __s2, size_t __n);
/* ./src/wchar/wcsncmp.c */
int wcsncmp(const wchar_t * __s1, const wchar_t * __s2, size_t __n);
/* ./src/wchar/wcsncpy.c */
wchar_t * wcsncpy(wchar_t * restrict __s1, const wchar_t * restrict __s2, size_t __n);
/* ./src/wchar/wcspbrk.c */
wchar_t * wcspbrk(const wchar_t * __s1, const wchar_t * __s2);
/* ./src/wchar/wcsrchr.c */
wchar_t * wcsrchr(const wchar_t * __s, wchar_t __c);
/* ./src/wchar/wcsrtombs.c */
size_t wcsrtombs(char * restrict __dst, const wchar_t ** restrict __src, size_t __len, mbstate_t * restrict __ps);
/* ./src/wchar/wcsspn.c */
size_t wcsspn(const wchar_t * __s1, const wchar_t * __s2);
/* ./src/wchar/wcsstr.c */
wchar_t * wcsstr(const wchar_t * __s1, const wchar_t * __s2);
/* ./src/wchar/wcstod.c */
double wcstod(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr);
/* ./src/wchar/wcstok.c */
wchar_t * wcstok(wchar_t * restrict __s1, const wchar_t * restrict __s2, wchar_t ** restrict __ptr);
/* ./src/wchar/wcstol.c */
long int wcstol(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
/* ./src/wchar/wcstoul.c */
unsigned long int wcstoul(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
/* ./src/wchar/wcsxfrm.c */
size_t wcsxfrm(wchar_t * restrict __s1, const wchar_t * restrict __s2, size_t __n);
/* ./src/wchar/wctob.c */
int wctob(wint_t __c);
/* ./src/wchar/wmemchr.c */
wchar_t * wmemchr(const wchar_t * __s, wchar_t __c, size_t __n);
/* ./src/wchar/wmemcmp.c */
int wmemcmp(const wchar_t * __s1, const wchar_t * __s2, size_t __n);
/* ./src/wchar/wmemcpy.c */
wchar_t * wmemcpy(wchar_t * restrict __s1, const wchar_t * restrict __s2, size_t __n);
/* ./src/wchar/wmemmove.c */
wchar_t * wmemmove(wchar_t * __s1, const wchar_t * __s2, size_t __n);
/* ./src/wchar/wmemset.c */
wchar_t * wmemset(wchar_t * __s, wchar_t __c, size_t __n);
/* ./src/wchar/wprintf.c */
int wprintf(const wchar_t * restrict __format, ...);
/* ./src/wchar/wscanf.c */
int wscanf(const wchar_t * restrict __format, ...);
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/wchar/vfwscanf.c */
int vfwscanf(FILE * restrict __stream, const wchar_t * restrict __format, va_list __arg);
/* ./src/wchar/vswscanf.c */
int vswscanf(const wchar_t * restrict __s, const wchar_t * restrict __format, va_list __arg);
/* ./src/wchar/vwscanf.c */
int vwscanf(const wchar_t * restrict __format, va_list __arg);
/* ./src/wchar/wcstof.c */
float wcstof(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr);
/* ./src/wchar/wcstold.c */
long double wcstold(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr);
/* ./src/wchar/wcstoll.c */
long long int wcstoll(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
/* ./src/wchar/wcstoull.c */
unsigned long long int wcstoull(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/wchar/wcswidth.c */
int wcswidth(const wchar_t * __wcsptr, size_t __n);
/* ./src/wchar/wcwidth.c */
int wcwidth(wchar_t __wc);
/* src/wctype/iswalnum.c */
int iswalnum(wint_t __wc);
/* src/wctype/iswalpha.c */
int iswalpha(wint_t __wc);
/* src/wctype/iswblank.c */
int iswblank(wint_t __wc);
/* src/wctype/iswcntrl.c */
int iswcntrl(wint_t __wc);
/* src/wctype/iswdigit.c */
int iswdigit(wint_t __wc);
/* src/wctype/iswgraph.c */
int iswgraph(wint_t __wc);
/* src/wctype/iswlower.c */
int iswlower(wint_t __wc);
/* src/wctype/iswprint.c */
int iswprint(wint_t __wc);
/* src/wctype/iswpunct.c */
int iswpunct(wint_t __wc);
/* src/wctype/iswspace.c */
int iswspace(wint_t __wc);
/* src/wctype/iswupper.c */
int iswupper(wint_t __wc);
/* src/wctype/iswxdigit.c */
int iswxdigit(wint_t __wc);
/* src/wctype/towctrans.c */
wint_t towctrans(wint_t __wc, wctrans_t __desc);
/* src/wctype/towlower.c */
wint_t towlower(wint_t __wc);
/* src/wctype/towupper.c */
wint_t towupper(wint_t __wc);
/* src/wctype/wctype.c */
wctype_t wctype(const char * __property);
#endif

/* ./src/wchar/wcswcs.c */
wchar_t * wcswcs(const wchar_t * __s1, const wchar_t * __s2);


#endif

#ifndef __STDC_VERSION_WCTYPE_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_WCTYPE_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_WCTYPE_H__ 1
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
#define WEOF                                                      ((wint_t)(-1))
#endif

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
#ifndef __TYPE_wctrans_t_DEFINED__
#define __TYPE_wctrans_t_DEFINED__
typedef unsigned int                                                  wctrans_t;
#endif

#ifndef __TYPE_wctype_t_DEFINED__
#define __TYPE_wctype_t_DEFINED__
typedef unsigned int                                                   wctype_t;
#endif

#ifndef __TYPE_wint_t_DEFINED__
#define __TYPE_wint_t_DEFINED__
typedef int                                                              wint_t;
#endif

#endif

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
int iswalnum(wint_t __wc);
int iswalpha(wint_t __wc);
int iswcntrl(wint_t __wc);
int iswctype(wint_t __wc, wctype_t __desc);
int iswdigit(wint_t __wc);
int iswgraph(wint_t __wc);
int iswlower(wint_t __wc);
int iswprint(wint_t __wc);
int iswpunct(wint_t __wc);
int iswspace(wint_t __wc);
int iswupper(wint_t __wc);
int iswxdigit(wint_t __wc);
wint_t towctrans(wint_t __wc, wctrans_t __desc);
wint_t towlower(wint_t __wc);
wint_t towupper(wint_t __wc);
wctrans_t wctrans(const char * __property);
wctype_t wctype(const char * __property);
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
int iswblank(wint_t __wc);
#endif

#ifndef __UNG_INTERNAL__
int __iswalnum(const char *, const char *, unsigned long long, wint_t __wc);
#define iswalnum(__wc) __iswalnum(__FILE__, __func__, __LINE__, __wc)
int __iswalpha(const char *, const char *, unsigned long long, wint_t __wc);
#define iswalpha(__wc) __iswalpha(__FILE__, __func__, __LINE__, __wc)
int __iswblank(const char *, const char *, unsigned long long, wint_t __wc);
#define iswblank(__wc) __iswblank(__FILE__, __func__, __LINE__, __wc)
int __iswcntrl(const char *, const char *, unsigned long long, wint_t __wc);
#define iswcntrl(__wc) __iswcntrl(__FILE__, __func__, __LINE__, __wc)
int __iswctype(const char *, const char *, unsigned long long, wint_t __wc, wctype_t __desc);
#define iswctype(__wc, __d) __iswctype(__FILE__, __func__, __LINE__, __wc, __d)
int __iswdigit(const char *, const char *, unsigned long long, wint_t __wc);
#define iswdigit(__wc) __iswdigit(__FILE__, __func__, __LINE__, __wc)
int __iswgraph(const char *, const char *, unsigned long long, wint_t __wc);
#define iswgraph(__wc) __iswgraph(__FILE__, __func__, __LINE__, __wc)
int __iswlower(const char *, const char *, unsigned long long, wint_t __wc);
#define iswlower(__wc) __iswlower(__FILE__, __func__, __LINE__, __wc)
int __iswprint(const char *, const char *, unsigned long long, wint_t __wc);
#define iswprint(__wc) __iswprint(__FILE__, __func__, __LINE__, __wc)
int __iswpunct(const char *, const char *, unsigned long long, wint_t __wc);
#define iswpunct(__wc) __iswpunct(__FILE__, __func__, __LINE__, __wc)
int __iswspace(const char *, const char *, unsigned long long, wint_t __wc);
#define iswspace(__wc) __iswspace(__FILE__, __func__, __LINE__, __wc)
int __iswupper(const char *, const char *, unsigned long long, wint_t __wc);
#define iswupper(__wc) __iswupper(__FILE__, __func__, __LINE__, __wc)
int __iswxdigit(const char *, const char *, unsigned long long, wint_t __wc);
#define iswxdigit(__wc) __iswxdigit(__FILE__, __func__, __LINE__, __wc)
wint_t __towctrans(const char *, const char *, unsigned long long, wint_t __wc, wctrans_t __desc);
#define towctrans(__wc, __d) __towctrans(__FILE__, __func__, __LINE__, __wc, __d)
wint_t __towlower(const char *, const char *, unsigned long long, wint_t __wc);
#define towlower(__wc) __towlower(__FILE__, __func__, __LINE__, __wc)
wint_t __towupper(const char *, const char *, unsigned long long, wint_t __wc);
#define towupper(__wc) __towupper(__FILE__, __func__, __LINE__, __wc)
wctrans_t __wctrans(const char *, const char *, unsigned long long, const char * __property);
#define wctrans(__prop) __wctrans(__FILE__, __func__, __LINE__, __prop)
wctype_t __wctype(const char *, const char *, unsigned long long, const char * __property);
#define wctype(__prop) __wctype(__FILE__, __func__, __LINE__, __prop)
#endif

#endif

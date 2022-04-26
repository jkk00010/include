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

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
/* ./src/wctype/WEOF.c */
#define WEOF                                                      ((wint_t)(-1))
#endif

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
/* ./src/wctype/wctrans_t.c */
#ifndef __TYPE_wctrans_t_DEFINED__
#define __TYPE_wctrans_t_DEFINED__
typedef int                                                           wctrans_t;
#endif

/* ./src/wctype/wctype_t.c */
#ifndef __TYPE_wctype_t_DEFINED__
#define __TYPE_wctype_t_DEFINED__
typedef int                                                            wctype_t;
#endif

/* ./src/wctype/wint_t.c */
#ifndef __TYPE_wint_t_DEFINED__
#define __TYPE_wint_t_DEFINED__
typedef int                                                              wint_t;
#endif

#endif

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
/* ./src/wctype/iswalnum.c */
int iswalnum(wint_t __wc);
/* ./src/wctype/iswalpha.c */
int iswalpha(wint_t __wc);
/* ./src/wctype/iswcntrl.c */
int iswcntrl(wint_t __wc);
/* ./src/wctype/iswctype.c */
int iswctype(wint_t __wc, wctype_t __desc);
/* ./src/wctype/iswdigit.c */
int iswdigit(wint_t __wc);
/* ./src/wctype/iswgraph.c */
int iswgraph(wint_t __wc);
/* ./src/wctype/iswlower.c */
int iswlower(wint_t __wc);
/* ./src/wctype/iswprint.c */
int iswprint(wint_t __wc);
/* ./src/wctype/iswpunct.c */
int iswpunct(wint_t __wc);
/* ./src/wctype/iswspace.c */
int iswspace(wint_t __wc);
/* ./src/wctype/iswupper.c */
int iswupper(wint_t __wc);
/* ./src/wctype/iswxdigit.c */
int iswxdigit(wint_t __wc);
/* ./src/wctype/towctrans.c */
wint_t towctrans(wint_t __wc, wctrans_t __desc);
/* ./src/wctype/towlower.c */
wint_t towlower(wint_t __wc);
/* ./src/wctype/towupper.c */
wint_t towupper(wint_t __wc);
/* ./src/wctype/wctrans.c */
wctrans_t wctrans(const char * __property);
/* ./src/wctype/wctype.c */
wctype_t wctype(const char * __property);
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/wctype/iswblank.c */
int iswblank(wint_t __wc);
#endif


#endif

#ifndef __STDC_VERSION_LOCALE_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_LOCALE_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_LOCALE_H__ 1
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

#define LC_ALL                                                               (6)
#define LC_COLLATE                                                           (3)
#define LC_CTYPE                                                             (0)
#define LC_MONETARY                                                          (4)
#define LC_NUMERIC                                                           (1)
#define LC_TIME                                                              (2)
#define NULL                                                          ((void*)0)

#if (defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
#define LC_MESSAGES                                                          (6)
# if 200809L <= _POSIX_C_SOURCE
  typedef int locale_t;	/* TODO */
# endif
#endif

struct lconv {
	char *decimal_point;
	char *thousands_sep;
	char *grouping;
	char *int_curr_symbol;
	char *currency_symbol;
	char *mon_decimal_point;
	char *mon_thousands_sep;
	char *mon_grouping;
	char *positive_sign;
	char *negative_sign;
	char int_frac_digits;
	char frac_digits;
	char p_cs_precedes;
	char p_sep_by_space;
	char n_cs_precedes;
	char n_sep_by_space;
	char p_sign_posn;
	char n_sign_posn;
	#if __STDC_VERSION_LOCALE_H__ >= 199901L
	char int_p_cs_precedes;
	char int_p_sep_by_space;
	char int_n_cs_precedes;
	char int_n_sep_by_space;
	char int_p_sign_posn;
	char int_n_sign_posn;
	#else
	char __int_p_cs_precedes;
	char __int_p_sep_by_space;
	char __int_n_cs_precedes;
	char __int_n_sep_by_space;
	char __int_p_sign_posn;
	char __int_n_sign_posn;
	#endif
};

struct lconv * localeconv(void);
char * setlocale(int, const char *);

#ifndef __UNG_INTERNAL__
struct lconv * __localeconv(const char *, const char *, unsigned long long);
#define localeconv() __localeconv(__FILE__, __func__, __LINE__)
char * __setlocale(const char *, const char *, unsigned long long, int, const char *);
#define setlocale(__i, __s) __setlocale(__FILE__, __func__, __LINE__, __i, __s)
#endif

#endif

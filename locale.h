#ifndef __LOCALE_H__
#define __LOCALE_H__

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

/* ./src/locale/LC_ALL.c */
#define LC_ALL                                                               (0)
/* ./src/locale/LC_COLLATE.c */
#define LC_COLLATE                                                           (1)
/* ./src/locale/LC_CTYPE.c */
#define LC_CTYPE                                                             (2)
/* ./src/locale/LC_MONETARY.c */
#define LC_MONETARY                                                          (3)
/* ./src/locale/LC_NUMERIC.c */
#define LC_NUMERIC                                                           (4)
/* ./src/locale/LC_TIME.c */
#define LC_TIME                                                              (5)
/* src/stddef/NULL.c */
#define NULL                                                          ((void*)0)

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/locale/LC_MESSAGES.c */
#define LC_MESSAGES                                                          (6)
#endif

/* ./src/locale/struct_lconv.c */
#ifndef __TYPE_struct_lconv_DEFINED__
#define __TYPE_struct_lconv_DEFINED__
struct lconv {
	/** The character that separates the whole and decimal portions of non-monetary values **/
	char *decimal_point;		/* "." */
	/** The character that separates groups of digits in the whole portion of non-monetary values **/
	char *thousands_sep;		/* "" */
	/** A string indicating how to group digits of monetary values */
	char *grouping;			/* "" */
	/** The three character ISO 4217 currency symbol of the current locale, followed by a fourth separating character **/
	char *int_curr_symbol;		/* "" */
	/** The locale currency symbol in the current locale **/
	char *currency_symbol;		/* "" */
	/** The character used for decimal points in monetary values **/
	char *mon_decimal_point;	/* "" */
	/** The character separating digit groups in monetary values **/
	char *mon_thousands_sep;	/* "" */
	/** A string indicating how to group digits in monetary values **/
	char *mon_grouping;		/* "" */
	/** A string to indicate positive monetary values **/
	char *positive_sign;		/* "" */
	/** A string to indicate negative monetary values **/
	char *negative_sign;		/* "" */
	/** The number of digits after the decimal point in international monetary values **/
	char int_frac_digits;		/* CHAR_MAX */
	/** The number of digits after the decimal point in monetary values **/
	char frac_digits;		/* CHAR_MAX */
	/** Whether field(currency_symbol) precedes (1) or follows (0) positive monetary values **/
	char p_cs_precedes;		/* CHAR_MAX */
	/** Whether field(currency_symbol) is (1) or is not (0) separated from positive monetary values by a space **/
	char p_sep_by_space;		/* CHAR_MAX */
	/** Whether field(currency_symbol) precedes (1) or follows (0) negative monetary values **/
	char n_cs_precedes;		/* CHAR_MAX */
	/** Whether field(currency_symbol) is (1) or is not(0) separated from negative monetary values by a space **/
	char n_sep_by_space;		/* CHAR_MAX */
	/** The position of field(positive_sign) for positive monetary values **/
	char p_sign_posn;		/* CHAR_MAX */
	/** The position of field(positive_sign) for negative monetary values **/
	char n_sign_posn;		/* CHAR_MAX */
	#if __STDC_VERSION__ >= 199901L
	/** Whether field(currency_symbol) precedes (1) or follows (0) positive international monetary values **/
	char int_p_cs_precedes;		/* CHAR_MAX */
	/** Whether field(currency_symbol) is (1) or is not (0) separated from positive international monetary values by a space **/
	char int_p_sep_by_space;	/* CHAR_MAX */
	/** Whether field(currency_symbol) precedes (1) or follows (0) negative international monetary values **/
	char int_n_cs_precedes;		/* CHAR_MAX */
	/** Whether field(currency_symbol) is (1) or is not(0) separated from negative international monetary values by a space **/
	char int_n_sep_by_space;	/* CHAR_MAX */
	/** The position of field(positive_sign) for positive international monetary values **/
	char int_p_sign_posn;		/* CHAR_MAX */
	/** The position of field(positive_sign) for negative international monetary values **/
	char int_n_sign_posn;		/* CHAR_MAX */
	#else
	char __int_p_cs_precedes;
	char __int_p_sep_by_space;
	char __int_n_cs_precedes;
	char __int_n_sep_by_space;
	char __int_p_sign_posn;
	char __int_n_sign_posn;
	#endif
};
#endif


/* ./src/locale/localeconv.c */
struct lconv * localeconv(void);
/* ./src/locale/setlocale.c */
char * setlocale(int __category, const char *__locale);


#endif

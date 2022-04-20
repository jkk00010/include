#ifndef __LANGINFO_H__
#define __LANGINFO_H__

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2022 Jakob Kaivo <jkk@ung.org>

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

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
#define ABDAY_1                                                    ((nl_item)15)
#define ABDAY_2                                                    ((nl_item)16)
#define ABDAY_3                                                    ((nl_item)17)
#define ABDAY_4                                                    ((nl_item)18)
#define ABDAY_5                                                    ((nl_item)19)
#define ABDAY_6                                                    ((nl_item)20)
#define ABDAY_7                                                    ((nl_item)21)
#define ABMON_1                                                    ((nl_item)34)
#define ABMON_10                                                   ((nl_item)43)
#define ABMON_11                                                   ((nl_item)44)
#define ABMON_12                                                   ((nl_item)45)
#define ABMON_2                                                    ((nl_item)35)
#define ABMON_3                                                    ((nl_item)36)
#define ABMON_4                                                    ((nl_item)37)
#define ABMON_5                                                    ((nl_item)38)
#define ABMON_6                                                    ((nl_item)39)
#define ABMON_7                                                    ((nl_item)40)
#define ABMON_8                                                    ((nl_item)41)
#define ABMON_9                                                    ((nl_item)42)
#define ALT_DIGITS                                                 ((nl_item)50)
#define AM_STR                                                      ((nl_item)6)
#define CODESET                                                     ((nl_item)1)
#define CRNCYSTR                                                   ((nl_item)55)
#define DAY_1                                                       ((nl_item)8)
#define DAY_2                                                       ((nl_item)9)
#define DAY_3                                                      ((nl_item)10)
#define DAY_4                                                      ((nl_item)11)
#define DAY_5                                                      ((nl_item)12)
#define DAY_6                                                      ((nl_item)13)
#define DAY_7                                                      ((nl_item)14)
#define D_FMT                                                       ((nl_item)3)
#define D_T_FMT                                                     ((nl_item)2)
#define ERA                                                        ((nl_item)46)
#define ERA_D_FMT                                                  ((nl_item)47)
#define ERA_D_T_FMT                                                ((nl_item)48)
#define ERA_T_FMT                                                  ((nl_item)49)
#define MON_1                                                      ((nl_item)22)
#define MON_10                                                     ((nl_item)31)
#define MON_11                                                     ((nl_item)32)
#define MON_12                                                     ((nl_item)33)
#define MON_2                                                      ((nl_item)23)
#define MON_3                                                      ((nl_item)24)
#define MON_4                                                      ((nl_item)25)
#define MON_5                                                      ((nl_item)26)
#define MON_6                                                      ((nl_item)27)
#define MON_7                                                      ((nl_item)28)
#define MON_8                                                      ((nl_item)29)
#define MON_9                                                      ((nl_item)30)
#define NOEXPR                                                     ((nl_item)54)
#define PM_STR                                                      ((nl_item)7)
#define RADIXCHAR                                                  ((nl_item)51)
#define THOUSEP                                                    ((nl_item)52)
#define T_FMT                                                       ((nl_item)4)
#define T_FMT_AMPM                                                  ((nl_item)5)
#define YESEXPR                                                    ((nl_item)53)
#endif

/* TODO: locale_t, nl_item */

#if	(defined _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
#define NOSTR /* TODO */
#define YESSTR /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
char * nl_langinfo(nl_item);
#endif

#endif

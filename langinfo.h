#ifndef __LANGINFO_H__
#define __LANGINFO_H__

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

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/langinfo/ABDAY_1.c */
#define ABDAY_1                                                    ((nl_item)15)
/* ./src/langinfo/ABDAY_2.c */
#define ABDAY_2                                                    ((nl_item)16)
/* ./src/langinfo/ABDAY_3.c */
#define ABDAY_3                                                    ((nl_item)17)
/* ./src/langinfo/ABDAY_4.c */
#define ABDAY_4                                                    ((nl_item)18)
/* ./src/langinfo/ABDAY_5.c */
#define ABDAY_5                                                    ((nl_item)19)
/* ./src/langinfo/ABDAY_6.c */
#define ABDAY_6                                                    ((nl_item)20)
/* ./src/langinfo/ABDAY_7.c */
#define ABDAY_7                                                    ((nl_item)21)
/* ./src/langinfo/ABMON_1.c */
#define ABMON_1                                                    ((nl_item)34)
/* ./src/langinfo/ABMON_10.c */
#define ABMON_10                                                   ((nl_item)43)
/* ./src/langinfo/ABMON_11.c */
#define ABMON_11                                                   ((nl_item)44)
/* ./src/langinfo/ABMON_12.c */
#define ABMON_12                                                   ((nl_item)45)
/* ./src/langinfo/ABMON_2.c */
#define ABMON_2                                                    ((nl_item)35)
/* ./src/langinfo/ABMON_3.c */
#define ABMON_3                                                    ((nl_item)36)
/* ./src/langinfo/ABMON_4.c */
#define ABMON_4                                                    ((nl_item)37)
/* ./src/langinfo/ABMON_5.c */
#define ABMON_5                                                    ((nl_item)38)
/* ./src/langinfo/ABMON_6.c */
#define ABMON_6                                                    ((nl_item)39)
/* ./src/langinfo/ABMON_7.c */
#define ABMON_7                                                    ((nl_item)40)
/* ./src/langinfo/ABMON_8.c */
#define ABMON_8                                                    ((nl_item)41)
/* ./src/langinfo/ABMON_9.c */
#define ABMON_9                                                    ((nl_item)42)
/* ./src/langinfo/ALT_DIGITS.c */
#define ALT_DIGITS                                                 ((nl_item)50)
/* ./src/langinfo/AM_STR.c */
#define AM_STR                                                      ((nl_item)6)
/* ./src/langinfo/CODESET.c */
#define CODESET                                                     ((nl_item)1)
/* ./src/langinfo/CRNCYSTR.c */
#define CRNCYSTR                                                   ((nl_item)55)
/* ./src/langinfo/DAY_1.c */
#define DAY_1                                                       ((nl_item)8)
/* ./src/langinfo/DAY_2.c */
#define DAY_2                                                       ((nl_item)9)
/* ./src/langinfo/DAY_3.c */
#define DAY_3                                                      ((nl_item)10)
/* ./src/langinfo/DAY_4.c */
#define DAY_4                                                      ((nl_item)11)
/* ./src/langinfo/DAY_5.c */
#define DAY_5                                                      ((nl_item)12)
/* ./src/langinfo/DAY_6.c */
#define DAY_6                                                      ((nl_item)13)
/* ./src/langinfo/DAY_7.c */
#define DAY_7                                                      ((nl_item)14)
/* ./src/langinfo/D_FMT.c */
#define D_FMT                                                       ((nl_item)3)
/* ./src/langinfo/D_T_FMT.c */
#define D_T_FMT                                                     ((nl_item)2)
/* ./src/langinfo/ERA.c */
#define ERA                                                        ((nl_item)46)
/* ./src/langinfo/ERA_D_FMT.c */
#define ERA_D_FMT                                                  ((nl_item)47)
/* ./src/langinfo/ERA_D_T_FMT.c */
#define ERA_D_T_FMT                                                ((nl_item)48)
/* ./src/langinfo/ERA_T_FMT.c */
#define ERA_T_FMT                                                  ((nl_item)49)
/* ./src/langinfo/MON_1.c */
#define MON_1                                                      ((nl_item)22)
/* ./src/langinfo/MON_10.c */
#define MON_10                                                     ((nl_item)31)
/* ./src/langinfo/MON_11.c */
#define MON_11                                                     ((nl_item)32)
/* ./src/langinfo/MON_12.c */
#define MON_12                                                     ((nl_item)33)
/* ./src/langinfo/MON_2.c */
#define MON_2                                                      ((nl_item)23)
/* ./src/langinfo/MON_3.c */
#define MON_3                                                      ((nl_item)24)
/* ./src/langinfo/MON_4.c */
#define MON_4                                                      ((nl_item)25)
/* ./src/langinfo/MON_5.c */
#define MON_5                                                      ((nl_item)26)
/* ./src/langinfo/MON_6.c */
#define MON_6                                                      ((nl_item)27)
/* ./src/langinfo/MON_7.c */
#define MON_7                                                      ((nl_item)28)
/* ./src/langinfo/MON_8.c */
#define MON_8                                                      ((nl_item)29)
/* ./src/langinfo/MON_9.c */
#define MON_9                                                      ((nl_item)30)
/* ./src/langinfo/NOEXPR.c */
#define NOEXPR                                                     ((nl_item)54)
/* ./src/langinfo/PM_STR.c */
#define PM_STR                                                      ((nl_item)7)
/* ./src/langinfo/RADIXCHAR.c */
#define RADIXCHAR                                                  ((nl_item)51)
/* ./src/langinfo/THOUSEP.c */
#define THOUSEP                                                    ((nl_item)52)
/* ./src/langinfo/T_FMT.c */
#define T_FMT                                                       ((nl_item)4)
/* ./src/langinfo/T_FMT_AMPM.c */
#define T_FMT_AMPM                                                  ((nl_item)5)
/* ./src/langinfo/YESEXPR.c */
#define YESEXPR                                                    ((nl_item)53)
#endif

#if	(defined _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
/* ./src/langinfo/NOSTR.c */
#define NOSTR /* TODO */
/* ./src/langinfo/YESSTR.c */
#define YESSTR /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/langinfo/nl_langinfo.c */
char * nl_langinfo(nl_item __item);
#endif


#endif

#ifndef __NL_TYPES_H__
#define __NL_TYPES_H__

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

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/nl_types/NL_CAT_LOCALE.c */
#define NL_CAT_LOCALE                                                          1
/* ./src/nl_types/NL_SETD.c */
#define NL_SETD                                                                1
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/nl_types/nl_catd.c */
#ifndef __TYPE_nl_catd_DEFINED__
#define __TYPE_nl_catd_DEFINED__
typedef unsigned long int                                               nl_catd;
#endif

/* ./src/nl_types/nl_item.c */
#ifndef __TYPE_nl_item_DEFINED__
#define __TYPE_nl_item_DEFINED__
typedef int                                                             nl_item;
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/nl_types/catclose.c */
int catclose(nl_catd __catd);
/* ./src/nl_types/catgets.c */
char * catgets(nl_catd __catd, int __set_id, int __msg_id, const char * __s);
/* ./src/nl_types/catopen.c */
nl_catd catopen(const char* __name, int __oflag);
#endif


#endif

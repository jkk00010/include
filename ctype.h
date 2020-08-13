#ifndef __CTYPE_H__
#define __CTYPE_H__

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
/* ./src/ctype/_tolower.c */
#define _tolower(__c)                                               tolower(__c)
/* ./src/ctype/_toupper.c */
#define _toupper(__c)                                               toupper(__c)
#endif

/* ./src/ctype/isalnum.c */
int isalnum(int __c);
/* ./src/ctype/isalpha.c */
int isalpha(int __c);
/* ./src/ctype/iscntrl.c */
int iscntrl(int __c);
/* ./src/ctype/isdigit.c */
int isdigit(int __c);
/* ./src/ctype/isgraph.c */
int isgraph(int __c);
/* ./src/ctype/islower.c */
int islower(int __c);
/* ./src/ctype/isprint.c */
int isprint(int __c);
/* ./src/ctype/ispunct.c */
int ispunct(int __c);
/* ./src/ctype/isspace.c */
int isspace(int __c);
/* ./src/ctype/isupper.c */
int isupper(int __c);
/* ./src/ctype/isxdigit.c */
int isxdigit(int __c);
/* ./src/ctype/tolower.c */
int tolower(int __c);
/* ./src/ctype/toupper.c */
int toupper(int __c);

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/ctype/isblank.c */
int isblank(int __c);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/ctype/isascii.c */
int isascii(int __c);
/* ./src/ctype/toascii.c */
int toascii(int __c);
#endif


#endif

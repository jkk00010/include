#ifndef __FMTMSG_H__
#define __FMTMSG_H__

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

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define MM_APPL                                                              (3)
#define MM_CONSOLE                                                          (14)
#define MM_ERROR                                                             (9)
#define MM_FIRM                                                              (2)
#define MM_HALT                                                              (8)
#define MM_HARD                                                              (0)
#define MM_INFO                                                             (11)
#define MM_NOCON                                                             (3)
#define MM_NOMSG                                                             (2)
#define MM_NOSEV                                                            (12)
#define MM_NOTOK                                                             (1)
#define MM_NRECOV                                                            (7)
#define MM_NULLACT                                                    ((char*)0)
#define MM_NULLLBL                                                    ((char*)0)
#define MM_NULLMC                                                           (0L)
#define MM_NULLSEV                                                           (0)
#define MM_NULLTAG                                                    ((char*)0)
#define MM_NULLTXT                                                    ((char*)0)
#define MM_OK                                                                (0)
#define MM_OPSYS                                                             (5)
#define MM_PRINT                                                            (13)
#define MM_RECOVER                                                           (6)
#define MM_SOFT                                                              (1)
#define MM_UTIL                                                              (4)
#define MM_WARNING                                                          (10)

int fmtmsg(long, const char *, int, const char *, const char *, const char *);
#endif

#endif

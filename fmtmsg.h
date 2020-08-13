#ifndef __FMTMSG_H__
#define __FMTMSG_H__

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

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/fmtmsg/MM_APPL.c */
#define MM_APPL                                                                3
/* ./src/fmtmsg/MM_CONSOLE.c */
#define MM_CONSOLE                                                            14
/* ./src/fmtmsg/MM_ERROR.c */
#define MM_ERROR                                                               9
/* ./src/fmtmsg/MM_FIRM.c */
#define MM_FIRM                                                                2
/* ./src/fmtmsg/MM_HALT.c */
#define MM_HALT                                                                8
/* ./src/fmtmsg/MM_HARD.c */
#define MM_HARD                                                                0
/* ./src/fmtmsg/MM_INFO.c */
#define MM_INFO                                                               11
/* ./src/fmtmsg/MM_NOCON.c */
#define MM_NOCON                                                               3
/* ./src/fmtmsg/MM_NOMSG.c */
#define MM_NOMSG                                                               2
/* ./src/fmtmsg/MM_NOSEV.c */
#define MM_NOSEV                                                              12
/* ./src/fmtmsg/MM_NOTOK.c */
#define MM_NOTOK                                                               1
/* ./src/fmtmsg/MM_NRECOV.c */
#define MM_NRECOV                                                              7
/* ./src/fmtmsg/MM_NULLACT.c */
#define MM_NULLACT                                                      (char*)0
/* ./src/fmtmsg/MM_NULLLBL.c */
#define MM_NULLLBL                                                      (char*)0
/* ./src/fmtmsg/MM_NULLMC.c */
#define MM_NULLMC                                                             0L
/* ./src/fmtmsg/MM_NULLSEV.c */
#define MM_NULLSEV                                                             0
/* ./src/fmtmsg/MM_NULLTAG.c */
#define MM_NULLTAG                                                      (char*)0
/* ./src/fmtmsg/MM_NULLTXT.c */
#define MM_NULLTXT                                                      (char*)0
/* ./src/fmtmsg/MM_OK.c */
#define MM_OK                                                                  0
/* ./src/fmtmsg/MM_OPSYS.c */
#define MM_OPSYS                                                               5
/* ./src/fmtmsg/MM_PRINT.c */
#define MM_PRINT                                                              13
/* ./src/fmtmsg/MM_RECOVER.c */
#define MM_RECOVER                                                             6
/* ./src/fmtmsg/MM_SOFT.c */
#define MM_SOFT                                                                1
/* ./src/fmtmsg/MM_UTIL.c */
#define MM_UTIL                                                                4
/* ./src/fmtmsg/MM_WARNING.c */
#define MM_WARNING                                                            10
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/fmtmsg/fmtmsg.c */
int fmtmsg(long __classification, const char * __label, int __severity, const char * __text, const char * __action, const char * __tag);
#endif


#endif

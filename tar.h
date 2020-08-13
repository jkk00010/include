#ifndef __TAR_H__
#define __TAR_H__

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

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/tar/AREGTYPE.c */
#define AREGTYPE                                                            '\0'
/* ./src/tar/BLKTYPE.c */
#define BLKTYPE                                                              '4'
/* ./src/tar/CHRTYPE.c */
#define CHRTYPE                                                              '3'
/* ./src/tar/CONTTYPE.c */
#define CONTTYPE                                                             '7'
/* ./src/tar/DIRTYPE.c */
#define DIRTYPE                                                              '5'
/* ./src/tar/FIFOTYPE.c */
#define FIFOTYPE                                                             '6'
/* ./src/tar/LNKTYPE.c */
#define LNKTYPE                                                              '1'
/* ./src/tar/REGTYPE.c */
#define REGTYPE                                                              '0'
/* ./src/tar/SYMTYPE.c */
#define SYMTYPE                                                              '2'
/* ./src/tar/TGEXEC.c */
#define TGEXEC                                                             00010
/* ./src/tar/TGREAD.c */
#define TGREAD                                                             00040
/* ./src/tar/TGWRITE.c */
#define TGWRITE                                                            00020
/* ./src/tar/TMAGIC.c */
#define TMAGIC                                                           "ustar"
/* ./src/tar/TMAGLEN.c */
#define TMAGLEN                                                                6
/* ./src/tar/TOEXEC.c */
#define TOEXEC                                                             00001
/* ./src/tar/TOREAD.c */
#define TOREAD                                                             00004
/* ./src/tar/TOWRITE.c */
#define TOWRITE                                                            00002
/* ./src/tar/TSGID.c */
#define TSGID                                                              02000
/* ./src/tar/TSUID.c */
#define TSUID                                                              04000
/* ./src/tar/TSVTX.c */
#define TSVTX                                                              01000
/* ./src/tar/TUEXEC.c */
#define TUEXEC                                                             00100
/* ./src/tar/TUREAD.c */
#define TUREAD                                                             00400
/* ./src/tar/TUWRITE.c */
#define TUWRITE                                                            00200
/* ./src/tar/TVERSION.c */
#define TVERSION                                                            "00"
/* ./src/tar/TVERSLEN.c */
#define TVERSLEN                                                               2
#endif


#endif

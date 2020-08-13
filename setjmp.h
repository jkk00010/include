#ifndef __SETJMP_H__
#define __SETJMP_H__

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

/* ./src/setjmp/jmp_buf.c */
#ifndef __TYPE_jmp_buf_DEFINED__
#define __TYPE_jmp_buf_DEFINED__
typedef unsigned long int                                           jmp_buf[32];
#endif


#if	(defined _POSIX_SOURCE)
/* ./src/setjmp/sigjmp_buf.c */
#ifndef __TYPE_sigjmp_buf_DEFINED__
#define __TYPE_sigjmp_buf_DEFINED__
typedef jmp_buf                                                      sigjmp_buf;
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 200112L)
#define _Noreturn
#endif

/* ./src/setjmp/longjmp.c */
_Noreturn void longjmp(jmp_buf __env, int __val);
/* ./src/setjmp/setjmp.c */
int setjmp(jmp_buf __env);

#if	(defined _POSIX_SOURCE)
/* ./src/setjmp/siglongjmp.c */
void siglongjmp(sigjmp_buf __env, int __val);
/* ./src/setjmp/sigsetjmp.c */
int sigsetjmp(sigjmp_buf __env, int __savemask);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/setjmp/_longjmp.c */
void _longjmp(jmp_buf __env, int __val);
/* ./src/setjmp/_setjmp.c */
int _setjmp(jmp_buf __env);
#endif


#endif

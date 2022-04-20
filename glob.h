#ifndef __GLOB_H__
#define __GLOB_H__

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
#	define restrict	/* compatibility */
#endif

#if !(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
#	error <glob.h> requires _POSIX_C_SOURCE >= 2
#endif

#define GLOB_ABORTED                                                           1
#define GLOB_APPEND                                                       (1<<0)
#define GLOB_DOOFFS                                                       (1<<1)
#define GLOB_ERR                                                          (1<<2)
#define GLOB_MARK                                                         (1<<3)
#define GLOB_NOCHECK                                                      (1<<4)
#define GLOB_NOESCAPE                                                     (1<<5)
#define GLOB_NOMATCH                                                           2
#define GLOB_NOSORT                                                       (1<<6)
#define GLOB_NOSPACE                                                           3
#define GLOB_NOSYS                                                          (-2)

typedef struct {
	size_t	gl_pathc;
	char **	gl_pathv;
	size_t	gl_offs;
} glob_t;

int glob(const char * restrict, int, int (*) (const char *, int), glob_t * restrict);
void globfree(glob_t *);

#endif

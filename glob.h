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
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/glob/GLOB_ABORTED.c */
#define GLOB_ABORTED                                                           1
/* ./src/glob/GLOB_APPEND.c */
#define GLOB_APPEND                                                       (1<<0)
/* ./src/glob/GLOB_DOOFFS.c */
#define GLOB_DOOFFS                                                       (1<<1)
/* ./src/glob/GLOB_ERR.c */
#define GLOB_ERR                                                          (1<<2)
/* ./src/glob/GLOB_MARK.c */
#define GLOB_MARK                                                         (1<<3)
/* ./src/glob/GLOB_NOCHECK.c */
#define GLOB_NOCHECK                                                      (1<<4)
/* ./src/glob/GLOB_NOESCAPE.c */
#define GLOB_NOESCAPE                                                     (1<<5)
/* ./src/glob/GLOB_NOMATCH.c */
#define GLOB_NOMATCH                                                           2
/* ./src/glob/GLOB_NOSORT.c */
#define GLOB_NOSORT                                                       (1<<6)
/* ./src/glob/GLOB_NOSPACE.c */
#define GLOB_NOSPACE                                                           3
/* ./src/glob/GLOB_NOSYS.c */
#define GLOB_NOSYS                                                          (-2)
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/glob/glob_t.c */
#ifndef __TYPE_glob_t_DEFINED__
#define __TYPE_glob_t_DEFINED__
typedef struct {
	size_t	gl_pathc;
	char **	gl_pathv;
	size_t	gl_offs;
} glob_t;
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/glob/glob.c */
int glob(const char * restrict __pattern, int __flags, int (*__errfunc) (const char * __epath, int __eerrno), glob_t * restrict __pglob);
/* ./src/glob/globfree.c */
void globfree(glob_t * __pglob);
#endif


#endif

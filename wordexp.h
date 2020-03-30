#ifndef __WORDEXP_H__
#define __WORDEXP_H__

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

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/wordexp/WRDE_APPEND.c */
#define WRDE_APPEND                                                            1
/* ./src/wordexp/WRDE_BADCHAR.c */
#define WRDE_BADCHAR                                                           1
/* ./src/wordexp/WRDE_BADVAL.c */
#define WRDE_BADVAL                                                            2
/* ./src/wordexp/WRDE_CMDSUB.c */
#define WRDE_CMDSUB                                                            3
/* ./src/wordexp/WRDE_DOOFFS.c */
#define WRDE_DOOFFS                                                            2
/* ./src/wordexp/WRDE_NOCMD.c */
#define WRDE_NOCMD                                                             3
/* ./src/wordexp/WRDE_NOSPACE.c */
#define WRDE_NOSPACE                                                           4
/* ./src/wordexp/WRDE_NOSYS.c */
#define WRDE_NOSYS                                                            -1
/* ./src/wordexp/WRDE_REUSE.c */
#define WRDE_REUSE                                                             4
/* ./src/wordexp/WRDE_SHOWERR.c */
#define WRDE_SHOWERR                                                           5
/* ./src/wordexp/WRDE_SYNTAX.c */
#define WRDE_SYNTAX                                                            5
/* ./src/wordexp/WRDE_UNDEF.c */
#define WRDE_UNDEF                                                             6
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/wordexp/wordexp_t.c */
#ifndef __TYPE_wordexp_t_DEFINED__
#define __TYPE_wordexp_t_DEFINED__
typedef struct {
	size_t	we_wordc;
	char **	we_wordv;
	size_t	we_offs;
} wordexp_t;
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/wordexp/wordexp.c */
int wordexp(const char *restrict __words, wordexp_t *restrict __pwordexp, int __flags);
/* ./src/wordexp/wordfree.c */
void wordfree(wordexp_t *__pwordexp);
#endif


#endif

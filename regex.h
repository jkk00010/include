#ifndef __REGEX_H__
#define __REGEX_H__

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

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/regex/REG_BADBR.c */
#define REG_BADBR                                                           (10)
/* ./src/regex/REG_BADPAT.c */
#define REG_BADPAT                                                           (2)
/* ./src/regex/REG_BADRPT.c */
#define REG_BADRPT                                                          (13)
/* ./src/regex/REG_EBRACE.c */
#define REG_EBRACE                                                           (9)
/* ./src/regex/REG_EBRACK.c */
#define REG_EBRACK                                                           (7)
/* ./src/regex/REG_ECOLLATE.c */
#define REG_ECOLLATE                                                         (3)
/* ./src/regex/REG_ECTYPE.c */
#define REG_ECTYPE                                                           (4)
/* ./src/regex/REG_EESCAPE.c */
#define REG_EESCAPE                                                          (5)
/* ./src/regex/REG_ENOSYS.c */
#define REG_ENOSYS                                                          (-1)
/* ./src/regex/REG_EPAREN.c */
#define REG_EPAREN                                                           (8)
/* ./src/regex/REG_ERANGE.c */
#define REG_ERANGE                                                          (11)
/* ./src/regex/REG_ESPACE.c */
#define REG_ESPACE                                                          (12)
/* ./src/regex/REG_ESUBREG.c */
#define REG_ESUBREG                                                          (6)
/* ./src/regex/REG_EXTENDED.c */
#define REG_EXTENDED                                                      (1<<0)
/* ./src/regex/REG_ICASE.c */
#define REG_ICASE                                                         (1<<1)
/* ./src/regex/REG_NEWLINE.c */
#define REG_NEWLINE                                                       (1<<3)
/* ./src/regex/REG_NOMATCH.c */
#define REG_NOMATCH                                                          (1)
/* ./src/regex/REG_NOSUB.c */
#define REG_NOSUB                                                         (1<<2)
/* ./src/regex/REG_NOTBOL.c */
#define REG_NOTBOL                                                        (1<<0)
/* ./src/regex/REG_NOTEOL.c */
#define REG_NOTEOL                                                        (1<<1)
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/regex/regoff_t.c */
#ifndef __TYPE_regoff_t_DEFINED__
#define __TYPE_regoff_t_DEFINED__
typedef long long int                                                  regoff_t;

/* ./src/regex/regex_t.c */
#ifndef __TYPE_regex_t_DEFINED__
#define __TYPE_regex_t_DEFINED__
typedef struct {
	size_t re_nsub;
} regex_t;
#endif

/* ./src/regex/regmatch_t.c */
#ifndef __TYPE_regmatch_t_DEFINED__
#define __TYPE_regmatch_t_DEFINED__
typedef struct {
	regoff_t rm_so;
	regoff_t rm_eo;
} regmatch_t;
#endif
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/regex/regcomp.c */
int regcomp(regex_t * restrict __preg, const char * restrict __pattern, int __cflags);
/* ./src/regex/regerror.c */
size_t regerror(int __errcode, const regex_t * restrict __preg, char * restrict __errbuf, size_t __errbuf_size);
/* ./src/regex/regexec.c */
int regexec(const regex_t * restrict __preg, const char * restrict __string, size_t __nmatch, regmatch_t pmatch[restrict], int __eflags);
/* ./src/regex/regfree.c */
void regfree(regex_t * __preg);
#endif


#endif

#ifndef __SEARCH_H__
#define __SEARCH_H__

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

#if	(defined _XOPEN_SOURCE)
/* ./src/search/ACTION.c */
#ifndef __TYPE_ACTION_DEFINED__
#define __TYPE_ACTION_DEFINED__
typedef enum {
	FIND,
	ENTER
} ACTION;
#endif

/* ./src/search/ENTRY.c */
#ifndef __TYPE_ENTRY_DEFINED__
#define __TYPE_ENTRY_DEFINED__
typedef struct {
	char *	key;
	void *	data;
} ENTRY;
#endif

/* ./src/search/VISIT.c */
#ifndef __TYPE_VISIT_DEFINED__
#define __TYPE_VISIT_DEFINED__
typedef enum {
	preorder,
	postorder,
	endorder,
	leaf
} VISIT;
#endif

/* src/stddef/size_t.c */
#ifndef __TYPE_size_t_DEFINED__
#define __TYPE_size_t_DEFINED__
#ifdef __LLP64__
# if !defined __STDC_VERSION__ || __STDC_VERSION__ < 199909L
typedef unsigned __int64                                                 size_t;
# else
typedef unsigned long long int                                           size_t;
# endif
#else
typedef unsigned long int                                                size_t;
#endif
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/search/hcreate.c */
int hcreate(size_t __nel);
/* ./src/search/hdestroy.c */
void hdestroy(void);
/* ./src/search/hsearch.c */
ENTRY * hsearch(ENTRY __item, ACTION __action);
/* ./src/search/lfind.c */
void * lfind(const void * __key, const void * __base, size_t * __nelp, size_t __width, int (*__compar) (const void *, const void *));
/* ./src/search/lsearch.c */
void * lsearch(const void * __key, void * __base, size_t * __nelp, size_t __width, int (*__compar) (const void *, const void *));
/* ./src/search/tdelete.c */
void *tdelete(const void * restrict __key, void ** restrict __rootp, int (*__compar) (const void *, const void *));
/* ./src/search/tfind.c */
void *tfind(const void * __key, void * const * __rootp, int (*__compar) (const void *, const void *));
/* ./src/search/tsearch.c */
void *tsearch(const void * __key, void ** __rootp, int (*__compar) (const void *, const void *));
/* ./src/search/twalk.c */
void twalk(const void * __root, void (*__action) (const void *, VISIT, int));
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/search/insque.c */
void insque(void * __element, void * __pred);
/* ./src/search/remque.c */
void remque(void * __element);
#endif


#endif

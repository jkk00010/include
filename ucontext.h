#ifndef __UCONTEXT_H__
#define __UCONTEXT_H__

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

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
/* ./src/ucontext/mcontext_t.c */
#ifndef __TYPE_mcontext_t_DEFINED__
#define __TYPE_mcontext_t_DEFINED__
typedef unsigned long mcontext_t;
#endif

/* ./src/ucontext/ucontext_t.c */
#ifndef __TYPE_ucontext_t_DEFINED__
#define __TYPE_ucontext_t_DEFINED__
typedef struct ucontext_t {
	struct ucontext_t * uc_link;
	sigset_t uc_sigmask;
	stack_t uc_stack;
	mcontext_t uc_mcontext;
} ucontext_t;
#endif

/* src/signal/sigset_t.c */
#ifndef __TYPE_sigset_t_DEFINED__
#define __TYPE_sigset_t_DEFINED__
typedef unsigned int                                                   sigset_t;
#endif

/* src/signal/stack_t.c */
#ifndef __TYPE_stack_t_DEFINED__
#define __TYPE_stack_t_DEFINED__
typedef struct {
	void *ss_sp;	/* Stack base or pointer */
	size_t ss_size;	/* Stack size */
	int ss_flags;	/* Flags */
} stack_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
/* ./src/ucontext/getcontext.c */
int getcontext(ucontext_t *__ucp);
/* ./src/ucontext/makecontext.c */
void makecontext(ucontext_t *__ucp, void (*__func)(), int __argc, ...);
/* ./src/ucontext/setcontext.c */
int setcontext(const ucontext_t *__ucp);
/* ./src/ucontext/swapcontext.c */
void swapcontext(ucontext_t *__oucp, const ucontext_t *__ucp);
#endif


#endif

#ifndef __SEMAPHORE_H__
#define __SEMAPHORE_H__

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

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/semaphore/sem_t.c */
#ifndef __TYPE_sem_t_DEFINED__
#define __TYPE_sem_t_DEFINED__
typedef struct __sem_t                                                    sem_t;
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/semaphore/sem_close.c */
int sem_close(sem_t *__sem);
/* ./src/semaphore/sem_destroy.c */
int sem_destroy(sem_t * __sem);
/* ./src/semaphore/sem_getvalue.c */
int sem_getvalue(sem_t * restrict __sem, int * restrict __sval);
/* ./src/semaphore/sem_init.c */
int sem_init(sem_t * __sem, int __pshared, unsigned __value);
/* ./src/semaphore/sem_open.c */
sem_t * sem_open(const char * __name, int __oflag, ...);
/* ./src/semaphore/sem_post.c */
int sem_post(sem_t * __sem);
/* ./src/semaphore/sem_trywait.c */
int sem_trywait(sem_t * __sem);
/* ./src/semaphore/sem_unlink.c */
int sem_unlink(const char * __name);
/* ./src/semaphore/sem_wait.c */
int sem_wait(sem_t * __sem);
#endif


#endif

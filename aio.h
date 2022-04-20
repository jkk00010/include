#ifndef __AIO_H__
#define __AIO_H__

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2022 Jakob Kaivo <jkk@ung.org>

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
#	define restrict /* forward compatibility */
#endif

#if	(defined _POSIX_C_SOURCE && 199309L <= _POSIX_C_SOURCE)
#define AIO_ALLDONE                                                            0
#define AIO_CANCELED                                                           1
#define AIO_NOTCANCELED                                                        2
#define LIO_NOP                                                                0
#define LIO_NOWAIT                                                             1
#define LIO_READ                                                               2
#define LIO_WAIT                                                               3
#define LIO_WRITE                                                              4

#if	(200809L <= _POSIX_C_SOURE)
/* from <sys/types.h> */
typedef int off_t;
typedef int pthread_attr_t;
typedef int size_t;
typedef int ssize_t;
/* from <time.h> */
struct timespec {};
/* from <signal.h> */
union sigval;
struct sigevent;
#endif

struct aiocb {
	int		aio_fildes;
	off_t		aio_offset;
	volatile void *	aio_buf;
	size_t		aio_nbytes;
	int		aio_reqprio;
	struct sigevent	aio_sigevent;
	int		aio_lio_opcode;
};

int aio_cancel(int __fildes, struct aiocb *__aiocbp);
int aio_error(const struct aiocb * __aiocbp);
int aio_fsync(int __op, struct aiocb * __aiocbp);
int aio_read(struct aiocb * __aiocbp);
ssize_t aio_return(struct aiocb *__aiocbp);
int aio_suspend(const struct aiocb * const list[], int __nent, const struct timespec * __timeout);
int aio_write(struct aiocb * __aiocbp);
int lio_listio(int __mode, struct aiocb * const list[restrict], int __nent, struct sigevent * restrict __sig);
#endif

#endif

#ifndef __MQUEUE_H__
#define __MQUEUE_H__

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

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/mqueue/mqd_t.c */
#ifndef __TYPE_mqd_t_DEFINED__
#define __TYPE_mqd_t_DEFINED__
typedef unsigned long int                                                 mqd_t;
#endif

#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/mqueue/struct_mq_attr.c */
#ifndef __TYPE_struct_mq_attr_DEFINED__
#define __TYPE_struct_mq_attr_DEFINED__
struct mq_attr {
	long mq_flags;
	long mq_maxmsg;
	long mq_msgsize;
	long mq_curmsgs;
};
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/mqueue/mq_close.c */
int mq_close(mqd_t __mqdes);
/* ./src/mqueue/mq_getattr.c */
int mq_getattr(mqd_t __mqdes, struct mq_attr * __mqstat);
/* ./src/mqueue/mq_notify.c */
int mq_notify(mqd_t __mqdes, const struct sigevent * __notification);
/* ./src/mqueue/mq_open.c */
mqd_t mq_open(const char * __name, int __oflag, ...);
/* ./src/mqueue/mq_receive.c */
ssize_t mq_receive(mqd_t __mqdes, char * __msg_ptr, size_t __msg_len, unsigned * __msg_prio);
/* ./src/mqueue/mq_send.c */
int mq_send(mqd_t __mqdes, const char * __msg_ptr, size_t __msg_len, unsigned __msg_prio);
/* ./src/mqueue/mq_setattr.c */
int mq_setattr(mqd_t __mqdes, const struct mq_attr * restrict __mqstat, struct mq_attr * restrict __omqstat);
/* ./src/mqueue/mq_unlink.c */
int mq_unlink(const char * __name);
#endif


#endif

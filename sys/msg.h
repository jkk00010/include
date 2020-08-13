#ifndef __SYS_MSG_H__
#define __SYS_MSG_H__

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

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/msg/ipc.ref */
#include <sys/ipc.h>
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/msg/MSG_NOERROR.c */
#define MSG_NOERROR                                                            1
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/msg/msglen_t.c */
#ifndef __TYPE_msglen_t_DEFINED__
#define __TYPE_msglen_t_DEFINED__
typedef unsigned short                                                 msglen_t;
#endif

/* ./src/sys/msg/msgqnum_t.c */
#ifndef __TYPE_msgqnum_t_DEFINED__
#define __TYPE_msgqnum_t_DEFINED__
typedef unsigned short                                                msgqnum_t;
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

/* src/sys/types/key_t.c */
#ifndef __TYPE_key_t_DEFINED__
#define __TYPE_key_t_DEFINED__
typedef unsigned long long int                                            key_t;
#endif

/* src/sys/types/pid_t.c */
#ifndef __TYPE_pid_t_DEFINED__
#define __TYPE_pid_t_DEFINED__
typedef long int                                                          pid_t;
#endif

/* src/time/time_t.c */
#ifndef __TYPE_time_t_DEFINED__
#define __TYPE_time_t_DEFINED__
typedef long int                                                         time_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/msg/struct_msqid_ds.c */
#ifndef __TYPE_struct_msqid_ds_DEFINED__
#define __TYPE_struct_msqid_ds_DEFINED__
struct msqid_ds {
	struct ipc_perm msg_perm;	/* operation permissions */
	msgqnum_t msg_qnum;		/* # messages on queue */
	msglen_t msg_qbytes;		/* Max # bytes allowed on queue */
	pid_t msg_lspid;		/* PID of last msgsnd() */
	pid_t msg_lrpid;		/* PID of last msgrcg() */
	time_t msg_stime;		/* time of last msgsnd() */
	time_t msg_rtime;		/* time of last msgrcv() */
	time_t msg_ctime;		/* time of last change */
};
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/msg/msgctl.c */
int msgctl(int __msqid, int __cmd, struct msqid_ds *__buf);
/* ./src/sys/msg/msgget.c */
int msgget(key_t __key, int __msgflg);
/* ./src/sys/msg/msgrcv.c */
ssize_t msgrcv(int __msqid, void *__msgp, size_t __msgsz, long __msgtyp, int __msgflg);
/* ./src/sys/msg/msgsnd.c */
int msgsnd(int __msqid, const void *__msgp, size_t __msgsz, int __msgflg);
#endif


#endif

#ifndef __SYS_SEM_H__
#define __SYS_SEM_H__

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

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/sem/ipc.ref */
#include <sys/ipc.h>
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/sem/GETALL.c */
#define GETALL                                                                 4
/* ./src/sys/sem/GETNCNT.c */
#define GETNCNT                                                                1
/* ./src/sys/sem/GETPID.c */
#define GETPID                                                                 2
/* ./src/sys/sem/GETVAL.c */
#define GETVAL                                                                 3
/* ./src/sys/sem/GETZCNT.c */
#define GETZCNT                                                                5
/* ./src/sys/sem/SEM_UNDO.c */
#define SEM_UNDO                                                               1
/* ./src/sys/sem/SETALL.c */
#define SETALL                                                                12
/* ./src/sys/sem/SETVAL.c */
#define SETVAL                                                                11
#endif

#if	(defined _XOPEN_SOURCE)
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
/* ./src/sys/sem/struct_sem_anonymous.c */
#ifndef __TYPE_struct_sem_anonymous_DEFINED__
#define __TYPE_struct_sem_anonymous_DEFINED__
struct __sem_anonymous {
	unsigned short semval;
	pid_t sempid;
	unsigned short semncnt;
	unsigned short semzcnt;
};
#endif

/* ./src/sys/sem/struct_sembuf.c */
#ifndef __TYPE_struct_sembuf_DEFINED__
#define __TYPE_struct_sembuf_DEFINED__
struct sembuf {
	unsigned short sem_num;
	short sem_op;
	short sem_flg;
};
#endif

/* ./src/sys/sem/struct_semid_ds.c */
#ifndef __TYPE_struct_semid_ds_DEFINED__
#define __TYPE_struct_semid_ds_DEFINED__
struct semid_ds {
	struct ipc_perm sem_perm;
	unsigned short sem_nsems;
	time_t sem_otime;
	time_t sem_ctime;
};
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/sem/semctl.c */
int semctl(int __semid, int __semnum, int __cmd, ...);
/* ./src/sys/sem/semget.c */
int semget(key_t __key, int __nsems, int __semflg);
/* ./src/sys/sem/semop.c */
int semop(int __semid, struct sembuf *__sops, size_t __nsops);
#endif


#endif

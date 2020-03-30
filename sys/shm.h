#ifndef __SYS_SHM_H__
#define __SYS_SHM_H__

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
/* ./src/sys/shm/ipc.ref */
#include <sys/ipc.h>
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/shm/SHMLBA.c */
#define SHMLBA                                                                 3
/* ./src/sys/shm/SHM_RDONLY.c */
#define SHM_RDONLY                                                             1
/* ./src/sys/shm/SHM_RND.c */
#define SHM_RND                                                                2
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/shm/shmatt_t.c */
#ifndef __TYPE_shmatt_t_DEFINED__
#define __TYPE_shmatt_t_DEFINED__
typedef unsigned short                                                 shmatt_t;
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
/* ./src/sys/shm/struct_shmid_ds.c */
#ifndef __TYPE_struct_shmid_ds_DEFINED__
#define __TYPE_struct_shmid_ds_DEFINED__
struct shmid_ds {
	struct ipc_perm shm_perm;
	size_t shm_segsz;
	pid_t shm_lpid;
	pid_t shm_cpid;
	shmatt_t shm_nattach;
	time_t shm_atime;
	time_t shm_dtime;
	time_t shm_ctime;
};
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/shm/shmat.c */
void * shmat(int __shmid, const void *__shmaddr, int __shmflg);
/* ./src/sys/shm/shmctl.c */
int shmctl(int __shmid, int __cmd, struct shmid_ds *__buf);
/* ./src/sys/shm/shmdt.c */
int shmdt(const void *__shmaddr);
/* ./src/sys/shm/shmget.c */
int shmget(key_t __key, size_t __size, int __shmflg);
#endif


#endif

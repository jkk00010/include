#ifndef __SYS_IPC_H__
#define __SYS_IPC_H__

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
/* ./src/sys/ipc/IPC_CREAT.c */
#define IPC_CREAT                                                              1
/* ./src/sys/ipc/IPC_EXCL.c */
#define IPC_EXCL                                                               2
/* ./src/sys/ipc/IPC_NOWAIT.c */
#define IPC_NOWAIT                                                             3
/* ./src/sys/ipc/IPC_PRIVATE.c */
#define IPC_PRIVATE                                                            4
/* ./src/sys/ipc/IPC_RMID.c */
#define IPC_RMID                                                               5
/* ./src/sys/ipc/IPC_SET.c */
#define IPC_SET                                                                6
/* ./src/sys/ipc/IPC_STAT.c */
#define IPC_STAT                                                               7
#endif

#if	(defined _XOPEN_SOURCE)
/* src/sys/types/gid_t.c */
#ifndef __TYPE_gid_t_DEFINED__
#define __TYPE_gid_t_DEFINED__
typedef                                                        unsigned long int
	gid_t;
#endif

/* src/sys/types/key_t.c */
#ifndef __TYPE_key_t_DEFINED__
#define __TYPE_key_t_DEFINED__
typedef unsigned long long int                                            key_t;
#endif

/* src/sys/types/mode_t.c */
#ifndef __TYPE_mode_t_DEFINED__
#define __TYPE_mode_t_DEFINED__
typedef unsigned long int                                                mode_t;
#endif

/* src/sys/types/uid_t.c */
#ifndef __TYPE_uid_t_DEFINED__
#define __TYPE_uid_t_DEFINED__
typedef                                                        unsigned long int
	uid_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/ipc/struct_ipc_perm.c */
#ifndef __TYPE_struct_ipc_perm_DEFINED__
#define __TYPE_struct_ipc_perm_DEFINED__
struct ipc_perm {
	uid_t uid;	/* Owner's user ID */
	gid_t gid;	/* Owner's group ID */
	uid_t cuid;	/* Creator's user ID */
	uid_t cgid;	/* Creator's group ID */
	mode_t mode;	/* Read/write permission */
};
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/ipc/ftok.c */
key_t ftok(const char *__path, int __id);
#endif


#endif

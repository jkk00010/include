#ifndef __FCNTL_H__
#define __FCNTL_H__

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

#if	(defined _POSIX_SOURCE)
/* ./src/fcntl/FD_CLOEXEC.c */
#define FD_CLOEXEC                                                           (1)
/* ./src/fcntl/F_DUPFD.c */
#define F_DUPFD                                                              (1)
/* ./src/fcntl/F_GETFD.c */
#define F_GETFD                                                              (3)
/* ./src/fcntl/F_GETFL.c */
#define F_GETFL                                                              (5)
/* ./src/fcntl/F_GETLK.c */
#define F_GETLK                                                              (7)
/* ./src/fcntl/F_RDLCK.c */
#define F_RDLCK                                                              (1)
/* ./src/fcntl/F_SETFD.c */
#define F_SETFD                                                              (4)
/* ./src/fcntl/F_SETFL.c */
#define F_SETFL                                                              (6)
/* ./src/fcntl/F_SETLK.c */
#define F_SETLK                                                              (8)
/* ./src/fcntl/F_SETLKW.c */
#define F_SETLKW                                                             (9)
/* ./src/fcntl/F_UNLCK.c */
#define F_UNLCK                                                              (2)
/* ./src/fcntl/F_WRLCK.c */
#define F_WRLCK                                                              (3)
/* ./src/fcntl/O_ACCMODE.c */
#define O_ACCMODE                     (O_EXEC|O_RDONLY|O_RDWR|O_SEARCH|O_WRONLY)
/* ./src/fcntl/O_APPEND.c */
#define O_APPEND                                                          (1<<8)
/* ./src/fcntl/O_CREAT.c */
#define O_CREAT                                                           (1<<1)
/* ./src/fcntl/O_EXCL.c */
#define O_EXCL                                                            (1<<3)
/* ./src/fcntl/O_NOCTTY.c */
#define O_NOCTTY                                                          (1<<4)
/* ./src/fcntl/O_NONBLOCK.c */
#define O_NONBLOCK                                                       (1<<10)
/* ./src/fcntl/O_RDONLY.c */
#define O_RDONLY                                                         (1<<14)
/* ./src/fcntl/O_RDWR.c */
#define O_RDWR                                                           (1<<15)
/* ./src/fcntl/O_TRUNC.c */
#define O_TRUNC                                                           (1<<6)
/* ./src/fcntl/O_WRONLY.c */
#define O_WRONLY                                                         (1<<17)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/fcntl/O_DSYNC.c */
#define O_DSYNC                                                           (1<<9)
/* ./src/fcntl/O_RSYNC.c */
#define O_RSYNC                                                          (1<<11)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/fcntl/O_SYNC.c */
#define O_SYNC                                                           (1<<12)
#endif

#if	(defined _XOPEN_SOURCE)
/* src/stdio/SEEK_CUR.c */
#define SEEK_CUR                                                             (1)
/* src/stdio/SEEK_END.c */
#define SEEK_END                                                             (2)
/* src/stdio/SEEK_SET.c */
#define SEEK_SET                                                             (3)
#endif

#if	(defined _XOPEN_SOURCE)
/* src/sys/types/mode_t.c */
#ifndef __TYPE_mode_t_DEFINED__
#define __TYPE_mode_t_DEFINED__
typedef unsigned long int                                                mode_t;
#endif

/* src/sys/types/off_t.c */
#ifndef __TYPE_off_t_DEFINED__
#define __TYPE_off_t_DEFINED__
typedef                                                                 long int
	off_t;
#endif

/* src/sys/types/pid_t.c */
#ifndef __TYPE_pid_t_DEFINED__
#define __TYPE_pid_t_DEFINED__
typedef long int                                                          pid_t;
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/fcntl/struct_flock.c */
#ifndef __TYPE_struct_flock_DEFINED__
#define __TYPE_struct_flock_DEFINED__
struct flock {
	short l_type;
	short l_whence;
	off_t l_start;
	off_t l_len;
	pid_t l_pid;
};
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/fcntl/creat.c */
int creat(const char *__path, mode_t __mode);
/* ./src/fcntl/fcntl.c */
int fcntl(int __fildes, int __cmd, ...);
/* ./src/fcntl/open.c */
int open(const char *__path, int __oflag, ...);
#endif

#endif

#include <ungol/fcntl.h>

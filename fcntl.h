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
#define FD_CLOEXEC                                                           (1)
#define F_DUPFD                                                              (1)
#define F_GETFD                                                              (3)
#define F_GETFL                                                              (5)
#define F_GETLK                                                              (7)
#define F_RDLCK                                                              (1)
#define F_SETFD                                                              (4)
#define F_SETFL                                                              (6)
#define F_SETLK                                                              (8)
#define F_SETLKW                                                             (9)
#define F_UNLCK                                                              (2)
#define F_WRLCK                                                              (3)
#define O_ACCMODE                     (O_EXEC|O_RDONLY|O_RDWR|O_SEARCH|O_WRONLY)
#define O_APPEND                                                          (1<<8)
#define O_CREAT                                                           (1<<1)
#define O_EXCL                                                            (1<<3)
#define O_NOCTTY                                                          (1<<4)
#define O_NONBLOCK                                                       (1<<10)
#define O_RDONLY                                                         (1<<14)
#define O_RDWR                                                           (1<<15)
#define O_TRUNC                                                           (1<<6)
#define O_WRONLY                                                         (1<<17)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
#define O_DSYNC                                                           (1<<9)
#define O_RSYNC                                                          (1<<11)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
#define O_SYNC                                                           (1<<12)
#endif

#if	(defined _XOPEN_SOURCE)
#define SEEK_CUR                                                             (1)
#define SEEK_END                                                             (2)
#define SEEK_SET                                                             (3)
#endif

#if	(defined _XOPEN_SOURCE)
#ifndef __mode_t_DEFINED__
#define __mode_t_DEFINED__
typedef unsigned long int                                                mode_t;
#endif

#ifndef __off_t_DEFINED__
#define __off_t_DEFINED__
typedef                                                                 long int
	off_t;
#endif

#ifndef __pid_t_DEFINED__
#define __pid_t_DEFINED__
typedef long int                                                          pid_t;
#endif

#endif

#if	(defined _POSIX_SOURCE)
#ifndef __struct_flock_DEFINED__
#define __struct_flock_DEFINED__
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
int creat(const char *__path, mode_t __mode);
int fcntl(int __fildes, int __cmd, ...);
int open(const char *__path, int __oflag, ...);
#endif

#endif

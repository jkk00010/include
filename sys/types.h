#ifndef __SYS_TYPES_H__
#define __SYS_TYPES_H__

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

#if	(defined _POSIX_SOURCE)
/* ./src/sys/types/dev_t.c */
#ifndef __TYPE_dev_t_DEFINED__
#define __TYPE_dev_t_DEFINED__
typedef                                                        unsigned long int
	dev_t;
#endif

/* ./src/sys/types/gid_t.c */
#ifndef __TYPE_gid_t_DEFINED__
#define __TYPE_gid_t_DEFINED__
typedef                                                        unsigned long int
	gid_t;
#endif

/* ./src/sys/types/ino_t.c */
#ifndef __TYPE_ino_t_DEFINED__
#define __TYPE_ino_t_DEFINED__
typedef                                                        unsigned long int
	ino_t;
#endif

/* ./src/sys/types/mode_t.c */
#ifndef __TYPE_mode_t_DEFINED__
#define __TYPE_mode_t_DEFINED__
typedef unsigned long int                                                mode_t;
#endif

/* ./src/sys/types/nlink_t.c */
#ifndef __TYPE_nlink_t_DEFINED__
#define __TYPE_nlink_t_DEFINED__
typedef                                                        unsigned long int
	nlink_t;
#endif

/* ./src/sys/types/off_t.c */
#ifndef __TYPE_off_t_DEFINED__
#define __TYPE_off_t_DEFINED__
typedef                                                                 long int
	off_t;
#endif

/* ./src/sys/types/pid_t.c */
#ifndef __TYPE_pid_t_DEFINED__
#define __TYPE_pid_t_DEFINED__
typedef long int                                                          pid_t;
#endif

/* ./src/sys/types/ssize_t.c */
#ifndef __TYPE_ssize_t_DEFINED__
#define __TYPE_ssize_t_DEFINED__
typedef long int                                                        ssize_t;
#endif

/* ./src/sys/types/uid_t.c */
#ifndef __TYPE_uid_t_DEFINED__
#define __TYPE_uid_t_DEFINED__
typedef                                                        unsigned long int
	uid_t;
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

#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/sys/types/clockid_t.c */
#ifndef __TYPE_clockid_t_DEFINED__
#define __TYPE_clockid_t_DEFINED__
typedef unsigned long int                                             clockid_t;
#endif

/* ./src/sys/types/timer_t.c */
#ifndef __TYPE_timer_t_DEFINED__
#define __TYPE_timer_t_DEFINED__
typedef unsigned long int                                               timer_t;
#endif

#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/types/id_t.c */
#ifndef __TYPE_id_t_DEFINED__
#define __TYPE_id_t_DEFINED__
typedef unsigned long long int                                             id_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/types/key_t.c */
#ifndef __TYPE_key_t_DEFINED__
#define __TYPE_key_t_DEFINED__
typedef unsigned long long int                                            key_t;
#endif

/* src/time/clock_t.c */
#ifndef __TYPE_clock_t_DEFINED__
#define __TYPE_clock_t_DEFINED__
typedef long int                                                        clock_t;
#endif

/* src/time/time_t.c */
#ifndef __TYPE_time_t_DEFINED__
#define __TYPE_time_t_DEFINED__
typedef long int                                                         time_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
/* ./src/sys/types/useconds_t.c */
#ifndef __TYPE_useconds_t_DEFINED__
#define __TYPE_useconds_t_DEFINED__
typedef unsigned int                                                 useconds_t;
#endif

#endif


#endif

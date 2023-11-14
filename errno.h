#ifndef __STDC_VERSION_ERRNO_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_ERRNO_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_ERRNO_H__ 1
#endif

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

/* TODO: XOPEN/POSIX/etc. */

#define EDOM                                                                 (1)
#define ERANGE                                                               (2)
#define errno                                                       (*__errno())

#if (199504L <= __STDC_VERSION_ERRNO_H__)
#define EILSEQ                                                               (3)
#endif

#if (201107L <= __STDC_VERSION_ERRNO_H__ && defined __STDC_WANT_LIB_EXT1__)
typedef int                                                             errno_t;
#endif

#if (defined _POSIX_SOURCE)
#define E2BIG                                                               (10)
#define EACCES                                                              (11)
#define EAGAIN                                                              (12)
#define EBADF                                                               (13)
#define EBUSY                                                               (14)
#define ECHILD                                                              (15)
#define EDEADLK                                                             (16)
#define EEXIST                                                              (17)
#define EFAULT                                                              (18)
#define EFBIG                                                               (19)
#define EINTR                                                               (20)
#define EINVAL                                                              (21)
#define EIO                                                                 (22)
#define EISDIR                                                              (23)
#define EMFILE                                                              (24)
#define EMLINK                                                              (25)
#define ENAMETOOLONG                                                        (26)
#define ENFILE                                                              (27)
#define ENODEV                                                              (28)
#define ENOENT                                                              (29)
#define ENOEXEC                                                             (30)
#define ENOLCK                                                              (31)
#define ENOMEM                                                              (32)
#define ENOSPC                                                              (33)
#define ENOSYS                                                              (34)
#define ENOTDIR                                                             (35)
#define ENOTEMPTY                                                           (36)
#define ENOTTY                                                              (37)
#define ENXIO                                                               (38)
#define EPERM                                                               (39)
#define EPIPE                                                               (40)
#define EROFS                                                               (41)
#define ESPIPE                                                              (42)
#define ESRCH                                                               (43)
#define EXDEV                                                               (44)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
#define ECANCELED                                                           (20)
#define ENOTSUP                                                             (68)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define EBADMSG                                                             (18)
#define EINPROGRESS                                                         (33)
#define EMSGSIZE                                                            (42)
#endif

#if	(defined _POSIX_C_SOURCE && 199506 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define ETIMEDOUT                                                           (84)
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
#define EIDRM                                                               (32)
#define ENOMSG                                                              (57)
#define ETXTBSY                                                             (85)
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define EADDRINUSE                                                          (12)
#define EADDRNOTAVAIL                                                       (13)
#define EAFNOSUPPORT                                                        (14)
#define EALREADY                                                            (16)
#define ECONNABORTED                                                        (22)
#define ECONNREFUSED                                                        (23)
#define ECONNRESET                                                          (24)
#define EDESTADDRREQ                                                        (26)
#define EDQUOT                                                              (27)
#define EHOSTUNREACH                                                        (31)
#define EISCONN                                                             (37)
#define ELOOP                                                               (39)
#define EMULTIHOP                                                           (43)
#define ENETDOWN                                                            (45)
#define ENETUNREACH                                                         (47)
#define ENOBUFS                                                             (49)
#define ENOLINK                                                             (55)
#define ENOPROTOOPT                                                         (58)
#define ENOTCONN                                                            (63)
#define ENOTSOCK                                                            (67)
#define EOPNOTSUPP                                                          (71)
#define EPROTO                                                              (76)
#define EPROTONOSUPPORT                                                     (77)
#define EPROTOTYPE                                                          (78)
#define ESTALE                                                              (82)
#define EWOULDBLOCK                                                         (86)
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define ENODATA                                                             (50)
#define ENOSR                                                               (60)
#define ENOSTR                                                              (61)
#define EOVERFLOW                                                           (72)
#define ETIME                                                               (83)
#endif

int *__errno(void);

#endif

#ifdef __linux__
#include <ungol/errno.h>
#endif

#ifndef __ERRNO_H__
#define __ERRNO_H__

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

/* ./src/errno/EDOM.c */
#define EDOM                                                                 (1)
/* ./src/errno/ERANGE.c */
#define ERANGE                                                               (2)
/* ./src/errno/errno.c */
#define errno                                                       (*__errno())

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
/* ./src/errno/EILSEQ.c */
#define EILSEQ                                                               (3)
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/errno/E2BIG.c */
#define E2BIG                                                               (10)
/* ./src/errno/EACCES.c */
#define EACCES                                                              (11)
/* ./src/errno/EAGAIN.c */
#define EAGAIN                                                              (12)
/* ./src/errno/EBADF.c */
#define EBADF                                                               (13)
/* ./src/errno/EBUSY.c */
#define EBUSY                                                               (14)
/* ./src/errno/ECHILD.c */
#define ECHILD                                                              (15)
/* ./src/errno/EDEADLK.c */
#define EDEADLK                                                             (16)
/* ./src/errno/EEXIST.c */
#define EEXIST                                                              (17)
/* ./src/errno/EFAULT.c */
#define EFAULT                                                              (18)
/* ./src/errno/EFBIG.c */
#define EFBIG                                                               (19)
/* ./src/errno/EINTR.c */
#define EINTR                                                               (20)
/* ./src/errno/EINVAL.c */
#define EINVAL                                                              (21)
/* ./src/errno/EIO.c */
#define EIO                                                                 (22)
/* ./src/errno/EISDIR.c */
#define EISDIR                                                              (23)
/* ./src/errno/EMFILE.c */
#define EMFILE                                                              (24)
/* ./src/errno/EMLINK.c */
#define EMLINK                                                              (25)
/* ./src/errno/ENAMETOOLONG.c */
#define ENAMETOOLONG                                                        (26)
/* ./src/errno/ENFILE.c */
#define ENFILE                                                              (27)
/* ./src/errno/ENODEV.c */
#define ENODEV                                                              (28)
/* ./src/errno/ENOENT.c */
#define ENOENT                                                              (29)
/* ./src/errno/ENOEXEC.c */
#define ENOEXEC                                                             (30)
/* ./src/errno/ENOLCK.c */
#define ENOLCK                                                              (31)
/* ./src/errno/ENOMEM.c */
#define ENOMEM                                                              (32)
/* ./src/errno/ENOSPC.c */
#define ENOSPC                                                              (33)
/* ./src/errno/ENOSYS.c */
#define ENOSYS                                                              (34)
/* ./src/errno/ENOTDIR.c */
#define ENOTDIR                                                             (35)
/* ./src/errno/ENOTEMPTY.c */
#define ENOTEMPTY                                                           (36)
/* ./src/errno/ENOTTY.c */
#define ENOTTY                                                              (37)
/* ./src/errno/ENXIO.c */
#define ENXIO                                                               (38)
/* ./src/errno/EPERM.c */
#define EPERM                                                               (39)
/* ./src/errno/EPIPE.c */
#define EPIPE                                                               (40)
/* ./src/errno/EROFS.c */
#define EROFS                                                               (41)
/* ./src/errno/ESRCH.c */
#define ESRCH                                                               (43)
/* ./src/errno/EXDEV.c */
#define EXDEV                                                               (44)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/errno/ECANCELED.c */
#define ECANCELED                                                           (20)
/* ./src/errno/ENOTSUP.c */
#define ENOTSUP                                                             (68)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/errno/EBADMSG.c */
#define EBADMSG                                                             (18)
/* ./src/errno/EINPROGRESS.c */
#define EINPROGRESS                                                         (33)
/* ./src/errno/EMSGSIZE.c */
#define EMSGSIZE                                                            (42)
#endif

#if	(defined _POSIX_C_SOURCE && 199506 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/errno/ETIMEDOUT.c */
#define ETIMEDOUT                                                           (84)
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/errno/EIDRM.c */
#define EIDRM                                                               (32)
/* ./src/errno/ENOMSG.c */
#define ENOMSG                                                              (57)
/* ./src/errno/ETXTBSY.c */
#define ETXTBSY                                                             (85)
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/errno/EADDRINUSE.c */
#define EADDRINUSE                                                          (12)
/* ./src/errno/EADDRNOTAVAIL.c */
#define EADDRNOTAVAIL                                                       (13)
/* ./src/errno/EAFNOSUPPORT.c */
#define EAFNOSUPPORT                                                        (14)
/* ./src/errno/EALREADY.c */
#define EALREADY                                                            (16)
/* ./src/errno/ECONNABORTED.c */
#define ECONNABORTED                                                        (22)
/* ./src/errno/ECONNREFUSED.c */
#define ECONNREFUSED                                                        (23)
/* ./src/errno/ECONNRESET.c */
#define ECONNRESET                                                          (24)
/* ./src/errno/EDESTADDRREQ.c */
#define EDESTADDRREQ                                                        (26)
/* ./src/errno/EDQUOT.c */
#define EDQUOT                                                              (27)
/* ./src/errno/EHOSTUNREACH.c */
#define EHOSTUNREACH                                                        (31)
/* ./src/errno/EISCONN.c */
#define EISCONN                                                             (37)
/* ./src/errno/ELOOP.c */
#define ELOOP                                                               (39)
/* ./src/errno/EMULTIHOP.c */
#define EMULTIHOP                                                           (43)
/* ./src/errno/ENETDOWN.c */
#define ENETDOWN                                                            (45)
/* ./src/errno/ENETUNREACH.c */
#define ENETUNREACH                                                         (47)
/* ./src/errno/ENOBUFS.c */
#define ENOBUFS                                                             (49)
/* ./src/errno/ENOLINK.c */
#define ENOLINK                                                             (55)
/* ./src/errno/ENOPROTOOPT.c */
#define ENOPROTOOPT                                                         (58)
/* ./src/errno/ENOTCONN.c */
#define ENOTCONN                                                            (63)
/* ./src/errno/ENOTSOCK.c */
#define ENOTSOCK                                                            (67)
/* ./src/errno/EOPNOTSUPP.c */
#define EOPNOTSUPP                                                          (71)
/* ./src/errno/EPROTO.c */
#define EPROTO                                                              (76)
/* ./src/errno/EPROTONOSUPPORT.c */
#define EPROTONOSUPPORT                                                     (77)
/* ./src/errno/EPROTOTYPE.c */
#define EPROTOTYPE                                                          (78)
/* ./src/errno/ESTALE.c */
#define ESTALE                                                              (82)
/* ./src/errno/EWOULDBLOCK.c */
#define EWOULDBLOCK                                                         (86)
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/errno/ENODATA.c */
#define ENODATA                                                             (50)
/* ./src/errno/ENOSR.c */
#define ENOSR                                                               (60)
/* ./src/errno/ENOSTR.c */
#define ENOSTR                                                              (61)
/* ./src/errno/EOVERFLOW.c */
#define EOVERFLOW                                                           (72)
/* ./src/errno/ETIME.c */
#define ETIME                                                               (83)
#endif

/* ./src/errno/__errno.c */
int *__errno(void);


#endif

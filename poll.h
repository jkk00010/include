#ifndef __POLL_H__
#define __POLL_H__

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

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/poll/POLLERR.c */
#define POLLERR                                                              (8)
/* ./src/poll/POLLHUP.c */
#define POLLHUP                                                              (9)
/* ./src/poll/POLLIN.c */
#define POLLIN                                                               (1)
/* ./src/poll/POLLNVAL.c */
#define POLLNVAL                                                            (10)
/* ./src/poll/POLLOUT.c */
#define POLLOUT                                                              (5)
/* ./src/poll/POLLPRI.c */
#define POLLPRI                                                              (4)
/* ./src/poll/POLLRDBAND.c */
#define POLLRDBAND                                                           (3)
/* ./src/poll/POLLRDNORM.c */
#define POLLRDNORM                                                           (2)
/* ./src/poll/POLLWRBAND.c */
#define POLLWRBAND                                                           (7)
/* ./src/poll/POLLWRNORM.c */
#define POLLWRNORM                                                           (6)
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/poll/nfds_t.c */
#ifndef __TYPE_nfds_t_DEFINED__
#define __TYPE_nfds_t_DEFINED__
typedef unsigned int                                                     nfds_t;
#endif

#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/poll/struct_pollfd.c */
#ifndef __TYPE_struct_pollfd_DEFINED__
#define __TYPE_struct_pollfd_DEFINED__
struct pollfd {
	int fd;
	short events;
	short revents;
};
#endif

#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/poll/poll.c */
int poll(struct pollfd fds[], nfds_t __nfds, int __timeout);
#endif


#endif

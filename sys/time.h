#ifndef __SYS_TIME_H__
#define __SYS_TIME_H__

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

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/time/FD_CLR.c */
#define FD_CLR /* TODO */
/* ./src/sys/time/FD_ISSET.c */
#define FD_ISSET /* TODO */
/* ./src/sys/time/FD_SET.c */
#define FD_SET /* TODO */
/* ./src/sys/time/FD_SETSIZE.c */
#define FD_SETSIZE /* TODO */
/* ./src/sys/time/FD_ZERO.c */
#define FD_ZERO /* TIME */
/* ./src/sys/time/ITIMER_PROF.c */
#define ITIMER_PROF                                                            2
/* ./src/sys/time/ITIMER_REAL.c */
#define ITIMER_REAL                                                            0
/* ./src/sys/time/ITIMER_VIRTUAL.c */
#define ITIMER_VIRTUAL                                                         1
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/time/fd_set.c */
#ifndef __TYPE_fd_set_DEFINED__
#define __TYPE_fd_set_DEFINED__
typedef struct {
	long fds_bits[100];
} fd_set;
#endif

/* src/time/time_t.c */
#ifndef __TYPE_time_t_DEFINED__
#define __TYPE_time_t_DEFINED__
typedef long int                                                         time_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/time/struct_timeval.c */
#ifndef __TYPE_struct_timeval_DEFINED__
#define __TYPE_struct_timeval_DEFINED__
struct timeval {
	time_t tv_sec;
	useconds_t tv_usec;
};
#endif

/* ./src/sys/time/struct_itimerval.c */
#ifndef __TYPE_struct_itimerval_DEFINED__
#define __TYPE_struct_itimerval_DEFINED__
struct itimerval {
	struct timeval it_interval;
	struct timeval it_value;
};
#endif
#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/time/getitimer.c */
int getitimer(int __which, struct itimerval *__value);
/* ./src/sys/time/gettimeofday.c */
int gettimeofday(struct timeval *restrict __tp, void *restrict __tzp);
/* ./src/sys/time/select.c */
int select(int nfds , fd_set * readfds , fd_set * writefds , fd_set * errorfds , struct timeval * timeout );
/* ./src/sys/time/setitimer.c */
int setitimer(int __which, const struct itimerval *restrict __value, struct itimerval *restrict __ovalue);
/* ./src/sys/time/utimes.c */
int utimes(const char *__path, const struct timeval times[2]);
#endif


#endif

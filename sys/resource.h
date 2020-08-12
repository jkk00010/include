#ifndef __SYS_RESOURCE_H__
#define __SYS_RESOURCE_H__

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
/* ./src/sys/resource/PRIO_PGRP.c */
#define PRIO_PGRP /* TODO */
/* ./src/sys/resource/PRIO_PROCESS.c */
#define PRIO_PROCESS /* TODO */
/* ./src/sys/resource/PRIO_USER.c */
#define PRIO_USER /* TODO */
/* ./src/sys/resource/RLIMIT_AS.c */
#define RLIMIT_AS /* TODO */
/* ./src/sys/resource/RLIMIT_CORE.c */
#define RLIMIT_CORE /* TODO */
/* ./src/sys/resource/RLIMIT_CPU.c */
#define RLIMIT_CPU /* TODO */
/* ./src/sys/resource/RLIMIT_DATA.c */
#define RLIMIT_DATA /* TODO */
/* ./src/sys/resource/RLIMIT_FSIZE.c */
#define RLIMIT_FSIZE 1 /* TODO */
/* ./src/sys/resource/RLIMIT_NOFILE.c */
#define RLIMIT_NOFILE /* TODO */
/* ./src/sys/resource/RLIMIT_STACK.c */
#define RLIMIT_STACK /* TODO */
/* ./src/sys/resource/RLIM_INFINITY.c */
#define RLIM_INFINITY /* TODO */
/* ./src/sys/resource/RUSAGE_CHILDREN.c */
#define RUSAGE_CHILDREN /* TODO */
/* ./src/sys/resource/RUSAGE_SELF.c */
#define RUSAGE_SELF /* TODO */
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/resource/rlim_t.c */
#ifndef __TYPE_rlim_t_DEFINED__
#define __TYPE_rlim_t_DEFINED__
typedef unsigned long long int                                           rlim_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/resource/struct_rlimit.c */
#ifndef __TYPE_struct_rlimit_DEFINED__
#define __TYPE_struct_rlimit_DEFINED__
struct rlimit {
	rlim_t rlim_cur;
	rlim_t rlim_max;
};
#endif

/* src/sys/time/struct_timeval.c */
#ifndef __TYPE_struct_timeval_DEFINED__
#define __TYPE_struct_timeval_DEFINED__
struct timeval {
	time_t tv_sec;
	useconds_t tv_usec;
};
#endif

/* ./src/sys/resource/struct_rusage.c */
#ifndef __TYPE_struct_rusage_DEFINED__
#define __TYPE_struct_rusage_DEFINED__
struct rusage {
	struct timeval ru_utime;
	struct timeval ru_stime;
};
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/resource/getpriority.c */
int getpriority(int __which, id_t __who);
/* ./src/sys/resource/getrlimit.c */
int getrlimit(int __resource, struct rlimit *__rlp);
/* ./src/sys/resource/getrusage.c */
int getrusage(int __who, struct rusage *__r_usage);
/* ./src/sys/resource/setpriority.c */
int setpriority(int __which, id_t __who, int __value);
/* ./src/sys/resource/setrlimit.c */
int setrlimit(int __resource, const struct rlimit *__rlp);
#endif


#endif

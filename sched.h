#ifndef __SCHED_H__
#define __SCHED_H__

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

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/sched/SCHED_FIFO.c */
#define SCHED_FIFO                                                           (0)
/* ./src/sched/SCHED_OTHER.c */
#define SCHED_OTHER                                                          (3)
/* ./src/sched/SCHED_RR.c */
#define SCHED_RR                                                             (1)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/sched/struct_sched_param.c */
#ifndef __TYPE_struct_sched_param_DEFINED__
#define __TYPE_struct_sched_param_DEFINED__
struct sched_param {
	int sched_priority;
	#if defined _POSIX_SS || defined _POSIX_TSP
	int sched_ss_low_priority;
	struct timespec sched_ss_repl_period;
	struct timespec sched_ss_init_budget;
	int sched_ss_max_repl;
	#endif
};
#endif

#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/sched/sched_get_priority_max.c */
int sched_get_priority_max(int __policy);
/* ./src/sched/sched_get_priority_min.c */
int sched_get_priority_min(int __policy);
/* ./src/sched/sched_getparam.c */
int sched_getparam(pid_t __pid, struct sched_param * __param);
/* ./src/sched/sched_getscheduler.c */
int sched_getscheduler(pid_t __pid);
/* ./src/sched/sched_rr_get_interval.c */
int sched_rr_get_interval(pid_t __pid, struct timespec * __interval);
/* ./src/sched/sched_setparam.c */
int sched_setparam(pid_t __pid, const struct sched_param * __param);
/* ./src/sched/sched_setscheduler.c */
int sched_setscheduler(pid_t __pid, int __policy, const struct sched_param * __param);
/* ./src/sched/sched_yield.c */
int sched_yield(void);
#endif


#endif

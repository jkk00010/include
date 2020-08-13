#ifndef __SYS_WAIT_H__
#define __SYS_WAIT_H__

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
/* ./src/sys/wait/WEXITSTATUS.c */
#define WEXITSTATUS(__stat_val)                              (__stat_val & 0xff)
/* ./src/sys/wait/WIFEXITED.c */
#define WIFEXITED(__stat_val)                                (__stat_val <= 255)
/* ./src/sys/wait/WIFSIGNALED.c */
#define WIFSIGNALED(__stat_val)                             (__stat_val & 0x100)
/* ./src/sys/wait/WIFSTOPPED.c */
#define WIFSTOPPED(__stat_val)                              (__stat_val & 0x200)
/* ./src/sys/wait/WNOHANG.c */
#define WNOHANG                                                           (1<<0)
/* ./src/sys/wait/WSTOPSIG.c */
#define WSTOPSIG(__stat_val)                                 (__stat_val & 0xff)
/* ./src/sys/wait/WTERMSIG.c */
#define WTERMSIG(__stat_val)                                 (__stat_val & 0xff)
/* ./src/sys/wait/WUNTRACED.c */
#define WUNTRACED                                                         (1<<1)
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/wait/WEXITED.c */
#define WEXITED                                                           (1<<3)
/* ./src/sys/wait/WNOWAIT.c */
#define WNOWAIT                                                           (1<<4)
/* ./src/sys/wait/WSTOPPED.c */
#define WSTOPPED                                                          (1<<5)
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/wait/WCONTINUED.c */
#define WCONTINUED                                                        (1<<2)
/* ./src/sys/wait/WIFCONTINUED.c */
#define WIFCONTINUED(__stat_val)                            (__stat_val & 0x400)
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/wait/idtype_t.c */
#ifndef __TYPE_idtype_t_DEFINED__
#define __TYPE_idtype_t_DEFINED__
typedef enum {
	P_ALL,
	P_PGID,
	P_PID
} idtype_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* src/signal/siginfo_t.c */
#ifndef __TYPE_siginfo_t_DEFINED__
#define __TYPE_siginfo_t_DEFINED__
typedef struct {
	int si_signo;
	int si_code;
	pid_t si_pid;
	uid_t si_uid;
	void *si_addr;
	int si_status;
	long si_band;
	int si_errno;
	union sigval si_value;
} siginfo_t;
#endif

/* src/sys/types/id_t.c */
#ifndef __TYPE_id_t_DEFINED__
#define __TYPE_id_t_DEFINED__
typedef unsigned long long int                                             id_t;
#endif

/* src/sys/types/pid_t.c */
#ifndef __TYPE_pid_t_DEFINED__
#define __TYPE_pid_t_DEFINED__
typedef long int                                                          pid_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* src/sys/resource/struct_rusage.c */
#ifndef __TYPE_struct_rusage_DEFINED__
#define __TYPE_struct_rusage_DEFINED__
struct rusage {
	struct timeval ru_utime;
	struct timeval ru_stime;
};
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/sys/wait/wait.c */
pid_t wait(int *__stat_loc);
/* ./src/sys/wait/waitpid.c */
pid_t waitpid(pid_t __pid, int *__stat_loc, int __options);
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/wait/waitid.c */
int waitid(idtype_t __idtype, id_t __id, siginfo_t *__infop, int __options);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 600)
/* ./src/sys/wait/wait3.c */
pid_t wait3(int *__state_loc, int __options, struct rusage *__resource_usage);
#endif


#endif

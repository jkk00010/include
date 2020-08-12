#ifndef __SIGNAL_H__
#define __SIGNAL_H__

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

/* ./src/signal/SIGABRT.c */
#define SIGABRT                                                              (6)
/* ./src/signal/SIGFPE.c */
#define SIGFPE                                                               (4)
/* ./src/signal/SIGILL.c */
#define SIGILL                                                               (5)
/* ./src/signal/SIGINT.c */
#define SIGINT                                                               (2)
/* ./src/signal/SIGSEGV.c */
#define SIGSEGV                                                              (7)
/* ./src/signal/SIGTERM.c */
#define SIGTERM                                                             (15)
/* ./src/signal/SIG_DFL.c */
#define SIG_DFL                                               ((void(*)(int))-1)
/* ./src/signal/SIG_ERR.c */
#define SIG_ERR                                               ((void(*)(int))-2)
/* ./src/signal/SIG_IGN.c */
#define SIG_IGN                                               ((void(*)(int))-3)

#if	(defined _POSIX_SOURCE)
/* ./src/signal/SA_NOCLDSTOP.c */
#define SA_NOCLDSTOP                                                      (1<<0)
/* ./src/signal/SIGALRM.c */
#define SIGALRM                                                             (14)
/* ./src/signal/SIGCHLD.c */
#define SIGCHLD                                                             (13)
/* ./src/signal/SIGCONT.c */
#define SIGCONT                                                             (14)
/* ./src/signal/SIGHUP.c */
#define SIGHUP                                                               (0)
/* ./src/signal/SIGKILL.c */
#define SIGKILL                                                              (9)
/* ./src/signal/SIGPIPE.c */
#define SIGPIPE                                                             (16)
/* ./src/signal/SIGQUIT.c */
#define SIGQUIT                                                              (3)
/* ./src/signal/SIGSTOP.c */
#define SIGSTOP                                                             (31)
/* ./src/signal/SIGTSTP.c */
#define SIGTSTP                                                             (18)
/* ./src/signal/SIGTTIN.c */
#define SIGTTIN                                                             (19)
/* ./src/signal/SIGTTOU.c */
#define SIGTTOU                                                             (20)
/* ./src/signal/SIGUSR1.c */
#define SIGUSR1                                                             (21)
/* ./src/signal/SIGUSR2.c */
#define SIGUSR2                                                             (22)
/* ./src/signal/SIG_BLOCK.c */
#define SIG_BLOCK                                                            (1)
/* ./src/signal/SIG_SETMASK.c */
#define SIG_SETMASK                                                          (3)
/* ./src/signal/SIG_UNBLOCK.c */
#define SIG_UNBLOCK                                                          (2)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/signal/SIGEV_NONE.c */
#define SIGEV_NONE                                                           (0)
/* ./src/signal/SIGEV_SIGNAL.c */
#define SIGEV_SIGNAL                                                         (1)
/* ./src/signal/SIGRTMAX.c */
#define SIGRTMAX                                  /* maximum real time signal */
/* ./src/signal/SIGRTMIN.c */
#define SIGRTMIN                                  /* minimum real-time signal */
/* ./src/signal/SI_ASYNCIO.c */
#define SI_ASYNCIO                                                          (14)
/* ./src/signal/SI_MESGQ.c */
#define SI_MESGQ                                                            (15)
/* ./src/signal/SI_QUEUE.c */
#define SI_QUEUE                                                            (12)
/* ./src/signal/SI_TIMER.c */
#define SI_TIMER                                                            (13)
/* ./src/signal/SI_USER.c */
#define SI_USER                                                             (11)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/signal/SA_SIGINFO.c */
#define SA_SIGINFO                                                        (1<<4)
/* ./src/signal/SIGBUS.c */
#define SIGBUS                                                              (12)
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/signal/SIGURG.c */
#define SIGURG                                                              (27)
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/signal/BUS_ADRALN.c */
#define BUS_ADRALN                                                           (1)
/* ./src/signal/BUS_ADRERR.c */
#define BUS_ADRERR                                                           (2)
/* ./src/signal/BUS_OBJERR.c */
#define BUS_OBJERR                                                           (3)
/* ./src/signal/CLD_CONTINUED.c */
#define CLD_CONTINUED                                                        (6)
/* ./src/signal/CLD_DUMPED.c */
#define CLD_DUMPED                                                           (3)
/* ./src/signal/CLD_EXITED.c */
#define CLD_EXITED                                                           (1)
/* ./src/signal/CLD_KILLED.c */
#define CLD_KILLED                                                           (2)
/* ./src/signal/CLD_STOPPED.c */
#define CLD_STOPPED                                                          (5)
/* ./src/signal/CLD_TRAPPED.c */
#define CLD_TRAPPED                                                          (4)
/* ./src/signal/FPE_FLTDIV.c */
#define FPE_FLTDIV                                                           (3)
/* ./src/signal/FPE_FLTINV.c */
#define FPE_FLTINV                                                           (7)
/* ./src/signal/FPE_FLTOVF.c */
#define FPE_FLTOVF                                                           (4)
/* ./src/signal/FPE_FLTRES.c */
#define FPE_FLTRES                                                           (6)
/* ./src/signal/FPE_FLTSUB.c */
#define FPE_FLTSUB                                                           (8)
/* ./src/signal/FPE_FLTUND.c */
#define FPE_FLTUND                                                           (5)
/* ./src/signal/FPE_INTDIV.c */
#define FPE_INTDIV                                                           (1)
/* ./src/signal/FPE_INTOVF.c */
#define FPE_INTOVF                                                           (2)
/* ./src/signal/ILL_BADSTK.c */
#define ILL_BADSTK                                                           (8)
/* ./src/signal/ILL_COPROC.c */
#define ILL_COPROC                                                           (7)
/* ./src/signal/ILL_ILLADR.c */
#define ILL_ILLADR                                                           (3)
/* ./src/signal/ILL_ILLOPC.c */
#define ILL_ILLOPC                                                           (1)
/* ./src/signal/ILL_ILLOPN.c */
#define ILL_ILLOPN                                                           (2)
/* ./src/signal/ILL_ILLTRP.c */
#define ILL_ILLTRP                                                           (4)
/* ./src/signal/ILL_PRVOPC.c */
#define ILL_PRVOPC                                                           (5)
/* ./src/signal/ILL_PRVREG.c */
#define ILL_PRVREG                                                           (6)
/* ./src/signal/SA_NOCLDWAIT.c */
#define SA_NOCLDWAIT                                                      (1<<5)
/* ./src/signal/SA_NODEFER.c */
#define SA_NODEFER                                                        (1<<6)
/* ./src/signal/SA_RESETHAND.c */
#define SA_RESETHAND                                                      (1<<2)
/* ./src/signal/SA_RESTART.c */
#define SA_RESTART                                                        (1<<3)
/* ./src/signal/SEGV_ACCERR.c */
#define SEGV_ACCERR                                                          (2)
/* ./src/signal/SEGV_MAPERR.c */
#define SEGV_MAPERR                                                          (1)
/* ./src/signal/TRAP_TRACE.c */
#define TRAP_TRACE                                                           (2)
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/signal/MINSIGSTKSZ.c */
#define MINSIGSTKSZ                                                       (1024)
/* ./src/signal/POLL_ERR.c */
#define POLL_ERR                                                             (4)
/* ./src/signal/POLL_HUP.c */
#define POLL_HUP                                                             (6)
/* ./src/signal/POLL_IN.c */
#define POLL_IN                                                              (1)
/* ./src/signal/POLL_MSG.c */
#define POLL_MSG                                                             (3)
/* ./src/signal/POLL_OUT.c */
#define POLL_OUT                                                             (2)
/* ./src/signal/POLL_PRI.c */
#define POLL_PRI                                                             (5)
/* ./src/signal/SA_ONSTACK.c */
#define SA_ONSTACK                                                        (1<<1)
/* ./src/signal/SIGPOLL.c */
#define SIGPOLL                                                             (23)
/* ./src/signal/SIGPROF.c */
#define SIGPROF                                                             (24)
/* ./src/signal/SIGSTKSZ.c */
#define SIGSTKSZ                                                          (1024)
/* ./src/signal/SIGSYS.c */
#define SIGSYS                                                              (25)
/* ./src/signal/SIGTRAP.c */
#define SIGTRAP                                                             (26)
/* ./src/signal/SIGVTALRM.c */
#define SIGVTALRM                                                           (28)
/* ./src/signal/SIGXCPU.c */
#define SIGXCPU                                                             (29)
/* ./src/signal/SIGXFSZ.c */
#define SIGXFSZ                                                             (30)
/* ./src/signal/SIG_HOLD.c */
#define SIG_HOLD /* TODO */
/* ./src/signal/SS_DISABLE.c */
#define SS_DISABLE                                                        (1<<8)
/* ./src/signal/SS_ONSTACK.c */
#define SS_ONSTACK                                                        (1<<7)
/* ./src/signal/TRAP_BRKPT.c */
#define TRAP_BRKPT                                                           (1)
#endif

/* ./src/signal/sig_atomic_t.c */
#ifndef __TYPE_sig_atomic_t_DEFINED__
#define __TYPE_sig_atomic_t_DEFINED__
typedef volatile int                                               sig_atomic_t;
#endif


#if	(defined _POSIX_SOURCE)
/* ./src/signal/sigset_t.c */
#ifndef __TYPE_sigset_t_DEFINED__
#define __TYPE_sigset_t_DEFINED__
typedef unsigned int                                                   sigset_t;
#endif

#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/signal/siginfo_t.c */
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

#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/signal/stack_t.c */
#ifndef __TYPE_stack_t_DEFINED__
#define __TYPE_stack_t_DEFINED__
typedef struct {
	void *ss_sp;	/* Stack base or pointer */
	size_t ss_size;	/* Stack size */
	int ss_flags;	/* Flags */
} stack_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* src/sys/types/pid_t.c */
#ifndef __TYPE_pid_t_DEFINED__
#define __TYPE_pid_t_DEFINED__
typedef long int                                                          pid_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* src/ucontext/ucontext_t.c */
#ifndef __TYPE_ucontext_t_DEFINED__
#define __TYPE_ucontext_t_DEFINED__
typedef struct ucontext_t {
	struct ucontext_t * uc_link;
	sigset_t uc_sigmask;
	stack_t uc_stack;
	mcontext_t uc_mcontext;
} ucontext_t;
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/signal/struct_sigaction.c */
#ifndef __TYPE_struct_sigaction_DEFINED__
#define __TYPE_struct_sigaction_DEFINED__
struct sigaction {
	void (*sa_handler)(int);
	sigset_t sa_mask;
	int sa_flags;
	#if (_POSIX_C_SOURCE >= 199506L) || (defined _XOPEN_SOURCE && defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1)
	void (*sa_sigaction)(int, siginfo_t *, void *);	
	#else
	void (*__padding)(int, void *, void *);
	#endif
};
#endif

#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)

/* ./src/signal/union_sigval.c */
#ifndef __TYPE_union_sigval_DEFINED__
#define __TYPE_union_sigval_DEFINED__
union sigval {
	int sival_int;
	void *sival_ptr;
};
#endif

/* ./src/signal/struct_sigevent.c */
#ifndef __TYPE_struct_sigevent_DEFINED__
#define __TYPE_struct_sigevent_DEFINED__
struct sigevent {
	int sigev_notify;
	int sigev_signo;
	union sigval sigev_value;
	void (*sigev_notify_function)(union sigval);
	pthread_attr_t *siegev_notify_attributes;
};
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
/* ./src/signal/struct_sigstack.c */
#ifndef __TYPE_struct_sigstack_DEFINED__
#define __TYPE_struct_sigstack_DEFINED__
struct sigstack {
	int ss_onstack;
	void *ss_sp;
};
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

/* ./src/signal/raise.c */
int raise(int __sig);
/* ./src/signal/signal.c */
void (*signal(int __sig, void (*__func)(int)))(int);

#if	(defined _POSIX_SOURCE)
/* ./src/signal/kill.c */
int kill(pid_t __pid, int __sig);
/* ./src/signal/sigaction.c */
int sigaction(int __sig, const struct sigaction * restrict __act, struct sigaction * restrict __oact);
/* ./src/signal/sigaddset.c */
int sigaddset(sigset_t * __set, int __signo);
/* ./src/signal/sigdelset.c */
int sigdelset(sigset_t * __set, int __signo);
/* ./src/signal/sigemptyset.c */
int sigemptyset(sigset_t * __set);
/* ./src/signal/sigfillset.c */
int sigfillset(sigset_t * __set);
/* ./src/signal/sigismember.c */
int sigismember(const sigset_t * __set, int __signo);
/* ./src/signal/sigpending.c */
int sigpending(sigset_t * __set);
/* ./src/signal/sigprocmask.c */
int sigprocmask(int __how, const sigset_t * restrict __set, sigset_t * restrict __oset);
/* ./src/signal/sigsuspend.c */
int sigsuspend(const sigset_t * __sigmask);
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/signal/sigqueue.c */
int sigqueue(pid_t __pid, int __signo, const union sigval __value);
/* ./src/signal/sigtimedwait.c */
int sigtimedwait(const sigset_t * restrict __set, siginfo_t * restrict __info, const struct timespec * restrict __timeout);
/* ./src/signal/sigwaitinfo.c */
int sigwaitinfo(const sigset_t * restrict __set, siginfo_t * restrict __info);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/signal/killpg.c */
int killpg(pid_t __pgrp, int __sig);
/* ./src/signal/sigaltstack.c */
int sigaltstack(const stack_t * restrict __ss, stack_t * restrict __oss);
/* ./src/signal/sighold.c */
int sighold(int __sig);
/* ./src/signal/sigignore.c */
int sigignore(int __sig);
/* ./src/signal/siginterrupt.c */
int siginterrupt(int __sig, int __flag);
/* ./src/signal/sigpause.c */
int sigpause(int __sig);
/* ./src/signal/sigrelse.c */
int sigrelse(int __sig);
/* ./src/signal/sigset.c */
void (*sigset(int __sig, void (*__disp)(int)))(int);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 500)
/* ./src/signal/sigmask.c */
int sigmask(int __signum);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 600)
/* ./src/signal/sigstack.c */
int sigstack(struct sigstack *__ss, struct sigstack *__oss);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
/* ./src/signal/bsd_signal.c */
void (*bsd_signal(int __sig, void (*__func)(int)))(int);
#endif


#endif

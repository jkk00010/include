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

#define SIGABRT                                                              (6)
#define SIGFPE                                                               (4)
#define SIGILL                                                               (5)
#define SIGINT                                                               (2)
#define SIGSEGV                                                              (7)
#define SIGTERM                                                             (15)
#define SIG_DFL                                               ((void(*)(int))-1)
#define SIG_ERR                                               ((void(*)(int))-2)
#define SIG_IGN                                               ((void(*)(int))-3)

#if (defined _POSIX_SOURCE)
#define SA_NOCLDSTOP                                                      (1<<0)
#define SIGALRM                                                             (14)
#define SIGCHLD                                                             (13)
#define SIGCONT                                                             (14)
#define SIGHUP                                                               (0)
#define SIGKILL                                                              (9)
#define SIGPIPE                                                             (16)
#define SIGQUIT                                                              (3)
#define SIGSTOP                                                             (31)
#define SIGTSTP                                                             (18)
#define SIGTTIN                                                             (19)
#define SIGTTOU                                                             (20)
#define SIGUSR1                                                             (21)
#define SIGUSR2                                                             (22)
#define SIG_BLOCK                                                            (1)
#define SIG_SETMASK                                                          (3)
#define SIG_UNBLOCK                                                          (2)
#endif

#if (defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
#define SIGEV_NONE                                                           (0)
#define SIGEV_SIGNAL                                                         (1)
#define SIGRTMAX                                  /* maximum real time signal */
#define SIGRTMIN                                  /* minimum real-time signal */
#define SI_ASYNCIO                                                          (14)
#define SI_MESGQ                                                            (15)
#define SI_QUEUE                                                            (12)
#define SI_TIMER                                                            (13)
#define SI_USER                                                             (11)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define SA_SIGINFO                                                        (1<<4)
#define SIGBUS                                                              (12)
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define SIGURG                                                              (27)
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define BUS_ADRALN                                                           (1)
#define BUS_ADRERR                                                           (2)
#define BUS_OBJERR                                                           (3)
#define CLD_CONTINUED                                                        (6)
#define CLD_DUMPED                                                           (3)
#define CLD_EXITED                                                           (1)
#define CLD_KILLED                                                           (2)
#define CLD_STOPPED                                                          (5)
#define CLD_TRAPPED                                                          (4)
#define FPE_FLTDIV                                                           (3)
#define FPE_FLTINV                                                           (7)
#define FPE_FLTOVF                                                           (4)
#define FPE_FLTRES                                                           (6)
#define FPE_FLTSUB                                                           (8)
#define FPE_FLTUND                                                           (5)
#define FPE_INTDIV                                                           (1)
#define FPE_INTOVF                                                           (2)
#define ILL_BADSTK                                                           (8)
#define ILL_COPROC                                                           (7)
#define ILL_ILLADR                                                           (3)
#define ILL_ILLOPC                                                           (1)
#define ILL_ILLOPN                                                           (2)
#define ILL_ILLTRP                                                           (4)
#define ILL_PRVOPC                                                           (5)
#define ILL_PRVREG                                                           (6)
#define SA_NOCLDWAIT                                                      (1<<5)
#define SA_NODEFER                                                        (1<<6)
#define SA_RESETHAND                                                      (1<<2)
#define SA_RESTART                                                        (1<<3)
#define SEGV_ACCERR                                                          (2)
#define SEGV_MAPERR                                                          (1)
#define TRAP_TRACE                                                           (2)
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define MINSIGSTKSZ                                                       (1024)
#define POLL_ERR                                                             (4)
#define POLL_HUP                                                             (6)
#define POLL_IN                                                              (1)
#define POLL_MSG                                                             (3)
#define POLL_OUT                                                             (2)
#define POLL_PRI                                                             (5)
#define SA_ONSTACK                                                        (1<<1)
#define SIGPOLL                                                             (23)
#define SIGPROF                                                             (24)
#define SIGSTKSZ                                                          (1024)
#define SIGSYS                                                              (25)
#define SIGTRAP                                                             (26)
#define SIGVTALRM                                                           (28)
#define SIGXCPU                                                             (29)
#define SIGXFSZ                                                             (30)
#define SIG_HOLD /* TODO */
#define SS_DISABLE                                                        (1<<8)
#define SS_ONSTACK                                                        (1<<7)
#define TRAP_BRKPT                                                           (1)
#endif

typedef volatile int                                               sig_atomic_t;


#if (defined _POSIX_SOURCE)
typedef struct { unsigned char __bits[32]; }                           sigset_t;
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
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

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
typedef struct {
	void *ss_sp;	/* Stack base or pointer */
	size_t ss_size;	/* Stack size */
	int ss_flags;	/* Flags */
} stack_t;
#endif

#if	(defined _XOPEN_SOURCE)
typedef long int                                                          pid_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
typedef struct ucontext_t {
	struct ucontext_t * uc_link;
	sigset_t uc_sigmask;
	stack_t uc_stack;
	mcontext_t uc_mcontext;
} ucontext_t;
#endif

#if	(defined _POSIX_SOURCE)
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

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)

union sigval {
	int sival_int;
	void *sival_ptr;
};

struct sigevent {
	int sigev_notify;
	int sigev_signo;
	union sigval sigev_value;
	void (*sigev_notify_function)(union sigval);
	pthread_attr_t *siegev_notify_attributes;
};

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
struct sigstack {
	int ss_onstack;
	void *ss_sp;
};
#endif

int raise(int);
void (*signal(int, void (*)(int)))(int);

#if	(defined _POSIX_SOURCE)
int kill(pid_t, int);
int sigaction(int, const struct sigaction * restrict, struct sigaction * restrict);
int sigaddset(sigset_t *, int);
int sigdelset(sigset_t *, int);
int sigemptyset(sigset_t *);
int sigfillset(sigset_t *);
int sigismember(const sigset_t *, int);
int sigpending(sigset_t *);
int sigprocmask(int, const sigset_t * restrict, sigset_t * restrict);
int sigsuspend(const sigset_t *);
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
int sigqueue(pid_t, int, const union sigval);
int sigtimedwait(const sigset_t * restrict, siginfo_t * restrict, const struct timespec * restrict);
int sigwaitinfo(const sigset_t * restrict, siginfo_t * restrict);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
int killpg(pid_t, int);
int sigaltstack(const stack_t * restrict, stack_t * restrict);
int sighold(int);
int sigignore(int);
int siginterrupt(int, int);
int sigpause(int);
int sigrelse(int);
void (*sigset(int, void (*int)))(int);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 500)
int sigmask(int);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 600)
int sigstack(struct sigstack *struct sigstack *
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
void (*bsd_signal(int, void (*int)))(int);
#endif


#endif

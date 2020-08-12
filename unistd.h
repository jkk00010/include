#ifndef __UNISTD_H__
#define __UNISTD_H__

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

#if	(defined _POSIX_SOURCE)
/* ./src/unistd/F_OK.c */
#define F_OK                                                                   8
/* ./src/unistd/R_OK.c */
#define R_OK                                                                   4
/* ./src/unistd/STDERR_FILENO.c */
#define STDERR_FILENO                                                          2
/* ./src/unistd/STDIN_FILENO.c */
#define STDIN_FILENO                                                           0
/* ./src/unistd/STDOUT_FILENO.c */
#define STDOUT_FILENO                                                          1
/* ./src/unistd/W_OK.c */
#define W_OK                                                                   2
/* ./src/unistd/X_OK.c */
#define X_OK                                                                   1
/* ./src/unistd/_PC_CHOWN_RESTRICTED.c */
#define _PC_CHOWN_RESTRICTED                                                   3
/* ./src/unistd/_PC_LINK_MAX.c */
#define _PC_LINK_MAX                                                           5
/* ./src/unistd/_PC_MAX_CANON.c */
#define _PC_MAX_CANON                                                          6
/* ./src/unistd/_PC_MAX_INPUT.c */
#define _PC_MAX_INPUT                                                          7
/* ./src/unistd/_PC_NAME_MAX.c */
#define _PC_NAME_MAX                                                           8
/* ./src/unistd/_PC_NO_TRUNC.c */
#define _PC_NO_TRUNC                                                           9
/* ./src/unistd/_PC_PATH_MAX.c */
#define _PC_PATH_MAX                                                          10
/* ./src/unistd/_PC_PIPE_BUF.c */
#define _PC_PIPE_BUF                                                          11
/* ./src/unistd/_PC_VDISABLE.c */
#define _PC_VDISABLE                                                          20
/* ./src/unistd/_POSIX_CHOWN_RESTRICTED.c */
#define _POSIX_CHOWN_RESTRICTED                                              (1)
/* ./src/unistd/_POSIX_JOB_CONTROL.c */
#define _POSIX_JOB_CONTROL                                     (_POSIX_C_SOURCE)
/* ./src/unistd/_POSIX_NO_TRUNC.c */
#define _POSIX_NO_TRUNC                                                      (2)
/* ./src/unistd/_POSIX_SAVED_IDS.c */
#define _POSIX_SAVED_IDS                                       (_POSIX_C_SOURCE)
/* ./src/unistd/_POSIX_VDISABLE.c */
#define _POSIX_VDISABLE                                                      (3)
/* ./src/unistd/_POSIX_VERSION.c */
#if _POSIX_C_SOURCE >= 200809L
#define _POSIX_VERISON                                                 (200809L)
#elif _POSIX_C_SOURCE >= 200112L
#define _POSIX_VERSION                                                 (200112L)
#elif _POSIX_C_SOURCE >= 199506L
#define _POSIX_VERSION                                                 (199506L)
#elif _POSIX_C_SOURCE >= 199309L
#define _POSIX_VERSION                                                 (199309L)
#elif defined _POSIX_C_SOURCE
#define _POSIX_VERSION                                                 (199009L)
#else
#define _POSIX_VERSION                                                 (198808L)
#endif
/* ./src/unistd/_SC_ARG_MAX.c */
#define _SC_ARG_MAX                                                           19
/* ./src/unistd/_SC_CHILD_MAX.c */
#define _SC_CHILD_MAX                                                         27
/* ./src/unistd/_SC_CLK_TCK.c */
#define _SC_CLK_TCK                                                           28
/* ./src/unistd/_SC_JOB_CONTROL.c */
#define _SC_JOB_CONTROL                                                       40
/* ./src/unistd/_SC_NGROUPS_MAX.c */
#define _SC_NGROUPS_MAX                                                       51
/* ./src/unistd/_SC_OPEN_MAX.c */
#define _SC_OPEN_MAX                                                          52
/* ./src/unistd/_SC_SAVED_IDS.c */
#define _SC_SAVED_IDS                                                         63
/* ./src/unistd/_SC_STREAM_MAX.c */
#define _SC_STREAM_MAX                                                        74
/* ./src/unistd/_SC_TZNAME_MAX.c */
#define _SC_TZNAME_MAX                                                       106
/* ./src/unistd/_SC_VERSION.c */
#define _SC_VERSION                                                          115
/* src/stddef/NULL.c */
#define NULL                                                          ((void*)0)
/* src/stdio/SEEK_CUR.c */
#define SEEK_CUR                                                             (1)
/* src/stdio/SEEK_END.c */
#define SEEK_END                                                             (2)
/* src/stdio/SEEK_SET.c */
#define SEEK_SET                                                             (3)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/unistd/_PC_ASYNC_IO.c */
#define _PC_ASYNC_IO                                                           2
/* ./src/unistd/_PC_PRIO_IO.c */
#define _PC_PRIO_IO                                                           12
/* ./src/unistd/_PC_SYNC_IO.c */
#define _PC_SYNC_IO                                                           18
/* ./src/unistd/_POSIX_ASYNCHRONOUS_IO.c */
#define _POSIX_ASYNCHRONOUS_IO                                           200809L
/* ./src/unistd/_POSIX_ASYNC_IO.c */
#define _POSIX_ASYNC_IO                                                  200809L
/* ./src/unistd/_POSIX_FSYNC.c */
#define _POSIX_FSYNC                                                        (-1)
/* ./src/unistd/_POSIX_MAPPED_FILES.c */
#define _POSIX_MAPPED_FILES                                              200809L
/* ./src/unistd/_POSIX_MEMLOCK.c */
#define _POSIX_MEMLOCK                                                      (-1)
/* ./src/unistd/_POSIX_MEMLOCK_RANGE.c */
#define _POSIX_MEMLOCK_RANGE                                                (-1)
/* ./src/unistd/_POSIX_MEMORY_PROTECTION.c */
#define _POSIX_MEMORY_PROTECTION                                         200809L
/* ./src/unistd/_POSIX_MESSAGE_PASSING.c */
#define _POSIX_MESSAGE_PASSING                                              (-1)
/* ./src/unistd/_POSIX_PRIORITIZED_IO.c */
#define _POSIX_PRIORITIZED_IO                                               (-1)
/* ./src/unistd/_POSIX_PRIORITY_SCHEDULING.c */
#define _POSIX_PRIORITY_SCHEDULING                                          (-1)
/* ./src/unistd/_POSIX_PRIO_IO.c */
#define _POSIX_PRIO_IO                                                   200809L
/* ./src/unistd/_POSIX_REALTIME_SIGNALS.c */
#define _POSIX_REALTIME_SIGNALS                                          200809L
/* ./src/unistd/_POSIX_SEMAPHORES.c */
#define _POSIX_SEMAPHORES                                                200809L
/* ./src/unistd/_POSIX_SYNCHRONIZED_IO.c */
#define _POSIX_SYNCHRONIZED_IO                                              (-1)
/* ./src/unistd/_POSIX_SYNC_IO.c */
#define _POSIX_SYNC_IO                                                   200809L
/* ./src/unistd/_POSIX_TIMERS.c */
#define _POSIX_TIMERS                                                    200809L
/* ./src/unistd/_SC_AIO_LISTIO_MAX.c */
#define _SC_AIO_LISTIO_MAX                                                    16
/* ./src/unistd/_SC_AIO_MAX.c */
#define _SC_AIO_MAX                                                           17
/* ./src/unistd/_SC_AIO_PRIO_DELTA_MAX.c */
#define _SC_AIO_PRIO_DELTA_MAX                                                18
/* ./src/unistd/_SC_ASYNCHRONOUS_IO.c */
#define _SC_ASYNCHRONOUS_IO                                                   20
/* ./src/unistd/_SC_DELAYTIMER_MAX.c */
#define _SC_DELAYTIMER_MAX                                                    32
/* ./src/unistd/_SC_FSYNC.c */
#define _SC_FSYNC                                                             34
/* ./src/unistd/_SC_MAPPED_FILES.c */
#define _SC_MAPPED_FILES                                                      43
/* ./src/unistd/_SC_MEMLOCK.c */
#define _SC_MEMLOCK                                                           44
/* ./src/unistd/_SC_MEMLOCK_RANGE.c */
#define _SC_MEMLOCK_RANGE                                                     45
/* ./src/unistd/_SC_MEMORY_PROTECTION.c */
#define _SC_MEMORY_PROTECTION                                                 46
/* ./src/unistd/_SC_MESSAGE_PASSING.c */
#define _SC_MESSAGE_PASSING                                                   47
/* ./src/unistd/_SC_MQ_OPEN_MAX.c */
#define _SC_MQ_OPEN_MAX                                                       49
/* ./src/unistd/_SC_MQ_PRIO_MAX.c */
#define _SC_MQ_PRIO_MAX                                                       50
/* ./src/unistd/_SC_PRIORITIZED_IO.c */
#define _SC_PRIORITIZED_IO /* TODO */
/* ./src/unistd/_SC_PRIORITY_SCHEDULING.c */
#define _SC_PRIORITY_SCHEDULING                                               56
/* ./src/unistd/_SC_REALTIME_SIGNALS.c */
#define _SC_REALTIME_SIGNALS                                                  60
/* ./src/unistd/_SC_RTSIG_MAX.c */
#define _SC_RTSIG_MAX                                                         62
/* ./src/unistd/_SC_SEMAPHORES.c */
#define _SC_SEMAPHORES                                                        66
/* ./src/unistd/_SC_SEM_NSEMS_MAX.c */
#define _SC_SEM_NSEMS_MAX                                                     64
/* ./src/unistd/_SC_SEM_VALUE_MAX.c */
#define _SC_SEM_VALUE_MAX                                                     65
/* ./src/unistd/_SC_SHARED_MEMORY_OBJECTS.c */
#define _SC_SHARED_MEMORY_OBJECTS                                             67
/* ./src/unistd/_SC_SIGQUEUE_MAX.c */
#define _SC_SIGQUEUE_MAX                                                      69
/* ./src/unistd/_SC_SYNCHRONIZED_IO.c */
#define _SC_SYNCHRONIZED_IO                                                   76
/* ./src/unistd/_SC_TIMERS.c */
#define _SC_TIMERS                                                            95
/* ./src/unistd/_SC_TIMER_MAX.c */
#define _SC_TIMER_MAX                                                         94
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/unistd/_SC_PAGESIZE.c */
#define _SC_PAGESIZE /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/unistd/_CS_PATH.c */
#define _CS_PATH                                                               0
/* ./src/unistd/_POSIX2_CHAR_TERM.c */
#define _POSIX2_CHAR_TERM                                      (_POSIX2_VERSION)
/* ./src/unistd/_POSIX2_C_BIND.c */
#define _POSIX2_C_BIND                                         (_POSIX2_VERSION)
/* ./src/unistd/_POSIX2_C_DEV.c */
#define _POSIX2_C_DEV                                          (_POSIX2_VERSION)
/* ./src/unistd/_POSIX2_C_VERSION.c */
#define _POSIX2_C_VERSION                                      (_POSIX2_VERSION)
/* ./src/unistd/_POSIX2_FORT_DEV.c */
#define _POSIX2_FORT_DEV                                       (_POSIX2_VERSION)
/* ./src/unistd/_POSIX2_FORT_RUN.c */
#define _POSIX2_FORT_RUN                                       (_POSIX2_VERSION)
/* ./src/unistd/_POSIX2_SW_DEV.c */
#define _POSIX2_SW_DEV                                         (_POSIX2_VERSION)
/* ./src/unistd/_POSIX2_UPE.c */
#define _POSIX2_UPE                                            (_POSIX2_VERSION)
/* ./src/unistd/_POSIX2_VERSION.c */
#if (defined _POSIX_C_SOURCE)
#if _POSIX_C_SOURCE >= 200809L
#define _POSIX2_VERSION                                                (200809L)
#elif _POSIX_C_SOURCE >= 200112L
#define _POSIX2_VERSION                                                (200112L)
#elif _POSIX_C_SOURCE >= 199506L
#define _POSIX2_VERSION                                                (199506L)
#elif _POSIX_C_SOURCE >= 2
#define _POSIX2_VERSION                                                (199209L)
#else
#undef _POSIX2_VERSION
#endif
#endif
/* ./src/unistd/_SC_2_C_BIND.c */
#define _SC_2_C_BIND                                                           1
/* ./src/unistd/_SC_2_C_DEV.c */
#define _SC_2_C_DEV                                                            1
/* ./src/unistd/_SC_2_C_VERSION.c */
#define _SC_2_C_VERSION                                                        1
/* ./src/unistd/_SC_2_FORT_DEV.c */
#define _SC_2_FORT_DEV                                                         3
/* ./src/unistd/_SC_2_FORT_RUN.c */
#define _SC_2_FORT_RUN                                                         4
/* ./src/unistd/_SC_2_LOCALEDEF.c */
#define _SC_2_LOCALEDEF                                                        5
/* ./src/unistd/_SC_2_SW_DEV.c */
#define _SC_2_SW_DEV                                                          12
/* ./src/unistd/_SC_2_UPE.c */
#define _SC_2_UPE                                                             13
/* ./src/unistd/_SC_2_VERSION.c */
#define _SC_2_VERSION                                                         14
/* ./src/unistd/_SC_BC_BASE_MAX.c */
#define _SC_BC_BASE_MAX                                                       23
/* ./src/unistd/_SC_BC_DIM_MAX.c */
#define _SC_BC_DIM_MAX                                                        24
/* ./src/unistd/_SC_BC_SCALE_MAX.c */
#define _SC_BC_SCALE_MAX                                                      25
/* ./src/unistd/_SC_BC_STRING_MAX.c */
#define _SC_BC_STRING_MAX                                                     26
/* ./src/unistd/_SC_COLL_WEIGHTS_MAX.c */
#define _SC_COLL_WEIGHTS_MAX                                                  30
/* ./src/unistd/_SC_EXPR_NEST_MAX.c */
#define _SC_EXPR_NEST_MAX                                                     33
/* ./src/unistd/_SC_LINE_MAX.c */
#define _SC_LINE_MAX                                                          41
/* ./src/unistd/_SC_RE_DUP_MAX.c */
#define _SC_RE_DUP_MAX                                                        58
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/unistd/_SC_XOPEN_CRYPT.c */
#define _SC_XOPEN_CRYPT                                                      116
/* ./src/unistd/_SC_XOPEN_ENH_I18N.c */
#define _SC_XOPEN_ENH_I18N                                                   117
/* ./src/unistd/_SC_XOPEN_SHM.c */
#define _SC_XOPEN_SHM                                                        120
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/unistd/_SC_ATEXIT_MAX.c */
#define _SC_ATEXIT_MAX                                                        21
/* ./src/unistd/_SC_IOV_MAX.c */
#define _SC_IOV_MAX                                                           38
/* ./src/unistd/_SC_PAGE_SIZE.c */
#define _SC_PAGE_SIZE                                                         53
/* ./src/unistd/_SC_XOPEN_UNIX.c */
#define _SC_XOPEN_UNIX                                                       122
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && 500 <= _XOPEN_SOURCE)
/* ./src/unistd/_SC_XOPEN_VERSION.c */
#define _SC_XOPEN_VERSION                                                    124
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/unistd/_POSIX2_LOCALEDEF.c */
#define _POSIX2_LOCALEDEF                                      (_POSIX2_VERSION)
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/unistd/_XOPEN_CRYPT.c */
#define _XOPEN_CRYPT                                               _XOPEN_SOURCE
/* ./src/unistd/_XOPEN_ENH_I18N.c */
#define _XOPEN_ENH_I18N                                            _XOPEN_SOURCE
/* ./src/unistd/_XOPEN_VERSION.c */
#if (defined _XOPEN_SOURCE)
#if _XOPEN_SOURCE >= 700
#define _XOPEN_VERSION                                                     (700)
#elif _XOPEN_SOURCE >= 600
#define _XOPEN_VERSION                                                     (600)
#elif _XOPEN_SOURCE >= 500
#define _XOPEN_VERSION                                                     (500)
#else
#define _XOPEN_VERSION                                                       (4)
#endif
#endif
#endif

#if	(defined _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
/* ./src/unistd/_SC_PASS_MAX.c */
#define _SC_PASS_MAX /* TODO */
/* ./src/unistd/_XOPEN_XCU_VERSION.c */
#define _XOPEN_XCU_VERSION /* TODO */
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/unistd/F_LOCK.c */
#define F_LOCK                                                                 0
/* ./src/unistd/F_TEST.c */
#define F_TEST                                                                 1
/* ./src/unistd/F_TLOCK.c */
#define F_TLOCK                                                                2
/* ./src/unistd/F_ULOCK.c */
#define F_ULOCK                                                                3
/* ./src/unistd/_XOPEN_SHM.c */
#define _XOPEN_SHM                                                 _XOPEN_SOURCE
/* ./src/unistd/_XOPEN_UNIX.c */
#define _XOPEN_UNIX /* TODO */
#endif

#if	(defined _XOPEN_SOURCE && 500 <= _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
/* ./src/unistd/_SC_XOPEN_XCU_VERSION.c */
#define _SC_XOPEN_XCU_VERSION /* TODO */
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

/* src/sys/types/ssize_t.c */
#ifndef __TYPE_ssize_t_DEFINED__
#define __TYPE_ssize_t_DEFINED__
typedef long int                                                        ssize_t;
#endif


#if	(defined _XOPEN_SOURCE)
/* src/sys/types/gid_t.c */
#ifndef __TYPE_gid_t_DEFINED__
#define __TYPE_gid_t_DEFINED__
typedef                                                        unsigned long int
	gid_t;
#endif

/* src/sys/types/off_t.c */
#ifndef __TYPE_off_t_DEFINED__
#define __TYPE_off_t_DEFINED__
typedef                                                                 long int
	off_t;
#endif

/* src/sys/types/pid_t.c */
#ifndef __TYPE_pid_t_DEFINED__
#define __TYPE_pid_t_DEFINED__
typedef long int                                                          pid_t;
#endif

/* src/sys/types/uid_t.c */
#ifndef __TYPE_uid_t_DEFINED__
#define __TYPE_uid_t_DEFINED__
typedef                                                        unsigned long int
	uid_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* src/sys/types/useconds_t.c */
#ifndef __TYPE_useconds_t_DEFINED__
#define __TYPE_useconds_t_DEFINED__
typedef unsigned int                                                 useconds_t;
#endif

#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/unistd/optarg.c */
extern char * optarg;
/* ./src/unistd/opterr.c */
extern int opterr;
/* ./src/unistd/optind.c */
extern int optind;
/* ./src/unistd/optopt.c */
extern int optopt;
#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/unistd/_exit.c */
void _exit(int __status);
/* ./src/unistd/access.c */
int access(const char *__path, int __amode);
/* ./src/unistd/alarm.c */
unsigned alarm(unsigned __seconds);
/* ./src/unistd/chdir.c */
int chdir(const char *__path);
/* ./src/unistd/chown.c */
int chown(const char *__path, uid_t __owner, gid_t __group);
/* ./src/unistd/close.c */
int close(int __fildes);
/* ./src/unistd/ctermid.c */
char * ctermid(char * __s);
/* ./src/unistd/dup.c */
int dup(int __fildes);
/* ./src/unistd/dup2.c */
int dup2(int __fildes, int __fildes2);
/* ./src/unistd/execl.c */
int execl(const char *__path, const char *__arg0, ...  /*, (char *)0 */);
/* ./src/unistd/execle.c */
int execle(const char *__path, const char *__arg0, ... /*, (char *)0, char *const envp[] */);
/* ./src/unistd/execlp.c */
int execlp(const char *__file, const char *__arg0, ...  /*, (char *0) */);
/* ./src/unistd/execv.c */
int execv(const char *__path, char *const argv[]);
/* ./src/unistd/execve.c */
int execve(const char *__path, char *const argv[], char *const envp[]);
/* ./src/unistd/execvp.c */
int execvp(const char *__file, char *const argv[]);
/* ./src/unistd/fork.c */
pid_t fork(void);
/* ./src/unistd/fpathconf.c */
long fpathconf(int __fildes, int __name);
/* ./src/unistd/getcwd.c */
char * getcwd(char *__buf, size_t __size);
/* ./src/unistd/getegid.c */
gid_t getegid(void);
/* ./src/unistd/geteuid.c */
uid_t geteuid(void);
/* ./src/unistd/getgid.c */
gid_t getgid(void);
/* ./src/unistd/getgroups.c */
int getgroups(int __gidsetsize, gid_t grouplist[]);
/* ./src/unistd/getlogin.c */
char * getlogin(void);
/* ./src/unistd/getpgrp.c */
pid_t getpgrp(void);
/* ./src/unistd/getpid.c */
pid_t getpid(void);
/* ./src/unistd/getppid.c */
pid_t getppid(void);
/* ./src/unistd/getuid.c */
uid_t getuid(void);
/* ./src/unistd/isatty.c */
int isatty(int __fildes);
/* ./src/unistd/link.c */
int link(const char *__path1, const char *__path2);
/* ./src/unistd/lseek.c */
off_t lseek(int __fildes, off_t __offset, int __whence);
/* ./src/unistd/pathconf.c */
long pathconf(const char *__path, int __name);
/* ./src/unistd/pause.c */
int pause(void);
/* ./src/unistd/pipe.c */
int pipe(int fildes[2]);
/* ./src/unistd/read.c */
ssize_t read(int __fildes, void *__buf, size_t __nbyte);
/* ./src/unistd/rmdir.c */
int rmdir(const char *__path);
/* ./src/unistd/setgid.c */
int setgid(gid_t __gid);
/* ./src/unistd/setpgid.c */
int setpgid(pid_t __pid, pid_t __pgid);
/* ./src/unistd/setsid.c */
pid_t setsid(void);
/* ./src/unistd/setuid.c */
int setuid(uid_t __uid);
/* ./src/unistd/sleep.c */
unsigned sleep(unsigned __seconds);
/* ./src/unistd/sysconf.c */
long sysconf(int __name);
/* ./src/unistd/tcgetpgrp.c */
pid_t tcgetpgrp(int __fildes);
/* ./src/unistd/tcsetpgrp.c */
int tcsetpgrp(int __fildes, pid_t __pgid_id);
/* ./src/unistd/ttyname.c */
char *ttyname(int __fildes);
/* ./src/unistd/unlink.c */
int unlink(const char *__path);
/* ./src/unistd/write.c */
ssize_t write(int __fildes, const void *__buf, size_t __nbyte);
#endif

#if	(defined _POSIX_SOURCE && (!defined _POSIX_C_SOURCE || _POSIX_C_SOURCE < 199506))
/* ./src/unistd/cuserid.c */
char *cuserid(char *__s);
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/unistd/fdatasync.c */
int fdatasync(int __fildes);
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/unistd/fsync.c */
int fsync(int __fildes);
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/unistd/ftruncate.c */
int ftruncate(int __fildes, off_t __length);
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/unistd/confstr.c */
size_t confstr(int __name, char *__buf, size_t __len);
/* ./src/unistd/getopt.c */
int getopt(int __argc, char * const argv[], const char *__optstring);
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/unistd/fchown.c */
int fchown(int __fildes, uid_t __owner, gid_t __group);
/* ./src/unistd/readlink.c */
ssize_t readlink(const char * restrict __path, char * restrict __buf, size_t __bufsize);
/* ./src/unistd/symlink.c */
int symlink(const char*__path1, const char *__path2);
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/unistd/fchdir.c */
int fchdir(int __fildes);
/* ./src/unistd/getpgid.c */
pid_t getpgid(pid_t __pid);
/* ./src/unistd/getsid.c */
pid_t getsid(pid_t __pid);
/* ./src/unistd/lchown.c */
int lchown(const char *__path, uid_t __owner, gid_t __group);
/* ./src/unistd/truncate.c */
int truncate(const char *__path, off_t __length);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/unistd/crypt.c */
char * crypt( const char *__key, const char *__salt);
/* ./src/unistd/encrypt.c */
void encrypt(char block[64], int __edflag);
/* ./src/unistd/nice.c */
int nice(int __incr);
/* ./src/unistd/swab.c */
void swab(const void * restrict __src, void * restrict __dest, ssize_t __nbytes);
#endif

#if	(defined _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
/* ./src/unistd/getpass.c */
char *getpass(const char *__prompt);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/unistd/gethostid.c */
long gethostid(void);
/* ./src/unistd/lockf.c */
int lockf(int __fildes, int __function, off_t __size);
/* ./src/unistd/setpgrp.c */
pid_t setpgrp(void);
/* ./src/unistd/setregid.c */
int setregid(gid_t __rgid, gid_t __egid);
/* ./src/unistd/setreuid.c */
int setreuid(uid_t __ruid, uid_t __euid);
/* ./src/unistd/sync.c */
void sync(void);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 600)
/* ./src/unistd/brk.c */
int brk(void *__addr);
/* ./src/unistd/chroot.c */
int chroot(const char *__path);
/* ./src/unistd/getdtablesize.c */
int getdtablesize(void);
/* ./src/unistd/getpagesize.c */
int getpagesize(void);
/* ./src/unistd/sbrk.c */
void *sbrk(int __incr);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
/* ./src/unistd/getwd.c */
char *getwd(char *__path_name);
/* ./src/unistd/ualarm.c */
useconds_t ualarm(useconds_t __useconds, useconds_t __interval);
/* ./src/unistd/usleep.c */
int usleep(useconds_t __useconds);
/* ./src/unistd/vfork.c */
pid_t vfork(void);
#endif


#endif

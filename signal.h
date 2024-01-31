#ifndef __STDC_SIGNAL_H__
#if defined __STDC_VERSION__
#define __STDC_SIGNAL_H__ __STDC_VERSION__
#else
#define __STDC_SIGNAL_H__ 1
#endif

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

#include <__ung.h>

#define SIGABRT 0x6
#define SIGALRM 0xe
#define SIGBUS 0x7
#define SIGCHLD 0x11
#define SIGCONT 0x12
#define SIGFPE 0x8
#define SIGHUP 0x1
#define SIGILL 0x4
#define SIGINT 0x2
#define SIGKILL 0x9
#define SIGPIPE 0xd
#define SIGQUIT 0x3
#define SIGSEGV 0xb
#define SIGSTOP 0x13
#define SIGTERM 0xf
#define SIGTSTP 0x14
#define SIGTTIN 0x15
#define SIGTTOU 0x16
#define SIGUSR1 0xa
#define SIGUSR2 0xc
#define SIGPOLL 0x1d
#define SIGPROF 0x1b
#define SIGSYS 0x1f
#define SIGTRAP 0x5
#define SIGURG 0x17
#define SIGVTALRM 0x1a
#define SIGXCPU 0x18
#define SIGXFSZ 0x19
#define SIG_BLOCK 0x0
#define SIG_UNBLOCK 0x1
#define SIG_SETMASK 0x2
#define SA_NOCLDSTOP 0x1
#define SA_ONSTACK 0x8000000
#define SA_RESETHAND 0x80000000
#define SA_RESTART 0x10000000
#define SA_SIGINFO 0x4
#define SA_NOCLDWAIT 0x2
#define SA_NODEFER 0x40000000
#define SA_ONSTACK 0x8000000
#define SS_DISABLE 0x2
#define MINSIGSTKSZ 0x800
#define SIGSTKSZ 0x2000
#define SIG_IGN ((void(*)(int))(1))
#define SIG_DFL ((void(*)(int))(0))
#define SIG_ERR ((void(*)(int))(-1))

typedef volatile int                                               sig_atomic_t;

int raise(int);
void (*signal(int, void (*)(int)))(int);

#ifndef __UNG_INTERNAL__
int __raise(const char *, const char *, unsigned long long int, int);
#define raise(__i) __raise(__FILE__, __func__, __LINE__, __i)
void (*__signal(const char *, const char *, unsigned long long int, int, void (*)(int)))(int);
#define signal(__i, __fn) __signal(__FILE__, __func__, __LINE__, __i, __fn)
#endif

#endif

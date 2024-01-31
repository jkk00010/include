#ifndef __STDC_SETJMP_H__
#if defined __STDC_VERSION__
#define __STDC_SETJMP_H__ __STDC_VERSION__
#else
#define __STDC_SETJMP_H__ 1
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

/* TODO: XOPEN/POSIX/etc */

typedef unsigned long int                                           jmp_buf[32];

_Noreturn void longjmp(jmp_buf, int);
int setjmp(jmp_buf);

#ifndef __UNG_INTERNAL__
_Noreturn void __longjmp(const char *, const char *, unsigned long long, jmp_buf, int);
#define longjmp(__b, __i) __longjmp(__FILE__, __func__, __LINE__, __b, __i)
int __setjmp(const char *, const char *, unsigned long long, jmp_buf);
#define setjmp(__b) __setjmp(__FILE__, __func__, __LINE__, __b)
#endif

#if (defined _POSIX_SOURCE)
typedef jmp_buf                                                      sigjmp_buf;
void siglongjmp(sigjmp_buf, int);
int sigsetjmp(sigjmp_buf, int);
#endif

#if (defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
void _longjmp(jmp_buf, int);
int _setjmp(jmp_buf);
#endif

#endif

#ifndef __STDC_VERSION_ISO646_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_ISO646_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_ISO646_H__ 1
#endif

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2022 Jakob Kaivo <jkk@ung.org>

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

#if (__STDC_VERSION_ISO646_H__ < 199409L)
# error <iso646.h> requires C95 or higher
#endif

#define and                                                                   &&
#define and_eq                                                                &=
#define bitand                                                                 &
#define bitor                                                                  |
#define compl                                                                  ~
#define not                                                                    !
#define not_eq                                                                !=
#define or                                                                    ||
#define or_eq                                                                 |=
#define xor                                                                    ^
#define xor_eq                                                                ^=

#endif

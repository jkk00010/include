#ifndef __STDC_VERSION_STDARG_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_STDARG_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_STDARG_H__ 1
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

#define va_arg(__ap, __type)                      __builtin_va_arg(__ap, __type)
#define va_end(__ap)                                      __builtin_va_end(__ap)
#define va_start(__ap, __parmN)                __builtin_va_start(__ap, __parmN)

#if (defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
#define va_copy(__dest, __src)                  __builtin_va_copy(__dest, __src)
#endif

typedef __builtin_va_list                                               va_list;

#endif

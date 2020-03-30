#ifndef __STDARG_H__
#define __STDARG_H__

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

/* ./src/stdarg/va_arg.c */
#define va_arg(__ap, __type)                      __builtin_va_arg(__ap, __type)
/* ./src/stdarg/va_end.c */
#define va_end(__ap)                                      __builtin_va_end(__ap)
/* ./src/stdarg/va_start.c */
#define va_start(__ap, __parmN)                __builtin_va_start(__ap, __parmN)

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/stdarg/va_copy.c */
#define va_copy(__dest, __src)                  __builtin_va_copy(__dest, __src)
#endif

/* ./src/stdarg/va_list.c */
#ifndef __TYPE_va_list_DEFINED__
#define __TYPE_va_list_DEFINED__
typedef __builtin_va_list                                               va_list;
#endif



#endif

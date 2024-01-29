#ifndef __STDC_VERSION_CTYPE_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_CTYPE_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_CTYPE_H__ 1
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

int isalnum(int);
int isalpha(int);
int iscntrl(int);
int isdigit(int);
int isgraph(int);
int islower(int);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int isxdigit(int);
int tolower(int);
int toupper(int);

#define isalnum(__c) __checked_i(__FILE__, __func__, __LINE__, isalnum, __c)
#define isalpha(__c) __checked_i(__FILE__, __func__, __LINE__, isalpha, __c)
#define iscntrl(__c) __checked_i(__FILE__, __func__, __LINE__, iscntrl, __c)
#define isdigit(__c) __checked_i(__FILE__, __func__, __LINE__, isdigit, __c)
#define isgraph(__c) __checked_i(__FILE__, __func__, __LINE__, isgraph, __c)
#define islower(__c) __checked_i(__FILE__, __func__, __LINE__, islower, __c)
#define isprint(__c) __checked_i(__FILE__, __func__, __LINE__, isprint, __c)
#define ispunct(__c) __checked_i(__FILE__, __func__, __LINE__, ispunct, __c)
#define isspace(__c) __checked_i(__FILE__, __func__, __LINE__, isspace, __c)
#define isupper(__c) __checked_i(__FILE__, __func__, __LINE__, isupper, __c)
#define isxdigit(__c) __checked_i(__FILE__, __func__, __LINE__, isxdigit, __c)
#define tolower(__c) __checked_i(__FILE__, __func__, __LINE__, tolower, __c)
#define toupper(__c) __checked_i(__FILE__, __func__, __LINE__, toupper, __c)

#if (199901L <= __STDC_VERSION_CTYPE_H__)
int isblank(int);
#define isblank(__c) __checked_i(__FILE__, __func__, __LINE__, isblank, __c)
#endif

#endif

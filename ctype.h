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
int __isalnum(const char *, const char *, unsigned long long, int);
#define isalnum(__c) __isalnum(__FILE__, __func__, __LINE__, __c);

int isalpha(int);
int __isalpha(const char *, const char *, unsigned long long, int);
#define isalpha(__c) __isalpha(__FILE__, __func__, __LINE__, __c);

int iscntrl(int);
int __iscntrl(const char *, const char *, unsigned long long, int);
#define iscntrl(__c) __iscntrl(__FILE__, __func__, __LINE__, __c);

int isdigit(int);
int __isdigit(const char *, const char *, unsigned long long, int);
#define isdigit(__c) __isdigit(__FILE__, __func__, __LINE__, __c);

int isgraph(int);
int __isgraph(const char *, const char *, unsigned long long, int);
#define isgraph(__c) __isgraph(__FILE__, __func__, __LINE__, __c);

int islower(int);
int __islower(const char *, const char *, unsigned long long, int);
#define islower(__c) __islower(__FILE__, __func__, __LINE__, __c);

int isprint(int);
int __isprint(const char *, const char *, unsigned long long, int);
#define isprint(__c) __isprint(__FILE__, __func__, __LINE__, __c);

int ispunct(int);
int __ispunct(const char *, const char *, unsigned long long, int);
#define ispunct(__c) __ispunct(__FILE__, __func__, __LINE__, __c);

int isspace(int);
int __isspace(const char *, const char *, unsigned long long, int);
#define isspace(__c) __isspace(__FILE__, __func__, __LINE__, __c);

int isupper(int);
int __isupper(const char *, const char *, unsigned long long, int);
#define isupper(__c) __isupper(__FILE__, __func__, __LINE__, __c);

int isxdigit(int);
int __isxdigit(const char *, const char *, unsigned long long, int);
#define isxdigit(__c) __isxdigit(__FILE__, __func__, __LINE__, __c);

int tolower(int);
int __tolower(const char *, const char *, unsigned long long, int);
#define tolower(__c) __tolower(__FILE__, __func__, __LINE__, __c);

int toupper(int);
int __toupper(const char *, const char *, unsigned long long, int);
#define toupper(__c) __toupper(__FILE__, __func__, __LINE__, __c);


#if (199901L <= __STDC_VERSION_CTYPE_H__)
int isblank(int);
int __isblank(const char *, const char *, unsigned long long, int);
#define isblank(__c) __isblank(__FILE__, __func__, __LINE__, __c);

#endif

#endif

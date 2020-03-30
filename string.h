#ifndef __STRING_H__
#define __STRING_H__

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

/* src/stddef/NULL.c */
#define NULL                                                          ((void*)0)

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


#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

/* ./src/string/memchr.c */
void * memchr(const void *__s, int __c, size_t __n);
/* ./src/string/memcmp.c */
int memcmp(const void *__s1, const void *__s2, size_t __n);
/* ./src/string/memcpy.c */
void * memcpy(void * restrict __s1, const void * restrict __s2, size_t __n);
/* ./src/string/memmove.c */
void * memmove(void *__s1, const void *__s2, size_t __n);
/* ./src/string/memset.c */
void * memset(void *__s, int __c, size_t __n);
/* ./src/string/strcat.c */
char * strcat(char * restrict __s1, const char * restrict __s2);
/* ./src/string/strchr.c */
char * strchr(const char *__s, int __c);
/* ./src/string/strcmp.c */
int strcmp(const char *__s1, const char *__s2);
/* ./src/string/strcoll.c */
int strcoll(const char *__s1, const char *__s2);
/* ./src/string/strcpy.c */
char * strcpy(char * restrict __s1, const char * restrict __s2);
/* ./src/string/strcspn.c */
size_t strcspn(const char *__s1, const char *__s2);
/* ./src/string/strerror.c */
char * strerror(int __errnum);
/* ./src/string/strlen.c */
size_t strlen(const char *__s);
/* ./src/string/strncat.c */
char * strncat(char * restrict __s1, const char * restrict __s2, size_t __n);
/* ./src/string/strncmp.c */
int strncmp(const char *__s1, const char *__s2, size_t __n);
/* ./src/string/strncpy.c */
char * strncpy(char * restrict __s1, const char * restrict __s2, size_t __n);
/* ./src/string/strpbrk.c */
char * strpbrk(const char *__s1, const char *__s2);
/* ./src/string/strrchr.c */
char * strrchr(const char *__s, int __c);
/* ./src/string/strspn.c */
size_t strspn(const char *__s1, const char *__s2);
/* ./src/string/strstr.c */
char * strstr(const char *__s1, const char *__s2);
/* ./src/string/strtok.c */
char * strtok(char * restrict __s1, const char * restrict __s2);
/* ./src/string/strxfrm.c */
size_t strxfrm(char * restrict __s1, const char * restrict __s2, size_t __n);

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/string/strdup.c */
char * strdup(const char *__s);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/string/memccpy.c */
void *memccpy(void * restrict __s1, const void * restrict __s2, int __c, size_t __n);
#endif


#endif

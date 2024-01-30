#ifndef __STDC_VERSION_STRING_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_STRING_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_STRING_H__ 1
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

#define NULL                                                          ((void*)0)

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

void * memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void * memcpy(void * restrict __s1, const void * restrict __s2, size_t __n);
void * memmove(void *__s1, const void *__s2, size_t __n);
void * memset(void *__s, int __c, size_t __n);
char * strcat(char * restrict __s1, const char * restrict __s2);
char * strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char * strcpy(char * restrict __s1, const char * restrict __s2);
size_t strcspn(const char *__s1, const char *__s2);
char * strerror(int __errnum);
size_t strlen(const char *__s);
char * strncat(char * restrict __s1, const char * restrict __s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char * strncpy(char * restrict __s1, const char * restrict __s2, size_t __n);
char * strpbrk(const char *__s1, const char *__s2);
char * strrchr(const char *__s, int __c);
size_t strspn(const char *__s1, const char *__s2);
char * strstr(const char *__s1, const char *__s2);
char * strtok(char * restrict __s1, const char * restrict __s2);
size_t strxfrm(char * restrict __s1, const char * restrict __s2, size_t __n);


#define memchr(__s, __c, __n) \
	__checked_p(__FILE__, __func__, __LINE__, memchr, __s, __c, __n)

#define memcmp(__s1, __s2, __n) \
	__checked_i(__FILE__, __func__, __LINE__, memcmp, __s1, __s2, __n)

#define memcpy(__s1, __s2, __n) \
	__checked_p(__FILE__, __func__, __LINE__, memcpy, __s1, __s2, __n)

#define memmove(__s1, __s2, __n) \
	__checked_p(__FILE__, __func__, __LINE__, memmove, __s1, __s2, __n)

#define memset(__s, __c, __n) \
	__checked_p(__FILE__, __func__, __LINE__, memset, __s, __c, __n)

#define strcat(__s1, __s2) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strcat, __s1, __s2)

#define strchr(__s, __c) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strchr, __s, __c)

#define strcmp(__s1, __s2) \
	__checked_i(__FILE__, __func__, __LINE__, strcmp, __s1, __s2)

#define strcoll(__s1, __s2) \
	__checked_i(__FILE__, __func__, __LINE__, strcoll, __s1, __s2)

#define strcpy(__s1, __s2) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strcpy, __s1, __s2)

#define strcspn(__s1, __s2) \
	__checked_s(__FILE__, __func__, __LINE__, strcspn, __s1, __s2)

#define strerror(__e) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strerror, __e)

#define strlen(__s) \
	__checked_s(__FILE__, __func__, __LINE__, strlen, __s)

#define strncat(__s1, __s2, __n) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strncat, __s1, __s2, __n)

#define strncmp(__s1, __s2, __n) \
	__checked_i(__FILE__, __func__, __LINE__, strncmp, __s1, __s2, __n)

#define strncpy(__s1, __s2, __n) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strncpy, __s1, __s2, __n)

#define strpbrk(__s1, __s2) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strpbrk, __s1, __s2)

#define strrchr(__s, __c) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strrchr, __s, __c)

#define strspn(__s1, __s2) \
	__checked_s(__FILE__, __func__, __LINE__, strspn, __s1, __s2)

#define strstr(__s1, __s2) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strstr, __s1, __s2)

#define strtok(__s1, __s2) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, strtok, __s1, __s2)

#define strxfrm(__s1, __s2, __n) \
	__checked_s(__FILE__, __func__, __LINE__, strxfrm, __s1, __s2, __n)

#ifdef __STDC_WANT_LIB_EXT1__
typedef int errno_t;
typedef size_t rsize_t;
errno_t memcpy_s(void * restrict s1, rsize_t s1max, const void * restrict s2, rsize_t n);
errno_t memmove_s(void *s1, rsize_t s1max, const void *s2, rsize_t n);
errno_t strcpy_s(char * restrict s1, rsize_t s1max, const char * restrict s2);
errno_t strncpy_s(char * restrict s1, rsize_t s1max, const char * restrict s2, rsize_t n);
errno_t strcat_s(char * restrict s1, rsize_t s1max, const char * restrict s2);
errno_t strncat_s(char * restrict s1, rsize_t s1max, const char * restrict s2, rsize_t n);
char *strtok_s(char * restrict s1, rsize_t * restrict s1max, const char * restrict s2, char ** restrict ptr);
errno_t memset_s(void *s, rsize_t smax, int c, rsize_t n);
errno_t strerror_s(char *s, rsize_t maxsize, errno_t errnum);
size_t strerrorlen_s(errno_t errnum);
size_t strnlen_s(const char *s, size_t maxsize);
#endif

#endif

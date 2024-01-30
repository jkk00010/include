#ifndef __STDC_VERSION_TIME_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_TIME_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_TIME_H__ 1
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

#define CLOCKS_PER_SEC                                        ((clock_t)1000000)
#define NULL                                                          ((void*)0)

#ifndef __TYPE_clock_t_DEFINED__
#define __TYPE_clock_t_DEFINED__
typedef long int                                                        clock_t;
#endif

#ifndef __TYPE_time_t_DEFINED__
#define __TYPE_time_t_DEFINED__
typedef long int                                                         time_t;
#endif

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


#ifndef __TYPE_struct_tm_DEFINED__
#define __TYPE_struct_tm_DEFINED__
struct tm {
	int tm_sec;	/* Seconds [0,60] */
	int tm_min;	/* Minutes [0, 59] */
	int tm_hour;	/* Hour [0,23] */
	int tm_mday;	/* Day of the month [1,31] */
	int tm_mon;	/* Month of the year [0,11] */
	int tm_year;	/* Years since 1900 */
	int tm_wday;	/* Day of the week [0,6] (Sunday = 0) */
	int tm_yday;	/* Day of the year [0,365] */
	int tm_isdst;	/* Daylight Saving Time flag */
};
#endif

char * asctime(const struct tm * __timeptr);
#define asctime(__timeptr) \
	__checked_p(__FILE__, __func__, __LINE__, asctime, __timeptr)

clock_t clock(void);
#define clock() \
	__checked_clock(__FILE__, __func__, __LINE__, clock)

char * ctime(const time_t * __timer);
#define ctime(__timer) \
	__checked_p(__FILE__, __func__, __LINE__, ctime, __timer)

double difftime(time_t __time1, time_t __time0);
#define difftime(__time1, __time0) \
	__checked_d(__FILE__, __func__, __LINE__, difftime, __time1, __time2)

struct tm * gmtime(const time_t * __timer);
#define gmtime(__timer) \
	__checked_p(__FILE__, __func__, __LINE__, gmtime, __timer)

struct tm * localtime(const time_t * __timer);
#define localtime(__timer) \
	__checked_p(__FILE__, __func__, __LINE__, localtime, __timer)

time_t mktime(struct tm * __timeptr);
#define mktime(__timeptr) \
	__checked_time(__FILE__, __func__, __LINE__, mktime, __timeptr)

size_t strftime(char * restrict __s, size_t __maxsize, const char * restrict __format, const struct tm * restrict __timeptr);
#define strftime(__s, __maxsize, __format, __timeptr) \
	__checked_s(__FILE__, __func__, __LINE__, strftime, __s, __maxsize, __format, __timeptr)

time_t time(time_t * __timer);
#define time(__timer) \
	__checked_time(__FILE__, __func__, __LINE__, time, __timer)

#endif

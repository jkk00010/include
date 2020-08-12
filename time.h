#ifndef __TIME_H__
#define __TIME_H__

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

/* ./src/time/CLOCKS_PER_SEC.c */
#define CLOCKS_PER_SEC                                        ((clock_t)1000000)
/* src/stddef/NULL.c */
#define NULL                                                          ((void*)0)

#if	(defined _POSIX_SOURCE)
/* ./src/time/CLK_TCK.c */
#define CLK_TCK                                                       /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/time/CLOCK_REALTIME.c */
#define CLOCK_REALTIME                                                       (3)
/* ./src/time/TIMER_ABSTIME.c */
#define TIMER_ABSTIME                                                        (0)
#endif

/* ./src/time/clock_t.c */
#ifndef __TYPE_clock_t_DEFINED__
#define __TYPE_clock_t_DEFINED__
typedef long int                                                        clock_t;
#endif

/* ./src/time/time_t.c */
#ifndef __TYPE_time_t_DEFINED__
#define __TYPE_time_t_DEFINED__
typedef long int                                                         time_t;
#endif

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


/* ./src/time/struct_tm.c */
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


#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/time/struct_timespec.c */
#ifndef __TYPE_struct_timespec_DEFINED__
#define __TYPE_struct_timespec_DEFINED__
struct timespec {
	time_t tv_sec;	/* Seconds */
	long tv_nsec;	/* Nanoseonds */
};
#endif

/* ./src/time/struct_itimerspec.c */
#ifndef __TYPE_struct_itimerspec_DEFINED__
#define __TYPE_struct_itimerspec_DEFINED__
struct itimerspec {
	struct timespec it_interval;
	struct timespec it_value;
};
#endif
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/time/tzname.c */
extern char * tzname[2];
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/time/daylight.c */
extern int daylight;
/* ./src/time/timezone.c */
extern long timezone;
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/time/getdate_err.c */
extern int getdate_err;
#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

/* ./src/time/asctime.c */
char * asctime(const struct tm * __timeptr);
/* ./src/time/clock.c */
clock_t clock(void);
/* ./src/time/ctime.c */
char * ctime(const time_t * __timer);
/* ./src/time/difftime.c */
double difftime(time_t __time1, time_t __time0);
/* ./src/time/gmtime.c */
struct tm * gmtime(const time_t * __timer);
/* ./src/time/localtime.c */
struct tm * localtime(const time_t * __timer);
/* ./src/time/mktime.c */
time_t mktime(struct tm * __timeptr);
/* ./src/time/strftime.c */
size_t strftime(char * restrict __s, size_t __maxsize, const char * restrict __format, const struct tm * restrict __timeptr);
/* ./src/time/time.c */
time_t time(time_t * __timer);

#if	(defined _POSIX_SOURCE)
/* ./src/time/tzset.c */
void tzset(void);
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/time/clock_getres.c */
int clock_getres(clockid_t __clock_id, struct timespec *__res);
/* ./src/time/clock_gettime.c */
int clock_gettime(clockid_t __clock_id, struct timespec *__tp);
/* ./src/time/clock_settime.c */
int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
/* ./src/time/nanosleep.c */
int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp);
/* ./src/time/timer_create.c */
int timer_create(clockid_t __clockid, struct sigevent *restrict __evp, timer_t *restrict __timerid);
/* ./src/time/timer_delete.c */
int timer_delete(timer_t __timerid);
/* ./src/time/timer_getoverrun.c */
int timer_getoverrun(timer_t __timerid);
/* ./src/time/timer_gettime.c */
int timer_gettime(timer_t __timerid, struct itimerspec *__value);
/* ./src/time/timer_settime.c */
int timer_settime(timer_t __timerid, int __flags, const struct itimerspec * restrict __value, struct itimerspec * restrict __ovalue);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/time/strptime.c */
char *strptime(const char *restrict __buf, const char *restrict __format, struct tm *restrict __tm);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/time/getdate.c */
struct tm *getdate(const char *__string);
#endif


#endif

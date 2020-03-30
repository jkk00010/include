#ifndef __LIMITS_H__
#define __LIMITS_H__

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

/* ./src/limits/CHAR_BIT.c */
#define CHAR_BIT                                                             (8)
/* ./src/limits/CHAR_MAX.c */
#ifdef __CHAR_IS_UNSIGNED__
#define CHAR_MAX                                                           (255)
#else
#define CHAR_MAX                                                           (127)
#endif
/* ./src/limits/CHAR_MIN.c */
#ifdef __CHAR_IS_UNSIGNED__
#define CHAR_MIN                                                             (0)
#else
#define CHAR_MIN                                                          (-128)
#endif
/* ./src/limits/INT_MAX.c */
#if defined __LP32__
#define INT_MAX                                                          (32767)
#elif defined __ILP32__ || defined __LLP64__ || defined __LP64__
#define INT_MAX                                                     (2147483647)
#elif defined __ILP64__
#define INT_MAX                                            (9223372036854775807)
#endif
/* ./src/limits/INT_MIN.c */
#define INT_MIN                                                    (-INT_MAX -1)
/* ./src/limits/LONG_MAX.c */
#if defined __LP32__ || defined __ILP32__ || defined __LLP64__
#define LONG_MAX                                                   (2147483647L)
#elif defined __ILP64__ || defined __LP64__
#define LONG_MAX                                          (9223372036854775807L)
#endif
/* ./src/limits/LONG_MIN.c */
#define LONG_MIN                                                (-LONG_MAX - 1L)
/* ./src/limits/MB_LEN_MAX.c */
#define MB_LEN_MAX                                                           (4)
/* ./src/limits/SCHAR_MAX.c */
#define SCHAR_MAX                                                          (127)
/* ./src/limits/SCHAR_MIN.c */
#define SCHAR_MIN                                                         (-128)
/* ./src/limits/SHRT_MAX.c */
#define SHRT_MAX                                                         (32767)
/* ./src/limits/SHRT_MIN.c */
#define SHRT_MIN                                                        (-32768)
/* ./src/limits/UCHAR_MAX.c */
#define UCHAR_MAX                                                          (255)
/* ./src/limits/UINT_MAX.c */
#if defined __LP32__
#define UINT_MAX                                                        (65535U)
#elif defined __ILP32__ || defined __LLP64__ || defined __LP64__
#define UINT_MAX                                                   (4294967295U)
#elif defined __ILP64__
#define UINT_MAX                                         (18446744073709551616U)
#endif
/* ./src/limits/ULONG_MAX.c */
#if defined __LP32__ || defined __ILP32__ || defined __LLP64__
#define ULONG_MAX                                                 (4294967295UL)
#elif defined __ILP64__ || defined __LP64__
#define ULONG_MAX                                       (18446744073709551615UL)
#endif
/* ./src/limits/USHRT_MAX.c */
#define USHRT_MAX                                                        (65535)

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/limits/LLONG_MAX.c */
#define LLONG_MAX                                        (9223372036854775807LL)
/* ./src/limits/LLONG_MIN.c */
#define LLONG_MIN                                             (-LLONG_MAX - 1LL)
/* ./src/limits/ULLONG_MAX.c */
#define ULLONG_MAX                                     (18446744073709551615ULL)
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/limits/ARG_MAX.c */
/* ./src/limits/CHILD_MAX.c */
/* ./src/limits/LINK_MAX.c */
/* ./src/limits/MAX_CANON.c */
/* ./src/limits/MAX_INPUT.c */
/* ./src/limits/NAME_MAX.c */
/* ./src/limits/NGROUPS_MAX.c */
#define NGROUPS_MAX                                           _POSIX_NGROUPS_MAX
/* ./src/limits/OPEN_MAX.c */
/* ./src/limits/PATH_MAX.c */
/* ./src/limits/PIPE_BUF.c */
/* ./src/limits/SSIZE_MAX.c */
#define SSIZE_MAX                                                   (2147483647)
/* ./src/limits/STREAM_MAX.c */
/* ./src/limits/TZNAME_MAX.c */
/* ./src/limits/_POSIX_ARG_MAX.c */
#define _POSIX_ARG_MAX                                                    (4096)
/* ./src/limits/_POSIX_CHILD_MAX.c */
#define _POSIX_CHILD_MAX                                                     (6)
/* ./src/limits/_POSIX_LINK_MAX.c */
#define _POSIX_LINK_MAX                                                      (8)
/* ./src/limits/_POSIX_MAX_CANON.c */
#define _POSIX_MAX_CANON                                                   (255)
/* ./src/limits/_POSIX_MAX_INPUT.c */
#define _POSIX_MAX_INPUT                                                   (255)
/* ./src/limits/_POSIX_NAME_MAX.c */
#define _POSIX_NAME_MAX                                                     (14)
/* ./src/limits/_POSIX_NGROUPS_MAX.c */
#define _POSIX_NGROUPS_MAX                                                   (0)
/* ./src/limits/_POSIX_OPEN_MAX.c */
#define _POSIX_OPEN_MAX                                                     (16)
/* ./src/limits/_POSIX_PATH_MAX.c */
#define _POSIX_PATH_MAX                                                    (256)
/* ./src/limits/_POSIX_PIPE_BUF.c */
#define _POSIX_PIPE_BUF                                                    (512)
/* ./src/limits/_POSIX_SSIZE_MAX.c */
#define _POSIX_SSIZE_MAX                                                 (32767)
/* ./src/limits/_POSIX_STREAM_MAX.c */
#define _POSIX_STREAM_MAX                                                    (8)
/* ./src/limits/_POSIX_TZNAME_MAX.c */
#define _POSIX_TZNAME_MAX                                                    (3)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/limits/AIO_LISTIO_MAX.c */
/* ./src/limits/AIO_MAX.c */
/* ./src/limits/AIO_PRIO_DELTA_MAX.c */
/* ./src/limits/DELAYTIMER_MAX.c */
/* ./src/limits/MQ_OPEN_MAX.c */
/* ./src/limits/MQ_PRIO_MAX.c */
/* ./src/limits/RTSIG_MAX.c */
/* ./src/limits/SEM_NSEMS_MAX.c */
/* ./src/limits/SEM_VALUE_MAX.c */
/* ./src/limits/SIGQUEUE_MAX.c */
/* ./src/limits/TIMER_MAX.c */
/* ./src/limits/_POSIX_AIO_LISTIO_MAX.c */
#define _POSIX_AIO_LISTIO_MAX                                                (2)
/* ./src/limits/_POSIX_AIO_MAX.c */
#define _POSIX_AIO_MAX                                                       (1)
/* ./src/limits/_POSIX_CLOCKRES_MIN.c */
#define _POSIX_CLOCKRES_MIN                                           (20000000)
/* ./src/limits/_POSIX_DELAYTIMER_MAX.c */
#define _POSIX_DELAYTIMER_MAX                                               (32)
/* ./src/limits/_POSIX_MQ_OPEN_MAX.c */
#define _POSIX_MQ_OPEN_MAX                                                   (8)
/* ./src/limits/_POSIX_MQ_PRIO_MAX.c */
#define _POSIX_MQ_PRIO_MAX                                                  (32)
/* ./src/limits/_POSIX_RTSIG_MAX.c */
#define _POSIX_RTSIG_MAX                                                     (8)
/* ./src/limits/_POSIX_SEM_NSEMS_MAX.c */
#define _POSIX_SEM_NSEMS_MAX                                               (256)
/* ./src/limits/_POSIX_SEM_VALUE_MAX.c */
#define _POSIX_SEM_VALUE_MAX                                             (32767)
/* ./src/limits/_POSIX_SIGQUEUE_MAX.c */
#define _POSIX_SIGQUEUE_MAX                                                 (32)
/* ./src/limits/_POSIX_TIMER_MAX.c */
#define _POSIX_TIMER_MAX                                                    (32)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/limits/PAGESIZE.c */
#define PAGESIZE /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/limits/BC_BASE_MAX.c */
#define BC_BASE_MAX                                          _POSIX2_BC_BASE_MAX
/* ./src/limits/BC_DIM_MAX.c */
#define BC_DIM_MAX                                            _POSIX2_BC_DIM_MAX
/* ./src/limits/BC_SCALE_MAX.c */
#define BC_SCALE_MAX                                        _POSIX2_BC_SCALE_MAX
/* ./src/limits/BC_STRING_MAX.c */
#define BC_STRING_MAX                                      _POSIX2_BC_STRING_MAX
/* ./src/limits/COLL_WEIGHTS_MAX.c */
#define COLL_WEIGHTS_MAX                                _POSIX2_COLL_WEIGHTS_MAX
/* ./src/limits/EXPR_NEST_MAX.c */
#define EXPR_NEST_MAX                                      _POSIX2_EXPR_NEST_MAX
/* ./src/limits/LINE_MAX.c */
#define LINE_MAX                                                _POSIX2_LINE_MAX
/* ./src/limits/RE_DUP_MAX.c */
#define RE_DUP_MAX                                            _POSIX2_RE_DUP_MAX
/* ./src/limits/_POSIX2_BC_BASE_MAX.c */
#define _POSIX2_BC_BASE_MAX                                                 (99)
/* ./src/limits/_POSIX2_BC_DIM_MAX.c */
#define _POSIX2_BC_DIM_MAX                                                (2048)
/* ./src/limits/_POSIX2_BC_SCALE_MAX.c */
#define _POSIX2_BC_SCALE_MAX                                                (99)
/* ./src/limits/_POSIX2_BC_STRING_MAX.c */
#define _POSIX2_BC_STRING_MAX                                             (1000)
/* ./src/limits/_POSIX2_COLL_WEIGHTS_MAX.c */
#define _POSIX2_COLL_WEIGHTS_MAX                                             (2)
/* ./src/limits/_POSIX2_EXPR_NEST_MAX.c */
#define _POSIX2_EXPR_NEST_MAX                                               (32)
/* ./src/limits/_POSIX2_LINE_MAX.c */
#define _POSIX2_LINE_MAX                                                  (2048)
/* ./src/limits/_POSIX2_RE_DUP_MAX.c */
#define _POSIX2_RE_DUP_MAX                                                 (255)
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/limits/CHARCLASS_NAME_MAX.c */
#define CHARCLASS_NAME_MAX                            _POSIX2_CHARCLASS_NAME_MAX
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/limits/LONG_BIT.c */
#define LONG_BIT                                                            (32)
/* ./src/limits/NL_ARGMAX.c */
#define NL_ARGMAX                                                            (9)
/* ./src/limits/NL_LANGMAX.c */
#define NL_LANGMAX                                                          (14)
/* ./src/limits/NL_MSGMAX.c */
#define NL_MSGMAX                                                        (32767)
/* ./src/limits/NL_SETMAX.c */
#define NL_SETMAX                                                          (255)
/* ./src/limits/NL_TEXTMAX.c */
#define NL_TEXTMAX                                              _POSIX2_LINE_MAX
/* ./src/limits/WORD_BIT.c */
#define WORD_BIT                                                            (32)
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/limits/ATEXIT_MAX.c */
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/limits/NZERO.c */
#define NZERO                                                               (20)
#endif

#if	(defined _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
/* ./src/limits/PASS_MAX.c */
/* ./src/limits/TMP_MAX.c */
#define TMP_MAX                                                          (10000)
#endif

/* ./src/limits/NL_NMAX.c */
#define NL_NMAX                                                              (1)
/* src/float/DBL_DIG.c */
#define DBL_DIG                                                             (15)
/* src/float/DBL_MAX.c */
#define DBL_MAX                                                  (1.797693E+308)
/* src/float/FLT_DIG.c */
#define FLT_DIG                                                              (6)
/* src/float/FLT_MAX.c */
#define FLT_MAX                                                   (3.402823E+38)

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/limits/IOV_MAX.c */
/* ./src/limits/PAGE_SIZE.c */
/* ./src/limits/_XOPEN_IOV_MAX.c */
#define _XOPEN_IOV_MAX                                                      (16)
#endif


#endif

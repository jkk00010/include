#ifndef __STDC_VERSION_LIMITS_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_LIMITS_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_LIMITS_H__ 1
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

/* TODO: XOPEN/POSIX/etc. */

#define CHAR_BIT                                                             (8)

#ifdef __CHAR_IS_UNSIGNED__
#define CHAR_MAX                                                           (255)
#define CHAR_MIN                                                             (0)
#else
#define CHAR_MAX                                                           (127)
#define CHAR_MIN                                                          (-128)
#endif

#if defined __LP32__
#define INT_MAX                                                          (32767)
#define UINT_MAX                                                        (65535U)
#elif defined __ILP32__ || defined __LLP64__ || defined __LP64__
#define INT_MAX                                                     (2147483647)
#define UINT_MAX                                                   (4294967295U)
#elif defined __ILP64__
#define INT_MAX                                            (9223372036854775807)
#define UINT_MAX                                         (18446744073709551616U)
#endif
#define INT_MIN                                                    (-INT_MAX -1)

#if defined __LP32__ || defined __ILP32__ || defined __LLP64__
#define LONG_MAX                                                   (2147483647L)
#define ULONG_MAX                                                 (4294967295UL)
#elif defined __ILP64__ || defined __LP64__
#define LONG_MAX                                          (9223372036854775807L)
#define ULONG_MAX                                       (18446744073709551615UL)
#endif
#define LONG_MIN                                                (-LONG_MAX - 1L)

#define MB_LEN_MAX                                                           (4)
#define SCHAR_MAX                                                          (127)
#define SCHAR_MIN                                                         (-128)
#define SHRT_MAX                                                         (32767)
#define SHRT_MIN                                                        (-32768)
#define UCHAR_MAX                                                          (255)
#define USHRT_MAX                                                        (65535)

#if (199901L <= __STDC_VERSION_LIMITS_H__)
#define LLONG_MAX                                        (9223372036854775807LL)
#define LLONG_MIN                                             (-LLONG_MAX - 1LL)
#define ULLONG_MAX                                     (18446744073709551615ULL)
#endif

#if	(defined _POSIX_SOURCE)
#define NGROUPS_MAX                                           _POSIX_NGROUPS_MAX
#define SSIZE_MAX                                                   (2147483647)
#define _POSIX_ARG_MAX                                                    (4096)
#define _POSIX_CHILD_MAX                                                     (6)
#define _POSIX_LINK_MAX                                                      (8)
#define _POSIX_MAX_CANON                                                   (255)
#define _POSIX_MAX_INPUT                                                   (255)
#define _POSIX_NAME_MAX                                                     (14)
#define _POSIX_NGROUPS_MAX                                                   (0)
#define _POSIX_OPEN_MAX                                                     (16)
#define _POSIX_PATH_MAX                                                    (256)
#define _POSIX_PIPE_BUF                                                    (512)
#define _POSIX_SSIZE_MAX                                                 (32767)
#define _POSIX_STREAM_MAX                                                    (8)
#define _POSIX_TZNAME_MAX                                                    (3)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
#define _POSIX_AIO_LISTIO_MAX                                                (2)
#define _POSIX_AIO_MAX                                                       (1)
#define _POSIX_CLOCKRES_MIN                                           (20000000)
#define _POSIX_DELAYTIMER_MAX                                               (32)
#define _POSIX_MQ_OPEN_MAX                                                   (8)
#define _POSIX_MQ_PRIO_MAX                                                  (32)
#define _POSIX_RTSIG_MAX                                                     (8)
#define _POSIX_SEM_NSEMS_MAX                                               (256)
#define _POSIX_SEM_VALUE_MAX                                             (32767)
#define _POSIX_SIGQUEUE_MAX                                                 (32)
#define _POSIX_TIMER_MAX                                                    (32)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define PAGESIZE /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
#define BC_BASE_MAX                                          _POSIX2_BC_BASE_MAX
#define BC_DIM_MAX                                            _POSIX2_BC_DIM_MAX
#define BC_SCALE_MAX                                        _POSIX2_BC_SCALE_MAX
#define BC_STRING_MAX                                      _POSIX2_BC_STRING_MAX
#define COLL_WEIGHTS_MAX                                _POSIX2_COLL_WEIGHTS_MAX
#define EXPR_NEST_MAX                                      _POSIX2_EXPR_NEST_MAX
#define LINE_MAX                                                _POSIX2_LINE_MAX
#define RE_DUP_MAX                                            _POSIX2_RE_DUP_MAX
#define _POSIX2_BC_BASE_MAX                                                 (99)
#define _POSIX2_BC_DIM_MAX                                                (2048)
#define _POSIX2_BC_SCALE_MAX                                                (99)
#define _POSIX2_BC_STRING_MAX                                             (1000)
#define _POSIX2_COLL_WEIGHTS_MAX                                             (2)
#define _POSIX2_EXPR_NEST_MAX                                               (32)
#define _POSIX2_LINE_MAX                                                  (2048)
#define _POSIX2_RE_DUP_MAX                                                 (255)
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
#define CHARCLASS_NAME_MAX                            _POSIX2_CHARCLASS_NAME_MAX
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
#define LONG_BIT                                                            (32)
#define NL_ARGMAX                                                            (9)
#define NL_LANGMAX                                                          (14)
#define NL_MSGMAX                                                        (32767)
#define NL_SETMAX                                                          (255)
#define NL_TEXTMAX                                              _POSIX2_LINE_MAX
#define WORD_BIT                                                            (32)
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#endif

#if	(defined _XOPEN_SOURCE)
#define NZERO                                                               (20)
#endif

#if	(defined _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
#define TMP_MAX                                                          (10000)
#endif

#define NL_NMAX                                                              (1)
#define DBL_DIG                                                             (15)
#define DBL_MAX                                                  (1.797693E+308)
#define FLT_DIG                                                              (6)
#define FLT_MAX                                                   (3.402823E+38)

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
#define _XOPEN_IOV_MAX                                                      (16)
#endif


#endif

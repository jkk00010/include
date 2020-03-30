#ifndef __STDINT_H__
#define __STDINT_H__

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

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/stdint/INT16_C.c */
#define INT16_C(__value)                                ((int_least16_t)__value)
/* ./src/stdint/INT16_MAX.c */
#define INT16_MAX                                                        (32767)
/* ./src/stdint/INT16_MIN.c */
#define INT16_MIN                                                       (-32768)
/* ./src/stdint/INT32_C.c */
#define INT32_C(__value)                             ((int_least32_t)__value##L)
/* ./src/stdint/INT32_MAX.c */
#define INT32_MAX                                                   (2147483647)
/* ./src/stdint/INT32_MIN.c */
#define INT32_MIN                                                  (-2147483648)
/* ./src/stdint/INT64_C.c */
#define INT64_C(__value)                            ((int_least64_t)__value##LL)
/* ./src/stdint/INT64_MAX.c */
#define INT64_MAX                                        (9223372036854775807LL)
/* ./src/stdint/INT64_MIN.c */
#define INT64_MIN                                       (-9223372036854775808LL)
/* ./src/stdint/INT8_C.c */
#define INT8_C(__value)                                  ((int_least8_t)__value)
/* ./src/stdint/INT8_MAX.c */
#define INT8_MAX                                                           (127)
/* ./src/stdint/INT8_MIN.c */
#define INT8_MIN                                                          (-128)
/* ./src/stdint/INTMAX_C.c */
#define INTMAX_C(__value)                                ((intmax_t)__value##LL)
/* ./src/stdint/INTMAX_MAX.c */
#define INTMAX_MAX                                       (9223372036854775807LL)
/* ./src/stdint/INTMAX_MIN.c */
#define INTMAX_MIN                                           (-INTMAX_MAX - 1LL)
/* ./src/stdint/INTPTR_MAX.c */
#define INTPTR_MAX                                       /* FIXME */     (32767)
/* ./src/stdint/INTPTR_MIN.c */
#define INTPTR_MIN                                    /* FIXME */       (-32767)
/* ./src/stdint/INT_FAST16_MAX.c */
#define INT_FAST16_MAX                                                   (32767)
/* ./src/stdint/INT_FAST16_MIN.c */
#define INT_FAST16_MIN                                                  (-32768)
/* ./src/stdint/INT_FAST32_MAX.c */
#define INT_FAST32_MAX                                              (2147483647)
/* ./src/stdint/INT_FAST32_MIN.c */
#define INT_FAST32_MIN                                             (-2147483648)
/* ./src/stdint/INT_FAST64_MAX.c */
#define INT_FAST64_MAX                                   (9223372036854775807LL)
/* ./src/stdint/INT_FAST64_MIN.c */
#define INT_FAST64_MIN                                  (-9223372036854775808LL)
/* ./src/stdint/INT_FAST8_MAX.c */
#define INT_FAST8_MAX                                                      (127)
/* ./src/stdint/INT_FAST8_MIN.c */
#define INT_FAST8_MIN                                                     (-128)
/* ./src/stdint/INT_LEAST16_MAX.c */
#define INT_LEAST16_MAX                                                  (32767)
/* ./src/stdint/INT_LEAST16_MIN.c */
#define INT_LEAST16_MIN                                                 (-32768)
/* ./src/stdint/INT_LEAST32_MAX.c */
#define INT_LEAST32_MAX                                             (2147483647)
/* ./src/stdint/INT_LEAST32_MIN.c */
#define INT_LEAST32_MIN                                            (-2147483648)
/* ./src/stdint/INT_LEAST64_MAX.c */
#define INT_LEAST64_MAX                                  (9223372036854775807LL)
/* ./src/stdint/INT_LEAST64_MIN.c */
#define INT_LEAST64_MIN                                 (-9223372036854775808LL)
/* ./src/stdint/INT_LEAST8_MAX.c */
#define INT_LEAST8_MAX                                                     (127)
/* ./src/stdint/INT_LEAST8_MIN.c */
#define INT_LEAST8_MIN                                                    (-128)
/* ./src/stdint/PTRDIFF_MAX.c */
#define PTRDIFF_MAX                                   /* FIXME */        (65535)
/* ./src/stdint/PTRDIFF_MIN.c */
#define PTRDIFF_MIN                                   /* FIXME */       (-65535)
/* ./src/stdint/SIG_ATOMIC_MAX.c */
#define SIG_ATOMIC_MAX                                                     (127)
/* ./src/stdint/SIG_ATOMIC_MIN.c */
#define SIG_ATOMIC_MIN                                                    (-127)
/* ./src/stdint/SIZE_MAX.c */
#define SIZE_MAX                              /* FIXME */                (65535)
/* ./src/stdint/UINT16_C.c */
#define UINT16_C(__value)                              ((uint_least16_t)__value)
/* ./src/stdint/UINT16_MAX.c */
#define UINT16_MAX                                                       (65535)
/* ./src/stdint/UINT32_C.c */
#define UINT32_C(__value)                           ((uint_least32_t)__value##U)
/* ./src/stdint/UINT32_MAX.c */
#define UINT32_MAX                                                 (4294967295U)
/* ./src/stdint/UINT64_C.c */
#define UINT64_C(__value)                         ((uint_least32_t)__value##ULL)
/* ./src/stdint/UINT64_MAX.c */
#define UINT64_MAX                                     (18446744073709551616ULL)
/* ./src/stdint/UINT8_C.c */
#define UINT8_C(__value)                                ((uint_least8_t)__value)
/* ./src/stdint/UINT8_MAX.c */
#define UINT8_MAX                                                          (255)
/* ./src/stdint/UINTMAX_C.c */
#define UINTMAX_C(__value)                             ((uintmax_t)__value##ULL)
/* ./src/stdint/UINTMAX_MAX.c */
#define UINTMAX_MAX                                    (18446744073709551615ULL)
/* ./src/stdint/UINTPTR_MAX.c */
#define UINTPTR_MAX                                 /* FIXME */          (65535)
/* ./src/stdint/UINT_FAST16_MAX.c */
#define UINT_FAST16_MAX                                                  (65535)
/* ./src/stdint/UINT_FAST32_MAX.c */
#define UINT_FAST32_MAX                                            (4294967295U)
/* ./src/stdint/UINT_FAST64_MAX.c */
#define UINT_FAST64_MAX                                (18446744073709551616ULL)
/* ./src/stdint/UINT_FAST8_MAX.c */
#define UINT_FAST8_MAX                                                     (255)
/* ./src/stdint/UINT_LEAST16_MAX.c */
#define UINT_LEAST16_MAX                                                 (65535)
/* ./src/stdint/UINT_LEAST32_MAX.c */
#define UINT_LEAST32_MAX                                           (4294967295U)
/* ./src/stdint/UINT_LEAST64_MAX.c */
#define UINT_LEAST64_MAX                               (18446744073709551616ULL)
/* ./src/stdint/UINT_LEAST8_MAX.c */
#define UINT_LEAST8_MAX                                                    (255)
/* ./src/stdint/WINT_MAX.c */
#define WINT_MAX                                                    (2147483647)
/* ./src/stdint/WINT_MIN.c */
#define WINT_MIN                                                   (-2147483648)
/* src/wchar/WCHAR_MAX.c */
#define WCHAR_MAX                                                     (0x10FFFF)
/* src/wchar/WCHAR_MIN.c */
#define WCHAR_MIN                                                            (0)
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/stdint/int16_t.c */
#ifndef __TYPE_int16_t_DEFINED__
#define __TYPE_int16_t_DEFINED__
typedef short int                                                       int16_t;
#endif

/* ./src/stdint/int32_t.c */
#ifndef __TYPE_int32_t_DEFINED__
#define __TYPE_int32_t_DEFINED__
typedef int                                                             int32_t;
#endif

/* ./src/stdint/int64_t.c */
#ifndef __TYPE_int64_t_DEFINED__
#define __TYPE_int64_t_DEFINED__
typedef long long int                                                   int64_t;
#endif

/* ./src/stdint/int8_t.c */
#ifndef __TYPE_int8_t_DEFINED__
#define __TYPE_int8_t_DEFINED__
typedef signed char                                                      int8_t;
#endif

/* ./src/stdint/int_fast16_t.c */
#ifndef __TYPE_int_fast16_t_DEFINED__
#define __TYPE_int_fast16_t_DEFINED__
typedef short int                                                  int_fast16_t;
#endif

/* ./src/stdint/int_fast32_t.c */
#ifndef __TYPE_int_fast32_t_DEFINED__
#define __TYPE_int_fast32_t_DEFINED__
typedef long int                                                   int_fast32_t;
#endif

/* ./src/stdint/int_fast64_t.c */
#ifndef __TYPE_int_fast64_t_DEFINED__
#define __TYPE_int_fast64_t_DEFINED__
typedef long long int                                              int_fast64_t;
#endif

/* ./src/stdint/int_fast8_t.c */
#ifndef __TYPE_int_fast8_t_DEFINED__
#define __TYPE_int_fast8_t_DEFINED__
typedef signed char                                                 int_fast8_t;
#endif

/* ./src/stdint/int_least16_t.c */
#ifndef __TYPE_int_least16_t_DEFINED__
#define __TYPE_int_least16_t_DEFINED__
typedef short int                                                 int_least16_t;
#endif

/* ./src/stdint/int_least32_t.c */
#ifndef __TYPE_int_least32_t_DEFINED__
#define __TYPE_int_least32_t_DEFINED__
typedef long int                                                  int_least32_t;
#endif

/* ./src/stdint/int_least64_t.c */
#ifndef __TYPE_int_least64_t_DEFINED__
#define __TYPE_int_least64_t_DEFINED__
typedef long long int                                             int_least64_t;
#endif

/* ./src/stdint/int_least8_t.c */
#ifndef __TYPE_int_least8_t_DEFINED__
#define __TYPE_int_least8_t_DEFINED__
typedef signed char                                                int_least8_t;
#endif

/* ./src/stdint/intmax_t.c */
#ifndef __TYPE_intmax_t_DEFINED__
#define __TYPE_intmax_t_DEFINED__
typedef long long int                                                  intmax_t;
#endif

/* ./src/stdint/intptr_t.c */
#ifndef __TYPE_intptr_t_DEFINED__
#define __TYPE_intptr_t_DEFINED__
typedef unsigned long int                                              intptr_t;
#endif

/* ./src/stdint/uint16_t.c */
#ifndef __TYPE_uint16_t_DEFINED__
#define __TYPE_uint16_t_DEFINED__
typedef unsigned short int                                             uint16_t;
#endif

/* ./src/stdint/uint32_t.c */
#ifndef __TYPE_uint32_t_DEFINED__
#define __TYPE_uint32_t_DEFINED__
typedef unsigned int                                                   uint32_t;
#endif

/* ./src/stdint/uint64_t.c */
#ifndef __TYPE_uint64_t_DEFINED__
#define __TYPE_uint64_t_DEFINED__
typedef unsigned long long int                                         uint64_t;
#endif

/* ./src/stdint/uint8_t.c */
#ifndef __TYPE_uint8_t_DEFINED__
#define __TYPE_uint8_t_DEFINED__
typedef unsigned char                                                   uint8_t;
#endif

/* ./src/stdint/uint_fast16_t.c */
#ifndef __TYPE_uint_fast16_t_DEFINED__
#define __TYPE_uint_fast16_t_DEFINED__
typedef unsigned short int                                        uint_fast16_t;
#endif

/* ./src/stdint/uint_fast32_t.c */
#ifndef __TYPE_uint_fast32_t_DEFINED__
#define __TYPE_uint_fast32_t_DEFINED__
typedef unsigned int                                              uint_fast32_t;
#endif

/* ./src/stdint/uint_fast64_t.c */
#ifndef __TYPE_uint_fast64_t_DEFINED__
#define __TYPE_uint_fast64_t_DEFINED__
typedef unsigned long long int                                    uint_fast64_t;
#endif

/* ./src/stdint/uint_fast8_t.c */
#ifndef __TYPE_uint_fast8_t_DEFINED__
#define __TYPE_uint_fast8_t_DEFINED__
typedef unsigned char                                              uint_fast8_t;
#endif

/* ./src/stdint/uint_least16_t.c */
#ifndef __TYPE_uint_least16_t_DEFINED__
#define __TYPE_uint_least16_t_DEFINED__
typedef unsigned short int                                       uint_least16_t;
#endif

/* ./src/stdint/uint_least32_t.c */
#ifndef __TYPE_uint_least32_t_DEFINED__
#define __TYPE_uint_least32_t_DEFINED__
typedef unsigned long int                                        uint_least32_t;
#endif

/* ./src/stdint/uint_least64_t.c */
#ifndef __TYPE_uint_least64_t_DEFINED__
#define __TYPE_uint_least64_t_DEFINED__
typedef unsigned long long int                                   uint_least64_t;
#endif

/* ./src/stdint/uint_least8_t.c */
#ifndef __TYPE_uint_least8_t_DEFINED__
#define __TYPE_uint_least8_t_DEFINED__
typedef unsigned char                                             uint_least8_t;
#endif

/* ./src/stdint/uintmax_t.c */
#ifndef __TYPE_uintmax_t_DEFINED__
#define __TYPE_uintmax_t_DEFINED__
typedef unsigned long long int                                        uintmax_t;
#endif

/* ./src/stdint/uintptr_t.c */
#ifndef __TYPE_uintptr_t_DEFINED__
#define __TYPE_uintptr_t_DEFINED__
typedef unsigned long long int                                        uintptr_t;
#endif

#endif


#endif

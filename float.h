#ifndef __FLOAT_H__
#define __FLOAT_H__

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

#define DBL_DIG                                                             (15)
#define DBL_EPSILON                                               (2.220446E-16)
#define DBL_MANT_DIG                                                        (53)
#define DBL_MAX                                                  (1.797693E+308)
#define DBL_MAX_10_EXP                                                     (308)
#define DBL_MAX_EXP                                                       (1024)
#define DBL_MIN                                                  (2.225074E-308)
#define DBL_MIN_10_EXP                                                    (-307)
#define DBL_MIN_EXP                                                      (-1021)
#define FLT_DIG                                                              (6)
#define FLT_EPSILON                                               (1.192093E-07)
#define FLT_MANT_DIG                                                        (24)
#define FLT_MAX                                                   (3.402823E+38)
#define FLT_MAX_10_EXP                                                      (38)
#define FLT_MAX_EXP                                                        (128)
#define FLT_MIN                                                   (1.175494E-38)
#define FLT_MIN_10_EXP                                                     (-37)
#define FLT_MIN_EXP                                                       (-125)
#define FLT_RADIX                                                            (2)
#define FLT_ROUNDS                                                  fegetround()
#define LDBL_DIG                                                            (15)
#define LDBL_EPSILON                                              (2.220446E-16)
#define LDBL_MANT_DIG                                                       (53)
#define LDBL_MAX                                                 (1.797693E+308)
#define LDBL_MAX_10_EXP                                                    (308)
#define LDBL_MAX_EXP                                                      (1024)
#define LDBL_MIN                                                 (2.225074E-308)
#define LDBL_MIN_10_EXP                                                    (-37)
#define LDBL_MIN_EXP                                                     (-1021)

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
#define DECIMAL_DIG                                                         (10)
#define FLT_EVAL_METHOD                                                     (-1)
#endif

#endif

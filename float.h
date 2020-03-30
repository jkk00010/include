#ifndef __FLOAT_H__
#define __FLOAT_H__

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

/* ./src/float/DBL_DIG.c */
#define DBL_DIG                                                             (15)
/* ./src/float/DBL_EPSILON.c */
#define DBL_EPSILON                                               (2.220446E-16)
/* ./src/float/DBL_MANT_DIG.c */
#define DBL_MANT_DIG                                                        (53)
/* ./src/float/DBL_MAX.c */
#define DBL_MAX                                                  (1.797693E+308)
/* ./src/float/DBL_MAX_10_EXP.c */
#define DBL_MAX_10_EXP                                                     (308)
/* ./src/float/DBL_MAX_EXP.c */
#define DBL_MAX_EXP                                                       (1024)
/* ./src/float/DBL_MIN.c */
#define DBL_MIN                                                  (2.225074E-308)
/* ./src/float/DBL_MIN_10_EXP.c */
#define DBL_MIN_10_EXP                                                    (-307)
/* ./src/float/DBL_MIN_EXP.c */
#define DBL_MIN_EXP                                                      (-1021)
/* ./src/float/FLT_DIG.c */
#define FLT_DIG                                                              (6)
/* ./src/float/FLT_EPSILON.c */
#define FLT_EPSILON                                               (1.192093E-07)
/* ./src/float/FLT_MANT_DIG.c */
#define FLT_MANT_DIG                                                        (24)
/* ./src/float/FLT_MAX.c */
#define FLT_MAX                                                   (3.402823E+38)
/* ./src/float/FLT_MAX_10_EXP.c */
#define FLT_MAX_10_EXP                                                      (38)
/* ./src/float/FLT_MAX_EXP.c */
#define FLT_MAX_EXP                                                        (128)
/* ./src/float/FLT_MIN.c */
#define FLT_MIN                                                   (1.175494E-38)
/* ./src/float/FLT_MIN_10_EXP.c */
#define FLT_MIN_10_EXP                                                     (-37)
/* ./src/float/FLT_MIN_EXP.c */
#define FLT_MIN_EXP                                                       (-125)
/* ./src/float/FLT_RADIX.c */
#define FLT_RADIX                                                            (2)
/* ./src/float/FLT_ROUNDS.c */
#define FLT_ROUNDS                                                  fegetround()
/* ./src/float/LDBL_DIG.c */
#define LDBL_DIG                                                            (15)
/* ./src/float/LDBL_EPSILON.c */
#define LDBL_EPSILON                                              (2.220446E-16)
/* ./src/float/LDBL_MANT_DIG.c */
#define LDBL_MANT_DIG                                                       (53)
/* ./src/float/LDBL_MAX.c */
#define LDBL_MAX                                                 (1.797693E+308)
/* ./src/float/LDBL_MAX_10_EXP.c */
#define LDBL_MAX_10_EXP                                                    (308)
/* ./src/float/LDBL_MAX_EXP.c */
#define LDBL_MAX_EXP                                                      (1024)
/* ./src/float/LDBL_MIN.c */
#define LDBL_MIN                                                 (2.225074E-308)
/* ./src/float/LDBL_MIN_10_EXP.c */
#define LDBL_MIN_10_EXP                                                    (-37)
/* ./src/float/LDBL_MIN_EXP.c */
#define LDBL_MIN_EXP                                                     (-1021)

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/float/DECIMAL_DIG.c */
#define DECIMAL_DIG                                                         (10)
/* ./src/float/FLT_EVAL_METHOD.c */
#define FLT_EVAL_METHOD                                                     (-1)
#endif


#endif

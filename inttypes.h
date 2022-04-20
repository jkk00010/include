#ifndef __INTTYPES_H__
#define __INTTYPES_H__

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

#if	!(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
#	error <inttypes.h> requires C99 or higher
#endif

#include <stdint.h>

#define PRIX16                                                              "hX"
#define PRIX32                                                              "lX"
#define PRIX64                                                             "llX"
#define PRIX8                                                              "hhX"
#define PRIXFAST16                                                          "hX"
#define PRIXFAST32                                                          "lX"
#define PRIXFAST64                                                         "llX"
#define PRIXFAST8                                                          "hhX"
#define PRIXLEAST16                                                         "hX"
#define PRIXLEAST32                                                         "lX"
#define PRIXLEAST64                                                        "llX"
#define PRIXLEAST8                                                         "hhX"
#define PRIXMAX                                                            "llX"

#if WORD_BIT == 64
#define PRIXPTR                                                            "llX"
#else
#define PRIXPTR                                                             "lX"
#endif

#define PRId16                                                              "hd"
#define PRId32                                                              "ld"
#define PRId64                                                             "lld"
#define PRId8                                                              "hhd"
#define PRIdFAST16                                                          "hd"
#define PRIdFAST32                                                          "ld"
#define PRIdFAST64                                                         "lld"
#define PRIdFAST8                                                          "hhd"
#define PRIdLEAST16                                                         "hd"
#define PRIdLEAST32                                                         "ld"
#define PRIdLEAST64                                                        "lld"
#define PRIdLEAST8                                                         "hhd"
#define PRIdMAX                                                            "lld"

#if WORD_BIT == 64
#define PRIdPTR                                                            "lld"
#else
#define PRIdPTR                                                             "ld"
#endif

#define PRIi16                                                              "hi"
#define PRIi32                                                              "li"
#define PRIi64                                                             "lli"
#define PRIi8                                                              "hhi"
#define PRIiFAST16                                                          "hi"
#define PRIiFAST32                                                          "li"
#define PRIiFAST64                                                         "lli"
#define PRIiFAST8                                                          "hhi"
#define PRIiLEAST16                                                         "hi"
#define PRIiLEAST32                                                         "li"
#define PRIiLEAST64                                                        "lli"
#define PRIiLEAST8                                                         "hhi"
#define PRIiMAX                                                            "lli"

#if WORD_BIT == 64
#define PRIiPTR                                                            "lli"
#else
#define PRIiPTR                                                             "li"
#endif

#define PRIo16                                                              "ho"
#define PRIo32                                                              "lo"
#define PRIo64                                                             "llo"
#define PRIo8                                                              "hho"
#define PRIoFAST16                                                          "ho"
#define PRIoFAST32                                                          "lo"
#define PRIoFAST64                                                         "llo"
#define PRIoFAST8                                                          "hho"
#define PRIoLEAST16                                                         "ho"
#define PRIoLEAST32                                                         "lo"
#define PRIoLEAST64                                                        "llo"
#define PRIoLEAST8                                                         "hho"
#define PRIoMAX                                                            "llo"

#if WORD_BIT == 64
#define PRIoPTR                                                            "llo"
#else
#define PRIoPTR                                                             "lo"
#endif

#define PRIu16                                                              "hu"
#define PRIu32                                                              "lu"
#define PRIu64                                                             "llu"
#define PRIu8                                                              "hhu"
#define PRIuFAST16                                                          "hu"
#define PRIuFAST32                                                          "lu"
#define PRIuFAST64                                                         "llu"
#define PRIuFAST8                                                          "hhu"
#define PRIuLEAST16                                                         "hu"
#define PRIuLEAST32                                                         "lu"
#define PRIuLEAST64                                                        "llu"
#define PRIuLEAST8                                                         "hhu"
#define PRIuMAX                                                            "llu"

#if WORD_BIT == 64
#define PRIuPTR                                                            "llu"
#else
#define PRIuPTR                                                             "lu"
#endif

#define PRIx16                                                              "hx"
#define PRIx32                                                              "lx"
#define PRIx64                                                             "llx"
#define PRIx8                                                              "hhx"
#define PRIxFAST16                                                          "hx"
#define PRIxFAST32                                                          "lx"
#define PRIxFAST64                                                         "llx"
#define PRIxFAST8                                                          "hhx"
#define PRIxLEAST16                                                         "hx"
#define PRIxLEAST32                                                         "lx"
#define PRIxLEAST64                                                        "llx"
#define PRIxLEAST8                                                         "hhx"
#define PRIxMAX                                                            "llx"

#if WORD_BIT == 64
#define PRIxPTR                                                            "llx"
#else
#define PRIxPTR                                                             "lx"
#endif

#define SCNX16                                                              "hX"
#define SCNX32                                                              "lX"
#define SCNX64                                                             "llX"
#define SCNX8                                                              "hhX"
#define SCNXFAST16                                                          "hX"
#define SCNXFAST32                                                          "lX"
#define SCNXFAST64                                                         "llX"
#define SCNXFAST8                                                          "hhX"
#define SCNXLEAST16                                                         "hX"
#define SCNXLEAST32                                                         "lX"
#define SCNXLEAST64                                                        "llX"
#define SCNXLEAST8                                                         "hhX"
#define SCNXMAX                                                            "llX"

#if WORD_BIT == 64
#define SCNXPTR                                                            "llX"
#else
#define SCNXPTR                                                             "lX"
#endif

#define SCNd16                                                              "hd"
#define SCNd32                                                              "ld"
#define SCNd64                                                             "lld"
#define SCNd8                                                              "hhd"
#define SCNdFAST16                                                          "hd"
#define SCNdFAST32                                                          "ld"
#define SCNdFAST64                                                         "lld"
#define SCNdFAST8                                                          "hhd"
#define SCNdLEAST16                                                         "hd"
#define SCNdLEAST32                                                         "ld"
#define SCNdLEAST64                                                        "lld"
#define SCNdLEAST8                                                         "hhd"
#define SCNdMAX                                                            "lld"

#if WORD_BIT == 64
#define SCNdPTR                                                            "lld"
#else
#define SCNdPTR                                                             "ld"
#endif

#define SCNi16                                                              "hi"
#define SCNi32                                                              "li"
#define SCNi64                                                             "lli"
#define SCNi8                                                              "hhi"
#define SCNiFAST16                                                          "hi"
#define SCNiFAST32                                                          "li"
#define SCNiFAST64                                                         "lli"
#define SCNiFAST8                                                          "hhi"
#define SCNiLEAST16                                                         "hi"
#define SCNiLEAST32                                                         "li"
#define SCNiLEAST64                                                        "lli"
#define SCNiLEAST8                                                         "hhi"
#define SCNiMAX                                                            "lli"

#if WORD_BIT == 64
#define SCNiPTR                                                            "lli"
#else
#define SCNiPTR                                                             "li"
#endif

#define SCNo16                                                              "ho"
#define SCNo32                                                              "lo"
#define SCNo64                                                             "llo"
#define SCNo8                                                              "hho"
#define SCNoFAST16                                                          "ho"
#define SCNoFAST32                                                          "lo"
#define SCNoFAST64                                                         "llo"
#define SCNoFAST8                                                          "hho"
#define SCNoLEAST16                                                         "ho"
#define SCNoLEAST32                                                         "lo"
#define SCNoLEAST64                                                        "llo"
#define SCNoLEAST8                                                         "hho"
#define SCNoMAX                                                            "llo"

#if WORD_BIT == 64
#define SCNoPTR                                                            "llo"
#else
#define SCNoPTR                                                             "lo"
#endif

#define SCNu16                                                              "hu"
#define SCNu32                                                              "lu"
#define SCNu64                                                             "llu"
#define SCNu8                                                              "hhu"
#define SCNuFAST16                                                          "hu"
#define SCNuFAST32                                                          "lu"
#define SCNuFAST64                                                         "llu"
#define SCNuFAST8                                                          "hhu"
#define SCNuLEAST16                                                         "hu"
#define SCNuLEAST32                                                         "lu"
#define SCNuLEAST64                                                        "llu"
#define SCNuLEAST8                                                         "hhu"
#define SCNuMAX                                                            "llu"

#if WORD_BIT == 64
#define SCNuPTR                                                            "llu"
#else
#define SCNuPTR                                                             "lu"
#endif

#define SCNx16                                                              "hx"
#define SCNx32                                                              "lx"
#define SCNx64                                                             "llx"
#define SCNx8                                                              "hhx"
#define SCNxFAST16                                                          "hx"
#define SCNxFAST32                                                          "lx"
#define SCNxFAST64                                                         "llx"
#define SCNxFAST8                                                          "hhx"
#define SCNxLEAST16                                                         "hx"
#define SCNxLEAST32                                                         "lx"
#define SCNxLEAST64                                                        "llx"
#define SCNxLEAST8                                                         "hhx"
#define SCNxMAX                                                            "llx"

#if WORD_BIT == 64
#define SCNxPTR                                                            "llx"
#else
#define SCNxPTR                                                             "lx"
#endif

typedef struct {
	intmax_t quot;
	intmax_t rem;
} imaxdiv_t;
typedef long long int intmax_t;
typedef unsigned long long int uintmax_t;

intmax_t imaxabs(intmax_t);
imaxdiv_t imaxdiv(intmax_t, intmax_t);
intmax_t strtoimax(const char * restrict, char ** restrict, int);
uintmax_t strtoumax(const char *restrict, char ** restrict, int);
intmax_t wcstoimax(const wchar_t * restrict, wchar_t ** restrict, int);
uintmax_t wcstoumax(const wchar_t * restrict, wchar_t ** restrict, int);

#endif

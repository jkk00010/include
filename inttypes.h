#ifndef __INTTYPES_H__
#define __INTTYPES_H__

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
/* ./src/inttypes/stdint.ref */
#include <stdint.h>
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/inttypes/PRIX16.c */
#define PRIX16                                                              "hX"
/* ./src/inttypes/PRIX32.c */
#define PRIX32                                                              "lX"
/* ./src/inttypes/PRIX64.c */
#define PRIX64                                                             "llX"
/* ./src/inttypes/PRIX8.c */
#define PRIX8                                                              "hhX"
/* ./src/inttypes/PRIXFAST16.c */
#define PRIXFAST16                                                          "hX"
/* ./src/inttypes/PRIXFAST32.c */
#define PRIXFAST32                                                          "lX"
/* ./src/inttypes/PRIXFAST64.c */
#define PRIXFAST64                                                         "llX"
/* ./src/inttypes/PRIXFAST8.c */
#define PRIXFAST8                                                          "hhX"
/* ./src/inttypes/PRIXLEAST16.c */
#define PRIXLEAST16                                                         "hX"
/* ./src/inttypes/PRIXLEAST32.c */
#define PRIXLEAST32                                                         "lX"
/* ./src/inttypes/PRIXLEAST64.c */
#define PRIXLEAST64                                                        "llX"
/* ./src/inttypes/PRIXLEAST8.c */
#define PRIXLEAST8                                                         "hhX"
/* ./src/inttypes/PRIXMAX.c */
#define PRIXMAX                                                            "llX"
/* ./src/inttypes/PRIXPTR.c */
#if WORD_BIT == 64
#define PRIXPTR                                                            "llX"
#else
#define PRIXPTR                                                             "lX"
#endif
/* ./src/inttypes/PRId16.c */
#define PRId16                                                              "hd"
/* ./src/inttypes/PRId32.c */
#define PRId32                                                              "ld"
/* ./src/inttypes/PRId64.c */
#define PRId64                                                             "lld"
/* ./src/inttypes/PRId8.c */
#define PRId8                                                              "hhd"
/* ./src/inttypes/PRIdFAST16.c */
#define PRIdFAST16                                                          "hd"
/* ./src/inttypes/PRIdFAST32.c */
#define PRIdFAST32                                                          "ld"
/* ./src/inttypes/PRIdFAST64.c */
#define PRIdFAST64                                                         "lld"
/* ./src/inttypes/PRIdFAST8.c */
#define PRIdFAST8                                                          "hhd"
/* ./src/inttypes/PRIdLEAST16.c */
#define PRIdLEAST16                                                         "hd"
/* ./src/inttypes/PRIdLEAST32.c */
#define PRIdLEAST32                                                         "ld"
/* ./src/inttypes/PRIdLEAST64.c */
#define PRIdLEAST64                                                        "lld"
/* ./src/inttypes/PRIdLEAST8.c */
#define PRIdLEAST8                                                         "hhd"
/* ./src/inttypes/PRIdMAX.c */
#define PRIdMAX                                                            "lld"
/* ./src/inttypes/PRIdPTR.c */
#if WORD_BIT == 64
#define PRIdPTR                                                            "lld"
#else
#define PRIdPTR                                                             "ld"
#endif
/* ./src/inttypes/PRIi16.c */
#define PRIi16                                                              "hi"
/* ./src/inttypes/PRIi32.c */
#define PRIi32                                                              "li"
/* ./src/inttypes/PRIi64.c */
#define PRIi64                                                             "lli"
/* ./src/inttypes/PRIi8.c */
#define PRIi8                                                              "hhi"
/* ./src/inttypes/PRIiFAST16.c */
#define PRIiFAST16                                                          "hi"
/* ./src/inttypes/PRIiFAST32.c */
#define PRIiFAST32                                                          "li"
/* ./src/inttypes/PRIiFAST64.c */
#define PRIiFAST64                                                         "lli"
/* ./src/inttypes/PRIiFAST8.c */
#define PRIiFAST8                                                          "hhi"
/* ./src/inttypes/PRIiLEAST16.c */
#define PRIiLEAST16                                                         "hi"
/* ./src/inttypes/PRIiLEAST32.c */
#define PRIiLEAST32                                                         "li"
/* ./src/inttypes/PRIiLEAST64.c */
#define PRIiLEAST64                                                        "lli"
/* ./src/inttypes/PRIiLEAST8.c */
#define PRIiLEAST8                                                         "hhi"
/* ./src/inttypes/PRIiMAX.c */
#define PRIiMAX                                                            "lli"
/* ./src/inttypes/PRIiPTR.c */
#if WORD_BIT == 64
#define PRIiPTR                                                            "lli"
#else
#define PRIiPTR                                                             "li"
#endif
/* ./src/inttypes/PRIo16.c */
#define PRIo16                                                              "ho"
/* ./src/inttypes/PRIo32.c */
#define PRIo32                                                              "lo"
/* ./src/inttypes/PRIo64.c */
#define PRIo64                                                             "llo"
/* ./src/inttypes/PRIo8.c */
#define PRIo8                                                              "hho"
/* ./src/inttypes/PRIoFAST16.c */
#define PRIoFAST16                                                          "ho"
/* ./src/inttypes/PRIoFAST32.c */
#define PRIoFAST32                                                          "lo"
/* ./src/inttypes/PRIoFAST64.c */
#define PRIoFAST64                                                         "llo"
/* ./src/inttypes/PRIoFAST8.c */
#define PRIoFAST8                                                          "hho"
/* ./src/inttypes/PRIoLEAST16.c */
#define PRIoLEAST16                                                         "ho"
/* ./src/inttypes/PRIoLEAST32.c */
#define PRIoLEAST32                                                         "lo"
/* ./src/inttypes/PRIoLEAST64.c */
#define PRIoLEAST64                                                        "llo"
/* ./src/inttypes/PRIoLEAST8.c */
#define PRIoLEAST8                                                         "hho"
/* ./src/inttypes/PRIoMAX.c */
#define PRIoMAX                                                            "llo"
/* ./src/inttypes/PRIoPTR.c */
#if WORD_BIT == 64
#define PRIoPTR                                                            "llo"
#else
#define PRIoPTR                                                             "lo"
#endif
/* ./src/inttypes/PRIu16.c */
#define PRIu16                                                              "hu"
/* ./src/inttypes/PRIu32.c */
#define PRIu32                                                              "lu"
/* ./src/inttypes/PRIu64.c */
#define PRIu64                                                             "llu"
/* ./src/inttypes/PRIu8.c */
#define PRIu8                                                              "hhu"
/* ./src/inttypes/PRIuFAST16.c */
#define PRIuFAST16                                                          "hu"
/* ./src/inttypes/PRIuFAST32.c */
#define PRIuFAST32                                                          "lu"
/* ./src/inttypes/PRIuFAST64.c */
#define PRIuFAST64                                                         "llu"
/* ./src/inttypes/PRIuFAST8.c */
#define PRIuFAST8                                                          "hhu"
/* ./src/inttypes/PRIuLEAST16.c */
#define PRIuLEAST16                                                         "hu"
/* ./src/inttypes/PRIuLEAST32.c */
#define PRIuLEAST32                                                         "lu"
/* ./src/inttypes/PRIuLEAST64.c */
#define PRIuLEAST64                                                        "llu"
/* ./src/inttypes/PRIuLEAST8.c */
#define PRIuLEAST8                                                         "hhu"
/* ./src/inttypes/PRIuMAX.c */
#define PRIuMAX                                                            "llu"
/* ./src/inttypes/PRIuPTR.c */
#if WORD_BIT == 64
#define PRIuPTR                                                            "llu"
#else
#define PRIuPTR                                                             "lu"
#endif
/* ./src/inttypes/PRIx16.c */
#define PRIx16                                                              "hx"
/* ./src/inttypes/PRIx32.c */
#define PRIx32                                                              "lx"
/* ./src/inttypes/PRIx64.c */
#define PRIx64                                                             "llx"
/* ./src/inttypes/PRIx8.c */
#define PRIx8                                                              "hhx"
/* ./src/inttypes/PRIxFAST16.c */
#define PRIxFAST16                                                          "hx"
/* ./src/inttypes/PRIxFAST32.c */
#define PRIxFAST32                                                          "lx"
/* ./src/inttypes/PRIxFAST64.c */
#define PRIxFAST64                                                         "llx"
/* ./src/inttypes/PRIxFAST8.c */
#define PRIxFAST8                                                          "hhx"
/* ./src/inttypes/PRIxLEAST16.c */
#define PRIxLEAST16                                                         "hx"
/* ./src/inttypes/PRIxLEAST32.c */
#define PRIxLEAST32                                                         "lx"
/* ./src/inttypes/PRIxLEAST64.c */
#define PRIxLEAST64                                                        "llx"
/* ./src/inttypes/PRIxLEAST8.c */
#define PRIxLEAST8                                                         "hhx"
/* ./src/inttypes/PRIxMAX.c */
#define PRIxMAX                                                            "llx"
/* ./src/inttypes/PRIxPTR.c */
#if WORD_BIT == 64
#define PRIxPTR                                                            "llx"
#else
#define PRIxPTR                                                             "lx"
#endif
/* ./src/inttypes/SCNX16.c */
#define SCNX16                                                              "hX"
/* ./src/inttypes/SCNX32.c */
#define SCNX32                                                              "lX"
/* ./src/inttypes/SCNX64.c */
#define SCNX64                                                             "llX"
/* ./src/inttypes/SCNX8.c */
#define SCNX8                                                              "hhX"
/* ./src/inttypes/SCNXFAST16.c */
#define SCNXFAST16                                                          "hX"
/* ./src/inttypes/SCNXFAST32.c */
#define SCNXFAST32                                                          "lX"
/* ./src/inttypes/SCNXFAST64.c */
#define SCNXFAST64                                                         "llX"
/* ./src/inttypes/SCNXFAST8.c */
#define SCNXFAST8                                                          "hhX"
/* ./src/inttypes/SCNXLEAST16.c */
#define SCNXLEAST16                                                         "hX"
/* ./src/inttypes/SCNXLEAST32.c */
#define SCNXLEAST32                                                         "lX"
/* ./src/inttypes/SCNXLEAST64.c */
#define SCNXLEAST64                                                        "llX"
/* ./src/inttypes/SCNXLEAST8.c */
#define SCNXLEAST8                                                         "hhX"
/* ./src/inttypes/SCNXMAX.c */
#define SCNXMAX                                                            "llX"
/* ./src/inttypes/SCNXPTR.c */
#if WORD_BIT == 64
#define SCNXPTR                                                            "llX"
#else
#define SCNXPTR                                                             "lX"
#endif
/* ./src/inttypes/SCNd16.c */
#define SCNd16                                                              "hd"
/* ./src/inttypes/SCNd32.c */
#define SCNd32                                                              "ld"
/* ./src/inttypes/SCNd64.c */
#define SCNd64                                                             "lld"
/* ./src/inttypes/SCNd8.c */
#define SCNd8                                                              "hhd"
/* ./src/inttypes/SCNdFAST16.c */
#define SCNdFAST16                                                          "hd"
/* ./src/inttypes/SCNdFAST32.c */
#define SCNdFAST32                                                          "ld"
/* ./src/inttypes/SCNdFAST64.c */
#define SCNdFAST64                                                         "lld"
/* ./src/inttypes/SCNdFAST8.c */
#define SCNdFAST8                                                          "hhd"
/* ./src/inttypes/SCNdLEAST16.c */
#define SCNdLEAST16                                                         "hd"
/* ./src/inttypes/SCNdLEAST32.c */
#define SCNdLEAST32                                                         "ld"
/* ./src/inttypes/SCNdLEAST64.c */
#define SCNdLEAST64                                                        "lld"
/* ./src/inttypes/SCNdLEAST8.c */
#define SCNdLEAST8                                                         "hhd"
/* ./src/inttypes/SCNdMAX.c */
#define SCNdMAX                                                            "lld"
/* ./src/inttypes/SCNdPTR.c */
#if WORD_BIT == 64
#define SCNdPTR                                                            "lld"
#else
#define SCNdPTR                                                             "ld"
#endif
/* ./src/inttypes/SCNi16.c */
#define SCNi16                                                              "hi"
/* ./src/inttypes/SCNi32.c */
#define SCNi32                                                              "li"
/* ./src/inttypes/SCNi64.c */
#define SCNi64                                                             "lli"
/* ./src/inttypes/SCNi8.c */
#define SCNi8                                                              "hhi"
/* ./src/inttypes/SCNiFAST16.c */
#define SCNiFAST16                                                          "hi"
/* ./src/inttypes/SCNiFAST32.c */
#define SCNiFAST32                                                          "li"
/* ./src/inttypes/SCNiFAST64.c */
#define SCNiFAST64                                                         "lli"
/* ./src/inttypes/SCNiFAST8.c */
#define SCNiFAST8                                                          "hhi"
/* ./src/inttypes/SCNiLEAST16.c */
#define SCNiLEAST16                                                         "hi"
/* ./src/inttypes/SCNiLEAST32.c */
#define SCNiLEAST32                                                         "li"
/* ./src/inttypes/SCNiLEAST64.c */
#define SCNiLEAST64                                                        "lli"
/* ./src/inttypes/SCNiLEAST8.c */
#define SCNiLEAST8                                                         "hhi"
/* ./src/inttypes/SCNiMAX.c */
#define SCNiMAX                                                            "lli"
/* ./src/inttypes/SCNiPTR.c */
#if WORD_BIT == 64
#define SCNiPTR                                                            "lli"
#else
#define SCNiPTR                                                             "li"
#endif
/* ./src/inttypes/SCNo16.c */
#define SCNo16                                                              "ho"
/* ./src/inttypes/SCNo32.c */
#define SCNo32                                                              "lo"
/* ./src/inttypes/SCNo64.c */
#define SCNo64                                                             "llo"
/* ./src/inttypes/SCNo8.c */
#define SCNo8                                                              "hho"
/* ./src/inttypes/SCNoFAST16.c */
#define SCNoFAST16                                                          "ho"
/* ./src/inttypes/SCNoFAST32.c */
#define SCNoFAST32                                                          "lo"
/* ./src/inttypes/SCNoFAST64.c */
#define SCNoFAST64                                                         "llo"
/* ./src/inttypes/SCNoFAST8.c */
#define SCNoFAST8                                                          "hho"
/* ./src/inttypes/SCNoLEAST16.c */
#define SCNoLEAST16                                                         "ho"
/* ./src/inttypes/SCNoLEAST32.c */
#define SCNoLEAST32                                                         "lo"
/* ./src/inttypes/SCNoLEAST64.c */
#define SCNoLEAST64                                                        "llo"
/* ./src/inttypes/SCNoLEAST8.c */
#define SCNoLEAST8                                                         "hho"
/* ./src/inttypes/SCNoMAX.c */
#define SCNoMAX                                                            "llo"
/* ./src/inttypes/SCNoPTR.c */
#if WORD_BIT == 64
#define SCNoPTR                                                            "llo"
#else
#define SCNoPTR                                                             "lo"
#endif
/* ./src/inttypes/SCNu16.c */
#define SCNu16                                                              "hu"
/* ./src/inttypes/SCNu32.c */
#define SCNu32                                                              "lu"
/* ./src/inttypes/SCNu64.c */
#define SCNu64                                                             "llu"
/* ./src/inttypes/SCNu8.c */
#define SCNu8                                                              "hhu"
/* ./src/inttypes/SCNuFAST16.c */
#define SCNuFAST16                                                          "hu"
/* ./src/inttypes/SCNuFAST32.c */
#define SCNuFAST32                                                          "lu"
/* ./src/inttypes/SCNuFAST64.c */
#define SCNuFAST64                                                         "llu"
/* ./src/inttypes/SCNuFAST8.c */
#define SCNuFAST8                                                          "hhu"
/* ./src/inttypes/SCNuLEAST16.c */
#define SCNuLEAST16                                                         "hu"
/* ./src/inttypes/SCNuLEAST32.c */
#define SCNuLEAST32                                                         "lu"
/* ./src/inttypes/SCNuLEAST64.c */
#define SCNuLEAST64                                                        "llu"
/* ./src/inttypes/SCNuLEAST8.c */
#define SCNuLEAST8                                                         "hhu"
/* ./src/inttypes/SCNuMAX.c */
#define SCNuMAX                                                            "llu"
/* ./src/inttypes/SCNuPTR.c */
#if WORD_BIT == 64
#define SCNuPTR                                                            "llu"
#else
#define SCNuPTR                                                             "lu"
#endif
/* ./src/inttypes/SCNx16.c */
#define SCNx16                                                              "hx"
/* ./src/inttypes/SCNx32.c */
#define SCNx32                                                              "lx"
/* ./src/inttypes/SCNx64.c */
#define SCNx64                                                             "llx"
/* ./src/inttypes/SCNx8.c */
#define SCNx8                                                              "hhx"
/* ./src/inttypes/SCNxFAST16.c */
#define SCNxFAST16                                                          "hx"
/* ./src/inttypes/SCNxFAST32.c */
#define SCNxFAST32                                                          "lx"
/* ./src/inttypes/SCNxFAST64.c */
#define SCNxFAST64                                                         "llx"
/* ./src/inttypes/SCNxFAST8.c */
#define SCNxFAST8                                                          "hhx"
/* ./src/inttypes/SCNxLEAST16.c */
#define SCNxLEAST16                                                         "hx"
/* ./src/inttypes/SCNxLEAST32.c */
#define SCNxLEAST32                                                         "lx"
/* ./src/inttypes/SCNxLEAST64.c */
#define SCNxLEAST64                                                        "llx"
/* ./src/inttypes/SCNxLEAST8.c */
#define SCNxLEAST8                                                         "hhx"
/* ./src/inttypes/SCNxMAX.c */
#define SCNxMAX                                                            "llx"
/* ./src/inttypes/SCNxPTR.c */
#if WORD_BIT == 64
#define SCNxPTR                                                            "llx"
#else
#define SCNxPTR                                                             "lx"
#endif
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/inttypes/imaxdiv_t.c */
#ifndef __TYPE_imaxdiv_t_DEFINED__
#define __TYPE_imaxdiv_t_DEFINED__
typedef struct {
	intmax_t quot;
	intmax_t rem;
} imaxdiv_t;
#endif

/* ./src/inttypes/intmax_t.c */
#ifndef __TYPE_intmax_t_DEFINED__
#define __TYPE_intmax_t_DEFINED__
typedef long long int intmax_t;
#endif

/* ./src/inttypes/uintmax_t.c */
#ifndef __TYPE_uintmax_t_DEFINED__
#define __TYPE_uintmax_t_DEFINED__
typedef unsigned long long int uintmax_t;
#endif

#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/inttypes/imaxabs.c */
intmax_t imaxabs(intmax_t __j);
/* ./src/inttypes/imaxdiv.c */
imaxdiv_t imaxdiv(intmax_t __numer, intmax_t __denom);
/* ./src/inttypes/strtoimax.c */
intmax_t strtoimax(const char * restrict __nptr, char ** restrict __endptr, int __base);
/* ./src/inttypes/strtoumax.c */
uintmax_t strtoumax(const char *restrict __nptr, char ** restrict __endptr, int __base);
/* ./src/inttypes/wcstoimax.c */
intmax_t wcstoimax(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
/* ./src/inttypes/wcstoumax.c */
uintmax_t wcstoumax(const wchar_t * restrict __nptr, wchar_t ** restrict __endptr, int __base);
#endif


#endif

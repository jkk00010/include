#ifndef __STDC_VERSION_STDIO_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_STDIO_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_STDIO_H__ 1
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

#define BUFSIZ                                                            (4096)
#define EOF                                                                 (-1)
#define FILENAME_MAX                                                       (255)
#define FOPEN_MAX                                                            (8)
#define L_tmpnam                                                           (255)
#define SEEK_CUR                                                             (1)
#define SEEK_END                                                             (2)
#define SEEK_SET                                                             (3)
#define TMP_MAX                                                          (10000)
#define _IOFBF                                                               (1)
#define _IOLBF                                                               (2)
#define _IONBF                                                               (3)
#define stderr                                                          __stderr
#define stdin                                                            __stdin
#define stdout                                                          __stdout
#define NULL                                                          ((void*)0)

#ifndef __TYPE_FILE_DEFINED__
#define __TYPE_FILE_DEFINED__
typedef struct __FILE                                                      FILE;
#endif

#ifndef __TYPE_fpos_t_DEFINED__
#define __TYPE_fpos_t_DEFINED__
typedef struct __fpos_t *                                                fpos_t;
#endif

#ifndef __TYPE_va_list_DEFINED__
#define __TYPE_va_list_DEFINED__
typedef __builtin_va_list                                               va_list;
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


extern FILE *__stderr;
extern FILE *__stdin;
extern FILE *__stdout;

void clearerr(FILE * __stream);
int fclose(FILE *__stream);
int feof(FILE *__stream);
int ferror(FILE *__stream);
int fflush(FILE *__stream);
int fgetc(FILE *__stream);
int fgetpos(FILE * restrict __stream, fpos_t * restrict __pos);
char * fgets(char * restrict __s, int __n, FILE * restrict __stream);
FILE * fopen(const char * restrict __filename, const char * restrict __mode);
int fprintf(FILE * restrict __stream, const char * restrict __format, ...);
int fputc(int __c, FILE *__stream);
int fputs(const char * restrict __s, FILE * restrict __stream);
size_t fread(void * restrict __ptr, size_t __size, size_t __nmemb, FILE * restrict __stream);
FILE * freopen(const char * restrict __filename, const char * restrict __mode, FILE * restrict __stream);
int fscanf(FILE * restrict __stream, const char * restrict __format, ...);
int fseek(FILE *__stream, long int __offset, int __whence);
int fsetpos(FILE *__stream, const fpos_t *__pos);
long int ftell(FILE *__stream);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nmemb, FILE * restrict __stream);
int getc(FILE *__stream);
int getchar(void);
void perror(const char *__s);
int printf(const char *__format, ...);
int putc(int __c, FILE *__stream);
int putchar(int __c);
int puts(const char *__s);
int remove(const char *__filename);
int rename(const char *__old, const char *__new);
void rewind(FILE *__stream);
int scanf(const char * restrict __format, ...);
void setbuf(FILE * restrict __stream, char * restrict __buf);
int setvbuf(FILE *__stream, char *__buf, int __mode, size_t __size);
int sprintf(char * restrict __s, const char * restrict __format, ...);
int sscanf(const char * restrict __s, const char * restrict __format, ...);
FILE * tmpfile(void);
char * tmpnam(char *__s);
int ungetc(int __c, FILE *__stream);
int vfprintf(FILE * restrict __stream, const char * restrict __format, va_list __arg);
int vprintf(const char * restrict __format, va_list __arg);
int vsprintf(char *__s, const char *__format, va_list __arg);

#if	(!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
char * gets(char *__s);
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
int snprintf(char * restrict __s, size_t __n, const char * restrict __format, ...);
int vfscanf(FILE * restrict __stream, const char * restrict __format, va_list __arg);
int vscanf(const char * restrict __format, va_list __arg);
int vsnprintf(char * restrict __s, size_t __n, const char *__format, va_list __arg);
int vsscanf(const char * restrict __s, const char * restrict __format, va_list __arg);
#endif

#ifdef __STDC_WANT_LIB_EXT1__
/* L_tmpnam_s */
/* TMP_MAX_S */
typedef int errno_t;
typedef size_t rsize_t;
errno_t tmpfile_s(FILE * restrict * restrict streamptr);
errno_t tmpnam_s(char *s, rsize_t maxsize);
errno_t fopen_s(FILE * restrict * restrict streamptr, const char * restrict filename, const char * restrict mode);
errno_t freopen_s(FILE * restrict * restrict newstreamptr, const char * restrict filename, const char * restrict mode, FILE * restrict stream);
int fprintf_s(FILE * restrict stream, const char * restrict format, ...);
int fscanf_s(FILE * restrict stream, const char * restrict format, ...);
int printf_s(const char * restrict format, ...);
int scanf_s(const char * restrict format, ...);
int snprintf_s(char * restrict s, rsize_t n, const char * restrict format, ...);
int sprintf_s(char * restrict s, rsize_t n, const char * restrict format, ...);
int sscanf_s(const char * restrict s, const char * restrict format, ...);
int vfprintf_s(FILE * restrict stream, const char * restrict format, va_list arg);
int vfscanf_s(FILE * restrict stream, const char * restrict format, va_list arg);
int vprintf_s(const char * restrict format, va_list arg);
int vscanf_s(const char * restrict format, va_list arg);
int vsnprintf_s(char * restrict s, rsize_t n, const char * restrict format, va_list arg);
int vsprintf_s(char * restrict s, rsize_t n, const char * restrict format, va_list arg);
int vsscanf_s(const char * restrict s, const char * restrict format, va_list arg);
char *gets_s(char *s, rsize_t n);
#endif

#endif

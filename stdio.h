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
#define clearerr(__s) \
	__checked(__FILE__, __func__, __LINE__, clearerr, __s)

int fclose(FILE *__stream);
#define fclose(__s) \
	__checked_i(__FILE__, __func__, __LINE__, fclose, __s)

int feof(FILE *__stream);
#define feof(__s) \
	__checked_i(__FILE__, __func__, __LINE__, feof, __s)

int ferror(FILE *__stream);
#define ferror(__s) \
	__checked_i(__FILE__, __func__, __LINE__, ferror, __s)

int fflush(FILE *__stream);
#define fflush(__s) \
	__checked_i(__FILE__, __func__, __LINE__, fflush, __s)

int fgetc(FILE *__stream);
#define fgetc(__s) \
	__checked_i(__FILE__, __func__, __LINE__, fgetc, __s)

int fgetpos(FILE * restrict __stream, fpos_t * restrict __pos);
#define fgetpos(__s, __p) \
	__checked_i(__FILE__, __func__, __LINE__, fgetpos, __s, __p)

char * fgets(char * restrict __s, int __n, FILE * restrict __stream);
#define fgets(__s, __n, __f) \
	(char*)__checked_p(__FILE__, __func__, __LINE__, fgets, __s, __n, __f)

FILE * fopen(const char * restrict __filename, const char * restrict __mode);
#define fopen(__n, __m) \
	(FILE*)__checked_p(__FILE__, __func__, __LINE__, fopen, __n, __m)

int fprintf(FILE * restrict __stream, const char * restrict __format, ...);
/* TODO */

int fputc(int __c, FILE *__stream);
#define fputc(__c, __f) \
	__checked_i(__FILE__, __func__, __LINE__, fputc, __c, __f)

int fputs(const char * restrict __s, FILE * restrict __stream);
#define fputs(__s, __f) \
	__checked_i(__FILE__, __func__, __LINE__, fputs, __s, __f)

size_t fread(void * restrict __ptr, size_t __size, size_t __nmemb, FILE * restrict __stream);
#define fread(__p, __s, __n, __f) \
	__checked_s(__FILE__, __func__, __LINE__, fread, __p, __s, __n, __f)

FILE * freopen(const char * restrict __filename, const char * restrict __mode, FILE * restrict __stream);
#define freopen(__n, __m, __f) \
	__checked_p(__FILE__, __func__, __LINE__, freopen, __n, __m, __f)

int fscanf(FILE * restrict __stream, const char * restrict __format, ...);
/* TODO */

int fseek(FILE *__stream, long int __offset, int __whence);
#define fseek(__s, __o, __w) \
	__checked_i(__FILE__, __func__, __LINE__, fseek, __s, __o, __w)

int fsetpos(FILE *__stream, const fpos_t *__pos);
#define fsetpos(__s, __p) \
	__checked_i(__FILE__, __func__, __LINE__, fsetpos, __s, __p)

long int ftell(FILE *__stream);
#define ftell(__s) \
	__checked_l(__FILE__, __func__, __LINE__, ftell, __s)

size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nmemb, FILE * restrict __stream);
#define fwrite(__p, __s, __n, __f) \
	__checked_s(__FILE__, __func__, __LINE__, fwrite, __p, __s, __n, __f)

int getc(FILE *__stream);
#define getc(__s) \
	__checked_i(__FILE__, __func__, __LINE__, getc, __s)

int getchar(void);
#define getchar() \
	__checked_i(__FILE__, __func__, __LINE__, getchar)

void perror(const char *__s);
#define perror(__s) \
	__checked(__FILE__, __func__, __LINE__, perror, __s)

int printf(const char *__format, ...);
/* TODO */

int putc(int __c, FILE *__stream);
#define putc(__c, __s) \
	__checked_i(__FILE__, __func__, __LINE__, putc, __c, __s)

int putchar(int __c);
#define putchar(__c) \
	__checked_i(__FILE__, __func__, __LINE__, putchar, __c)

int puts(const char *__s);
#define puts(__s) \
	__checked_i(__FILE__, __func__, __LINE__, puts, __s)

int remove(const char *__filename);
#define remove(__n) \
	__checked_i(__FILE__, __func__, __LINE__, remove, __n)

int rename(const char *__old, const char *__new);
#define rename(__o, __n) \
	__checked_i(__FILE__, __func__, __LINE__, rename, __o, __n)

void rewind(FILE *__stream);
#define clearerr(__s) \
	__checked(__FILE__, __func__, __LINE__, clearerr, __s)

int scanf(const char * restrict __format, ...);
/* TODO */

void setbuf(FILE * restrict __stream, char * restrict __buf);
#define setbuf(__s, __b) \
	__checked(__FILE__, __func__, __LINE__, setbuf, __s, __b)

int setvbuf(FILE *__stream, char *__buf, int __mode, size_t __size);
#define setvbuf(__f, __b, __m, __s) \
	__checked_i(__FILE__, __func__, __LINE__, setvbuf, __f, __b, __m, __s)

int sprintf(char * restrict __s, const char * restrict __format, ...);
/* TODO */

int sscanf(const char * restrict __s, const char * restrict __format, ...);
/* TODO */

FILE * tmpfile(void);
#define tmpfile() \
	__checked_p(__FILE__, __func__, __LINE__, tmpfile)

char * tmpnam(char *__s);
#define tmpnam(__s) \
	__checked_p(__FILE__, __func__, __LINE__, tmpnam, __s)

int ungetc(int __c, FILE *__stream);
#define fputc(__c, __f) \
	__checked_i(__FILE__, __func__, __LINE__, fputc, __c, __f)

int vfprintf(FILE * restrict __stream, const char * restrict __format, va_list __arg);
/* TODO */

int vprintf(const char * restrict __format, va_list __arg);
/* TODO */

int vsprintf(char *__s, const char *__format, va_list __arg);
/* TODO */


#if	(!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
char * gets(char *__s);
#define gets(__s) \
	__checked_p(__FILE__, __func__, __LINE__, gets, __s)

#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
int snprintf(char * restrict __s, size_t __n, const char * restrict __format, ...);
/* TODO */

int vfscanf(FILE * restrict __stream, const char * restrict __format, va_list __arg);
/* TODO */

int vscanf(const char * restrict __format, va_list __arg);
/* TODO */

int vsnprintf(char * restrict __s, size_t __n, const char *__format, va_list __arg);
/* TODO */

int vsscanf(const char * restrict __s, const char * restrict __format, va_list __arg);
/* TODO */

#endif

#endif

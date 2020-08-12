#ifndef __STDIO_H__
#define __STDIO_H__

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

#if defined _XOPEN_SOURCE && _XOPEN_SOURCE - 1 < 0
#undef _XOPEN_SOURCE
#define _XOPEN_SOURCE 400
#endif

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

/* ./src/stdio/BUFSIZ.c */
#define BUFSIZ                                                            (4096)
/* ./src/stdio/EOF.c */
#define EOF                                                                 (-1)
/* ./src/stdio/FILENAME_MAX.c */
#define FILENAME_MAX                                                       (255)
/* ./src/stdio/FOPEN_MAX.c */
#define FOPEN_MAX                                                            (8)
/* ./src/stdio/L_tmpnam.c */
#define L_tmpnam                                                           (255)
/* ./src/stdio/SEEK_CUR.c */
#define SEEK_CUR                                                             (1)
/* ./src/stdio/SEEK_END.c */
#define SEEK_END                                                             (2)
/* ./src/stdio/SEEK_SET.c */
#define SEEK_SET                                                             (3)
/* ./src/stdio/TMP_MAX.c */
#define TMP_MAX                                                          (10000)
/* ./src/stdio/_IOFBF.c */
#define _IOFBF                                                               (1)
/* ./src/stdio/_IOLBF.c */
#define _IOLBF                                                               (2)
/* ./src/stdio/_IONBF.c */
#define _IONBF                                                               (3)
/* ./src/stdio/stderr.c */
#define stderr                                                          __stderr
/* ./src/stdio/stdin.c */
#define stdin                                                            __stdin
/* ./src/stdio/stdout.c */
#define stdout                                                          __stdout
/* src/stddef/NULL.c */
#define NULL                                                          ((void*)0)

#if	(defined _POSIX_SOURCE)
/* ./src/stdio/L_ctermid.c */
#define L_ctermid                                                          (255)
#endif

#if	(defined _POSIX_SOURCE && (!defined _POSIX_C_SOURCE || _POSIX_C_SOURCE < 200112))
/* ./src/stdio/L_cuserid.c */
#define L_cuserid                                                          (255)
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/stdio/P_tmpdir.c */
#define P_tmpdir                                                          "/tmp"
#endif

/* ./src/stdio/FILE.c */
#ifndef __TYPE_FILE_DEFINED__
#define __TYPE_FILE_DEFINED__
typedef struct __FILE                                                      FILE;
#endif

/* ./src/stdio/fpos_t.c */
#ifndef __TYPE_fpos_t_DEFINED__
#define __TYPE_fpos_t_DEFINED__
typedef struct __fpos_t *                                                fpos_t;
#endif

/* src/stdarg/va_list.c */
#ifndef __TYPE_va_list_DEFINED__
#define __TYPE_va_list_DEFINED__
typedef __builtin_va_list                                               va_list;
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


/* ./src/stdio/__stderr.c */
extern FILE *__stderr;
/* ./src/stdio/__stdin.c */
extern FILE *__stdin;
/* ./src/stdio/__stdout.c */
extern FILE *__stdout;

#if	(defined _XOPEN_SOURCE)
/* src/unistd/optarg.c */
extern char * optarg;
/* src/unistd/opterr.c */
extern int opterr;
/* src/unistd/optind.c */
extern int optind;
/* src/unistd/optopt.c */
extern int optopt;
#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

/* ./src/stdio/clearerr.c */
void clearerr(FILE * __stream);
/* ./src/stdio/fclose.c */
int fclose(FILE *__stream);
/* ./src/stdio/feof.c */
int feof(FILE *__stream);
/* ./src/stdio/ferror.c */
int ferror(FILE *__stream);
/* ./src/stdio/fflush.c */
int fflush(FILE *__stream);
/* ./src/stdio/fgetc.c */
int fgetc(FILE *__stream);
/* ./src/stdio/fgetpos.c */
int fgetpos(FILE * restrict __stream, fpos_t * restrict __pos);
/* ./src/stdio/fgets.c */
char * fgets(char * restrict __s, int __n, FILE * restrict __stream);
/* ./src/stdio/fopen.c */
FILE * fopen(const char * restrict __filename, const char * restrict __mode);
/* ./src/stdio/fprintf.c */
int fprintf(FILE * restrict __stream, const char * restrict __format, ...);
/* ./src/stdio/fputc.c */
int fputc(int __c, FILE *__stream);
/* ./src/stdio/fputs.c */
int fputs(const char * restrict __s, FILE * restrict __stream);
/* ./src/stdio/fread.c */
size_t fread(void * restrict __ptr, size_t __size, size_t __nmemb, FILE * restrict __stream);
/* ./src/stdio/freopen.c */
FILE * freopen(const char * restrict __filename, const char * restrict __mode, FILE * restrict __stream);
/* ./src/stdio/fscanf.c */
int fscanf(FILE * restrict __stream, const char * restrict __format, ...);
/* ./src/stdio/fseek.c */
int fseek(FILE *__stream, long int __offset, int __whence);
/* ./src/stdio/fsetpos.c */
int fsetpos(FILE *__stream, const fpos_t *__pos);
/* ./src/stdio/ftell.c */
long int ftell(FILE *__stream);
/* ./src/stdio/fwrite.c */
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nmemb, FILE * restrict __stream);
/* ./src/stdio/getc.c */
int getc(FILE *__stream);
/* ./src/stdio/getchar.c */
int getchar(void);
/* ./src/stdio/perror.c */
void perror(const char *__s);
/* ./src/stdio/printf.c */
int printf(const char *__format, ...);
/* ./src/stdio/putc.c */
int putc(int __c, FILE *__stream);
/* ./src/stdio/putchar.c */
int putchar(int __c);
/* ./src/stdio/puts.c */
int puts(const char *__s);
/* ./src/stdio/remove.c */
int remove(const char *__filename);
/* ./src/stdio/rename.c */
int rename(const char *__old, const char *__new);
/* ./src/stdio/rewind.c */
void rewind(FILE *__stream);
/* ./src/stdio/scanf.c */
int scanf(const char * restrict __format, ...);
/* ./src/stdio/setbuf.c */
void setbuf(FILE * restrict __stream, char * restrict __buf);
/* ./src/stdio/setvbuf.c */
int setvbuf(FILE *__stream, char *__buf, int __mode, size_t __size);
/* ./src/stdio/sprintf.c */
int sprintf(char * restrict __s, const char * restrict __format, ...);
/* ./src/stdio/sscanf.c */
int sscanf(const char * restrict __s, const char * restrict __format, ...);
/* ./src/stdio/tmpfile.c */
FILE * tmpfile(void);
/* ./src/stdio/tmpnam.c */
char * tmpnam(char *__s);
/* ./src/stdio/ungetc.c */
int ungetc(int __c, FILE *__stream);
/* ./src/stdio/vfprintf.c */
int vfprintf(FILE * restrict __stream, const char * restrict __format, va_list __arg);
/* ./src/stdio/vprintf.c */
int vprintf(const char * restrict __format, va_list __arg);
/* ./src/stdio/vsprintf.c */
int vsprintf(char *__s, const char *__format, va_list __arg);

#if	(!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
/* ./src/stdio/gets.c */
char * gets(char *__s);
#endif

#if	(defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__)
/* ./src/stdio/snprintf.c */
int snprintf(char * restrict __s, size_t __n, const char * restrict __format, ...);
/* ./src/stdio/vfscanf.c */
int vfscanf(FILE * restrict __stream, const char * restrict __format, va_list __arg);
/* ./src/stdio/vscanf.c */
int vscanf(const char * restrict __format, va_list __arg);
/* ./src/stdio/vsnprintf.c */
int vsnprintf(char * restrict __s, size_t __n, const char *__format, va_list __arg);
/* ./src/stdio/vsscanf.c */
int vsscanf(const char * restrict __s, const char * restrict __format, va_list __arg);
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/stdio/fdopen.c */
FILE * fdopen(int __fildes, const char * __mode);
/* ./src/stdio/fileno.c */
int fileno(FILE * __stream);
/* src/unistd/ctermid.c */
char * ctermid(char * __s);
#endif

#if	(defined _POSIX_C_SOURCE && 2 <= _POSIX_C_SOURCE)
/* ./src/stdio/pclose.c */
int pclose(FILE * __stream);
/* ./src/stdio/popen.c */
FILE * popen(const char * __command, const char * __mode);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/stdio/tempnam.c */
char * tempnam(const char * __dir, const char * __pfx);
/* src/unistd/getopt.c */
int getopt(int __argc, char * const argv[], const char *__optstring);
#endif

#if	(defined _XOPEN_SOURCE && _XOPEN_SOURCE < 600)
/* ./src/stdio/getw.c */
int getw(FILE *__stream);
/* ./src/stdio/putw.c */
int putw(int __w, FILE *__stream);
/* src/unistd/cuserid.c */
char *cuserid(char *__s);
#endif


#endif

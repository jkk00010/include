#ifndef __UTMPX_H__
#define __UTMPX_H__

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

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/utmpx/BOOT_TIME.c */
#define BOOT_TIME /* TODO */
/* ./src/utmpx/DEAD_PROCESS.c */
#define DEAD_PROCESS /* TODO */
/* ./src/utmpx/EMPTY.c */
#define EMPTY /* TODO */
/* ./src/utmpx/INIT_PROCESS.c */
#define INIT_PROCESS /* TODO */
/* ./src/utmpx/LOGIN_PROCESS.c */
#define LOGIN_PROCESS /* TODO */
/* ./src/utmpx/NEW_TIME.c */
#define NEW_TIME /* TODO */
/* ./src/utmpx/OLD_TIME.c */
#define OLD_TIME /* TODO */
/* ./src/utmpx/USER_PROCESS.c */
#define USER_PROCESS /* TODO */
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/utmpx/struct_utmpx.c */
#ifndef __TYPE_struct_utmpx_DEFINED__
#define __TYPE_struct_utmpx_DEFINED__
struct utmpx {
	char ut_user[100];
	char ut_id[100];
	char ut_line[100];
	pid_t ut_pid;
	short ut_type;
	struct timeval ut_tv;
};
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/utmpx/endutxent.c */
void endutxent(void);
/* ./src/utmpx/getutxent.c */
struct utmpx * getutxent(void);
/* ./src/utmpx/getutxid.c */
struct utmpx * getutxid(const struct utmpx *__id);
/* ./src/utmpx/getutxline.c */
struct utmpx * getutxline(const struct utmpx *__line);
/* ./src/utmpx/pututxline.c */
struct utmpx * pututxline(const struct utmpx *__utmpx);
/* ./src/utmpx/setutxent.c */
void setutxent(void);
#endif


#endif

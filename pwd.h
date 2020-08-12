#ifndef __PWD_H__
#define __PWD_H__

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
#		undef _XOPEN_SOURCE
#		define _XOPEN_SOURCE 400
#		define _POSIX_C_SOURCE 2
#	endif
#endif

#if defined _POSIX_C_SOURCE && !defined _POSIX_SOURCE
#	define _POSIX_SOURCE
#endif

#if	(defined _XOPEN_SOURCE)
/* src/sys/types/gid_t.c */
#ifndef __TYPE_gid_t_DEFINED__
#define __TYPE_gid_t_DEFINED__
typedef                                                        unsigned long int
	gid_t;
#endif

/* src/sys/types/uid_t.c */
#ifndef __TYPE_uid_t_DEFINED__
#define __TYPE_uid_t_DEFINED__
typedef                                                        unsigned long int
	uid_t;
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/pwd/struct_passwd.c */
#ifndef __TYPE_struct_passwd_DEFINED__
#define __TYPE_struct_passwd_DEFINED__
struct passwd {
	char *	pw_name;
	uid_t	pw_uid;
	gid_t	pw_gid;
	char *	pw_dir;
	char *	pw_shell;
};
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/pwd/getpwnam.c */
struct passwd * getpwnam(const char * __name);
/* ./src/pwd/getpwuid.c */
struct passwd * getpwuid(uid_t __uid);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/pwd/endpwent.c */
void endpwent(void);
/* ./src/pwd/getpwent.c */
struct passwd * getpwent(void);
/* ./src/pwd/setpwent.c */
void setpwent(void);
#endif


#endif

#ifndef __SYS_STAT_H__
#define __SYS_STAT_H__

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

#if	(defined _POSIX_SOURCE)
/* ./src/sys/stat/S_IRGRP.c */
#define S_IRGRP                                                            (040)
/* ./src/sys/stat/S_IROTH.c */
#define S_IROTH                                                             (04)
/* ./src/sys/stat/S_IRUSR.c */
#define S_IRUSR                                                           (0400)
/* ./src/sys/stat/S_IRWXG.c */
#define S_IRWXG                                                            (070)
/* ./src/sys/stat/S_IRWXO.c */
#define S_IRWXO                                                             (07)
/* ./src/sys/stat/S_IRWXU.c */
#define S_IRWXU                                                           (0700)
/* ./src/sys/stat/S_ISBLK.c */
#define S_ISBLK(__s)                                    /* FIXME */
/* ./src/sys/stat/S_ISCHR.c */
#define S_ISCHR(__s)          /* fixme */
/* ./src/sys/stat/S_ISDIR.c */
#define S_ISDIR(__s) (__s)
/* ./src/sys/stat/S_ISFIFO.c */
#define S_ISFIFO(__s) /* fixme */
/* ./src/sys/stat/S_ISGID.c */
#define S_ISGID                                                          (02000)
/* ./src/sys/stat/S_ISREG.c */
#define S_ISREG(__s) /* fixme */
/* ./src/sys/stat/S_ISUID.c */
#define S_ISUID                                                          (04000)
/* ./src/sys/stat/S_IWGRP.c */
#define S_IWGRP                                                            (020)
/* ./src/sys/stat/S_IWOTH.c */
#define S_IWOTH                                                             (02)
/* ./src/sys/stat/S_IWUSR.c */
#define S_IWUSR                                                           (0200)
/* ./src/sys/stat/S_IXGRP.c */
#define S_IXGRP                                                            (010)
/* ./src/sys/stat/S_IXOTH.c */
#define S_IXOTH                                                             (01)
/* ./src/sys/stat/S_IXUSR.c */
#define S_IXUSR                                                           (0100)
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/sys/stat/S_TYPEISMQ.c */
#define S_TYPEISMQ(__buf) /* TODO */
/* ./src/sys/stat/S_TYPEISSEM.c */
#define S_TYPEISSEM(__buf) /* TODO */
/* ./src/sys/stat/S_TYPEISSHM.c */
#define S_TYPEISSHM(__buf) /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/stat/S_ISLNK.c */
#define S_ISLNK(__m) /* TODO */
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/sys/stat/S_IFBLK.c */
#define S_IFBLK /* TODO */
/* ./src/sys/stat/S_IFCHR.c */
#define S_IFCHR /* TODO */
/* ./src/sys/stat/S_IFDIR.c */
#define S_IFDIR /* TODO */
/* ./src/sys/stat/S_IFIFO.c */
#define S_IFIFO /* TODO */
/* ./src/sys/stat/S_IFMT.c */
#define S_IFMT /* TODO */
/* ./src/sys/stat/S_IFREG.c */
#define S_IFREG /* TODO */
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/stat/S_IFLNK.c */
#define S_IFLNK /* TODO */
/* ./src/sys/stat/S_ISVTX.c */
#define S_ISVTX                                                            01000
#endif

#if	(defined _XOPEN_SOURCE)
/* src/sys/types/dev_t.c */
#ifndef __TYPE_dev_t_DEFINED__
#define __TYPE_dev_t_DEFINED__
typedef                                                        unsigned long int
	dev_t;
#endif

/* src/sys/types/gid_t.c */
#ifndef __TYPE_gid_t_DEFINED__
#define __TYPE_gid_t_DEFINED__
typedef                                                        unsigned long int
	gid_t;
#endif

/* src/sys/types/ino_t.c */
#ifndef __TYPE_ino_t_DEFINED__
#define __TYPE_ino_t_DEFINED__
typedef                                                        unsigned long int
	ino_t;
#endif

/* src/sys/types/mode_t.c */
#ifndef __TYPE_mode_t_DEFINED__
#define __TYPE_mode_t_DEFINED__
typedef unsigned long int                                                mode_t;
#endif

/* src/sys/types/nlink_t.c */
#ifndef __TYPE_nlink_t_DEFINED__
#define __TYPE_nlink_t_DEFINED__
typedef                                                        unsigned long int
	nlink_t;
#endif

/* src/sys/types/off_t.c */
#ifndef __TYPE_off_t_DEFINED__
#define __TYPE_off_t_DEFINED__
typedef                                                                 long int
	off_t;
#endif

/* src/sys/types/uid_t.c */
#ifndef __TYPE_uid_t_DEFINED__
#define __TYPE_uid_t_DEFINED__
typedef                                                        unsigned long int
	uid_t;
#endif

/* src/time/time_t.c */
#ifndef __TYPE_time_t_DEFINED__
#define __TYPE_time_t_DEFINED__
typedef long int                                                         time_t;
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/sys/stat/struct_stat.c */
#ifndef __TYPE_struct_stat_DEFINED__
#define __TYPE_struct_stat_DEFINED__
struct stat {
	dev_t st_dev;
	ino_t st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	off_t st_size;
	#if 0
	struct timespec st_atim;
	struct timespec st_mtim;
	struct timespec st_ctim;
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	#endif
};
#endif

#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define restrict
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/sys/stat/chmod.c */
int chmod(const char *__path, mode_t __mode);
/* ./src/sys/stat/fstat.c */
int fstat(int __fildes, struct stat *__buf);
/* ./src/sys/stat/mkdir.c */
int mkdir(const char *__path, mode_t __mode);
/* ./src/sys/stat/mkfifo.c */
int mkfifo(const char *__path, mode_t __mode);
/* ./src/sys/stat/stat.c */
int stat(const char * restrict __path, struct stat * restrict __buf);
/* ./src/sys/stat/umask.c */
mode_t umask(mode_t __cmask);
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE)
/* ./src/sys/stat/fchmod.c */
int fchmod(int __fildes, mode_t __mode);
#endif

#if	(defined _POSIX_C_SOURCE && 200112 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/stat/lstat.c */
int lstat(const char * restrict __path, struct stat * restrict __buf);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/stat/mknod.c */
int mknod(const char *__path, mode_t __mode, dev_t __dev);
#endif


#endif

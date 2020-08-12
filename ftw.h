#ifndef __FTW_H__
#define __FTW_H__

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

#if	(defined _XOPEN_SOURCE)
/* ./src/ftw/FTW_D.c */
#define FTW_D                                                             (1<<1)
/* ./src/ftw/FTW_DNR.c */
#define FTW_DNR                                                           (1<<2)
/* ./src/ftw/FTW_F.c */
#define FTW_F                                                             (1<<0)
/* ./src/ftw/FTW_NS.c */
#define FTW_NS                                                            (1<<4)
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/ftw/FTW_CHDIR.c */
#define FTW_CHDIR                                                         (1<<3)
/* ./src/ftw/FTW_DEPTH.c */
#define FTW_DEPTH                                                         (1<<2)
/* ./src/ftw/FTW_MOUNT.c */
#define FTW_MOUNT                                                         (1<<1)
/* ./src/ftw/FTW_PHYS.c */
#define FTW_PHYS                                                          (1<<0)
/* ./src/ftw/FTW_SL.c */
#define FTW_SL                                                            (1<<5)
/* ./src/ftw/FTW_SLN.c */
#define FTW_SLN                                                           (1<<6)
#endif

#if	(defined _XOPEN_SOURCE)
/* src/sys/stat/struct_stat.c */
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

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/ftw/struct_FTW.c */
#ifndef __TYPE_struct_FTW_DEFINED__
#define __TYPE_struct_FTW_DEFINED__
struct FTW {
	int base;
	int level;
};
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/ftw/ftw.c */
int ftw(const char * __path, int (*__fn) (const char *, const struct stat * __ptr, int __flag), int __ndirs);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/ftw/nftw.c */
int nftw(const char * __path, int (*__fn) (const char *, const struct stat *, int, struct FTW *), int __fd_limit, int __flags);
#endif


#endif

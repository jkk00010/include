#ifndef __SYS_MMAN_H__
#define __SYS_MMAN_H__

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

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/sys/mman/MAP_FAILED.c */
#define MAP_FAILED                                                   ((void*)-1)
/* ./src/sys/mman/MCL_CURRENT.c */
#define MCL_CURRENT /* TODO */
/* ./src/sys/mman/MCL_FUTURE.c */
#define MCL_FUTURE /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/mman/MAP_FIXED.c */
#define MAP_FIXED /* TODO */
/* ./src/sys/mman/MAP_PRIVATE.c */
#define MAP_PRIVATE /* TODO */
/* ./src/sys/mman/MAP_SHARED.c */
#define MAP_SHARED /* TODO */
/* ./src/sys/mman/MS_ASYNC.c */
#define MS_ASYNC /* TODO */
/* ./src/sys/mman/MS_INVALIDATE.c */
#define MS_INVALIDATE /* TODO */
/* ./src/sys/mman/MS_SYNC.c */
#define MS_SYNC /* TODO */
/* ./src/sys/mman/PROT_EXEC.c */
#define PROT_EXEC /* TODO */
/* ./src/sys/mman/PROT_NONE.c */
#define PROT_NONE /* TODO */
/* ./src/sys/mman/PROT_READ.c */
#define PROT_READ /* TODO */
/* ./src/sys/mman/PROT_WRITE.c */
#define PROT_WRITE /* TODO */
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE)
/* ./src/sys/mman/mlock.c */
int mlock(const void *__addr, size_t __len);
/* ./src/sys/mman/mlockall.c */
int mlockall(int __flags);
/* ./src/sys/mman/munlock.c */
int munlock(const void *__addr, size_t __len);
/* ./src/sys/mman/munlockall.c */
int munlockall(void);
/* ./src/sys/mman/shm_open.c */
int shm_open(const char *__name, int __oflag, mode_t __mode);
/* ./src/sys/mman/shm_unlink.c */
int shm_unlink(const char *__name);
#endif

#if	(defined _POSIX_C_SOURCE && 199309 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/sys/mman/mmap.c */
void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fildes, off_t __off);
/* ./src/sys/mman/mprotect.c */
int mprotect(void *__addr, size_t __len, int __prot);;
/* ./src/sys/mman/msync.c */
int msync(void * addr , size_t len , int flags );
/* ./src/sys/mman/munmap.c */
int munmap(void*__addr, size_t __len);
#endif


#endif

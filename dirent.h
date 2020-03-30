#ifndef __DIRENT_H__
#define __DIRENT_H__

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
/* ./src/dirent/DIR.c */
#ifndef __TYPE_DIR_DEFINED__
#define __TYPE_DIR_DEFINED__
typedef struct __DIR                                                        DIR;
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/dirent/struct_dirent.c */
#ifndef __TYPE_struct_dirent_DEFINED__
#define __TYPE_struct_dirent_DEFINED__
struct dirent {
	#if (defined _XOPEN_SOURCE)
	ino_t d_ino;
	#else
	unsigned long long int __padding;
	#endif
	char d_name[];
};
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/dirent/closedir.c */
int closedir(DIR *__dirp);
/* ./src/dirent/opendir.c */
DIR * opendir(const char * __dirname);
/* ./src/dirent/readdir.c */
struct dirent * readdir(DIR * __dirp);
/* ./src/dirent/rewinddir.c */
void rewinddir(DIR * __dirp);
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/dirent/seekdir.c */
void seekdir(DIR * __dirp, long __loc);
/* ./src/dirent/telldir.c */
long telldir(DIR * __dirp);
#endif


#endif

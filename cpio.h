#ifndef __CPIO_H__
#define __CPIO_H__

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
/* ./src/cpio/C_IRGRP.c */
#define C_IRGRP                                                          0000040
/* ./src/cpio/C_IROTH.c */
#define C_IROTH                                                          0000004
/* ./src/cpio/C_IRUSR.c */
#define C_IRUSR                                                          0000400
/* ./src/cpio/C_ISBLK.c */
#define C_ISBLK                                                          0060000
/* ./src/cpio/C_ISCHR.c */
#define C_ISCHR                                                          0020000
/* ./src/cpio/C_ISCTG.c */
#define C_ISCTG                                                          0110000
/* ./src/cpio/C_ISDIR.c */
#define C_ISDIR                                                          0040000
/* ./src/cpio/C_ISFIFO.c */
#define C_ISFIFO                                                         0010000
/* ./src/cpio/C_ISGID.c */
#define C_ISGID                                                          0002000
/* ./src/cpio/C_ISLNK.c */
#define C_ISLNK                                                          0120000
/* ./src/cpio/C_ISREG.c */
#define C_ISREG                                                          0100000
/* ./src/cpio/C_ISSOCK.c */
#define C_ISSOCK                                                         0140000
/* ./src/cpio/C_ISUID.c */
#define C_ISUID                                                          0004000
/* ./src/cpio/C_ISVTX.c */
#define C_ISVTX                                                          0001000
/* ./src/cpio/C_IWGRP.c */
#define C_IWGRP                                                          0000020
/* ./src/cpio/C_IWOTH.c */
#define C_IWOTH                                                          0000002
/* ./src/cpio/C_IWUSR.c */
#define C_IWUSR                                                          0000200
/* ./src/cpio/C_IXGRP.c */
#define C_IXGRP                                                          0000010
/* ./src/cpio/C_IXOTH.c */
#define C_IXOTH                                                          0000001
/* ./src/cpio/C_IXUSR.c */
#define C_IXUSR                                                          0000100
/* ./src/cpio/MAGIC.c */
#define MAGIC                                                           "070707"
#endif


#endif

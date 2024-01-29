#ifndef __STDC_VERSION_ERRNO_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_ERRNO_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_ERRNO_H__ 1
#endif

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2022 Jakob Kaivo <jkk@ung.org>

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

#define E2BIG (0x7)
#define EACCES (0xd)
#define EADDRINUSE (0x62)
#define EADDRNOTAVAIL (0x63)
#define EAFNOSUPPORT (0x61)
#define EAGAIN (0xb)
#define EALREADY (0x72)
#define EBADF (0x9)
#define EBADMSG (0x4a)
#define EBUSY (0x10)
#define ECANCELED (0x7d)
#define ECHILD (0xa)
#define ECONNABORTED (0x67)
#define ECONNREFUSED (0x6f)
#define ECONNRESET (0x68)
#define EDEADLK (0x23)
#define EDESTADDRREQ (0x59)
#define EDOM (0x21)
#define EDQUOT (0x7a)
#define EEXIST (0x11)
#define EFAULT (0xe)
#define EFBIG (0x1b)
#define EHOSTUNREACH (0x71)
#define EIDRM (0x2b)
#define EILSEQ (0x54)
#define EINPROGRESS (0x73)
#define EINTR (0x4)
#define EINVAL (0x16)
#define EIO (0x5)
#define EISCONN (0x6a)
#define EISDIR (0x15)
#define ELOOP (0x28)
#define EMFILE (0x18)
#define EMLINK (0x1f)
#define EMSGSIZE (0x5a)
#define EMULTIHOP (0x48)
#define ENAMETOOLONG (0x24)
#define ENETDOWN (0x64)
#define ENETRESET (0x66)
#define ENETUNREACH (0x65)
#define ENFILE (0x17)
#define ENOBUFS (0x69)
#define ENODATA (0x3d)
#define ENODEV (0x13)
#define ENOENT (0x2)
#define ENOEXEC (0x8)
#define ENOLCK (0x25)
#define ENOLINK (0x43)
#define ENOMEM (0xc)
#define ENOMSG (0x2a)
#define ENOPROTOOPT (0x5c)
#define ENOSPC (0x1c)
#define ENOSR (0x3f)
#define ENOSTR (0x3c)
#define ENOSYS (0x26)
#define ENOTCONN (0x6b)
#define ENOTDIR (0x14)
#define ENOTEMPTY (0x27)
#define ENOTRECOVERABLE (0x83)
#define ENOTSOCK (0x58)
#define ENOTSUP (0x5f)
#define ENOTTY (0x19)
#define ENXIO (0x6)
#define EOPNOTSUPP (0x5f)
#define EOVERFLOW (0x4b)
#define EOWNERDEAD (0x82)
#define EPERM (0x1)
#define EPIPE (0x20)
#define EPROTO (0x47)
#define EPROTONOSUPPORT (0x5d)
#define EPROTOTYPE (0x5b)
#define ERANGE (0x22)
#define EROFS (0x1e)
#define ESPIPE (0x1d)
#define ESRCH (0x3)
#define ESTALE (0x74)
#define ETIME (0x3e)
#define ETIMEDOUT (0x6e)
#define ETXTBSY (0x1a)
#define EWOULDBLOCK (0xb)
#define EXDEV (0x12)

#define errno                                                       (*__errno())

#if (201107L <= __STDC_VERSION_ERRNO_H__ && defined __STDC_WANT_LIB_EXT1__)
typedef int                                                             errno_t;
#endif

int *__errno(void);

#endif

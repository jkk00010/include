#ifndef __TERMIOS_H__
#define __TERMIOS_H__

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

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/termios/B0.c */
#define B0                                                                   (0)
/* ./src/termios/B110.c */
#define B110                                                               (0x3)
/* ./src/termios/B1200.c */
#define B1200                                                              (0x9)
/* ./src/termios/B134.c */
#define B134                                                               (0x4)
/* ./src/termios/B150.c */
#define B150                                                               (0x5)
/* ./src/termios/B1800.c */
#define B1800                                                              (0xA)
/* ./src/termios/B19200.c */
#define B19200                                                             (0xE)
/* ./src/termios/B200.c */
#define B200                                                               (0x6)
/* ./src/termios/B2400.c */
#define B2400                                                              (0xB)
/* ./src/termios/B300.c */
#define B300                                                               (0x7)
/* ./src/termios/B38400.c */
#define B38400                                                             (0xF)
/* ./src/termios/B4800.c */
#define B4800                                                              (0xC)
/* ./src/termios/B50.c */
#define B50                                                                (0x1)
/* ./src/termios/B600.c */
#define B600                                                               (0x8)
/* ./src/termios/B75.c */
#define B75                                                                (0x2)
/* ./src/termios/B9600.c */
#define B9600                                                              (0xD)
/* ./src/termios/BRKINT.c */
#define BRKINT                                                            (1<<4)
/* ./src/termios/CLOCAL.c */
#define CLOCAL                                                            (1<<7)
/* ./src/termios/CREAD.c */
#define CREAD                                                             (1<<3)
/* ./src/termios/CS5.c */
#define CS5                                                                (0x0)
/* ./src/termios/CS6.c */
#define CS6                                                                (0x1)
/* ./src/termios/CS7.c */
#define CS7                                                                (0x2)
/* ./src/termios/CS8.c */
#define CS8                                                                (0x3)
/* ./src/termios/CSIZE.c */
#define CSIZE                                                              (0x3)
/* ./src/termios/CSTOPB.c */
#define CSTOPB                                                            (1<<2)
/* ./src/termios/ECHO.c */
#define ECHO                                                              (1<<0)
/* ./src/termios/ECHOE.c */
#define ECHOE                                                             (1<<1)
/* ./src/termios/ECHOK.c */
#define ECHOK                                                             (1<<2)
/* ./src/termios/ECHONL.c */
#define ECHONL                                                            (1<<3)
/* ./src/termios/HUPCL.c */
#define HUPCL                                                             (1<<6)
/* ./src/termios/ICANON.c */
#define ICANON                                                            (1<<4)
/* ./src/termios/ICRNL.c */
#define ICRNL                                                             (1<<5)
/* ./src/termios/IEXTEN.c */
#define IEXTEN                                                            (1<<5)
/* ./src/termios/IGNBRK.c */
#define IGNBRK                                                            (1<<6)
/* ./src/termios/IGNCR.c */
#define IGNCR                                                             (1<<7)
/* ./src/termios/IGNPAR.c */
#define IGNPAR                                                            (1<<8)
/* ./src/termios/INLCR.c */
#define INLCR                                                             (1<<9)
/* ./src/termios/INPCK.c */
#define INPCK                                                            (1<<10)
/* ./src/termios/ISIG.c */
#define ISIG                                                              (1<<6)
/* ./src/termios/ISTRIP.c */
#define ISTRIP                                                           (1<<11)
/* ./src/termios/IXOFF.c */
#define IXOFF                                                            (1<<12)
/* ./src/termios/IXON.c */
#define IXON                                                             (1<<13)
/* ./src/termios/NCCS.c */
#define NCCS                                                                (11)
/* ./src/termios/NOFLSH.c */
#define NOFLSH                                                            (1<<7)
/* ./src/termios/OPOST.c */
#define OPOST                                                             (1<<4)
/* ./src/termios/PARENB.c */
#define PARENB                                                            (1<<4)
/* ./src/termios/PARMRK.c */
#define PARMRK                                                           (1<<14)
/* ./src/termios/PARODD.c */
#define PARODD                                                            (1<<5)
/* ./src/termios/TCIFLUSH.c */
#define TCIFLUSH                                                             (0)
/* ./src/termios/TCIOFF.c */
#define TCIOFF                                                               (0)
/* ./src/termios/TCIOFLUSH.c */
#define TCIOFLUSH                                                            (1)
/* ./src/termios/TCION.c */
#define TCION                                                                (1)
/* ./src/termios/TCOFLUSH.c */
#define TCOFLUSH /* TBD */
/* ./src/termios/TCOOFF.c */
#define TCOOFF                                                               (3)
/* ./src/termios/TCOON.c */
#define TCOON                                                                (4)
/* ./src/termios/TCSADRAIN.c */
#define TCSADRAIN                                                            (1)
/* ./src/termios/TCSAFLUSH.c */
#define TCSAFLUSH                                                            (2)
/* ./src/termios/TCSANOW.c */
#define TCSANOW                                                              (0)
/* ./src/termios/TOSTOP.c */
#define TOSTOP                                                            (1<<8)
/* ./src/termios/VEOF.c */
#define VEOF                                                                 (0)
/* ./src/termios/VEOL.c */
#define VEOL                                                                 (1)
/* ./src/termios/VERASE.c */
#define VERASE                                                               (2)
/* ./src/termios/VINTR.c */
#define VINTR                                                                (3)
/* ./src/termios/VKILL.c */
#define VKILL                                                                (4)
/* ./src/termios/VMIN.c */
#define VMIN                                                                 (5)
/* ./src/termios/VQUIT.c */
#define VQUIT                                                                (6)
/* ./src/termios/VSTART.c */
#define VSTART                                                               (7)
/* ./src/termios/VSTOP.c */
#define VSTOP                                                                (8)
/* ./src/termios/VSUSP.c */
#define VSUSP                                                                (9)
/* ./src/termios/VTIME.c */
#define VTIME                                                               (10)
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/termios/BS0.c */
#define BS0                                                                  (0)
/* ./src/termios/BS1.c */
#define BS1                                                              (1<<16)
/* ./src/termios/BSDLY.c */
#define BSDLY                                                            (1<<16)
/* ./src/termios/CR0.c */
#define CR0                                                                  (0)
/* ./src/termios/CR1.c */
#define CR1                                                              (1<<12)
/* ./src/termios/CR3.c */
#define CR3                                                    ((1<<12)|(1<<13))
/* ./src/termios/CRDLY.c */
#define CRDLY                                                  ((1<<12)|(1<<13))
/* ./src/termios/FF0.c */
#define FF0                                                                  (0)
/* ./src/termios/FF1.c */
#define FF1                                                              (1<<18)
/* ./src/termios/FFDLY.c */
#define FFDLY                                                            (1<<18)
/* ./src/termios/IUCLC.c */
#define IUCLC                                                            (1<<15)
/* ./src/termios/IXANY.c */
#define IXANY                                                            (1<<16)
/* ./src/termios/NL0.c */
#define NL0                                                                  (0)
/* ./src/termios/NL1.c */
#define NL1                                                              (1<<11)
/* ./src/termios/NLDLY.c */
#define NLDLY                                                            (1<<11)
/* ./src/termios/OCRNL.c */
#define OCRNL                                                             (1<<7)
/* ./src/termios/OFILL.c */
#define OFILL                                                            (1<<10)
/* ./src/termios/OLCUC.c */
#define OLCUC                                                             (1<<5)
/* ./src/termios/ONLCR.c */
#define ONLCR                                                             (1<<6)
/* ./src/termios/ONLRET.c */
#define ONLRET                                                            (1<<9)
/* ./src/termios/ONOCR.c */
#define ONOCR                                                             (1<<8)
/* ./src/termios/TAB0.c */
#define TAB0                                                                 (0)
/* ./src/termios/TAB1.c */
#define TAB1                                                             (1<<14)
/* ./src/termios/TAB2.c */
#define TAB2                                                             (1<<15)
/* ./src/termios/TAB3.c */
#define TAB3                                                   ((1<<14)|(1<<15))
/* ./src/termios/TABDLY.c */
#define TABDLY                                                 ((1<<14)|(1<<15))
/* ./src/termios/VT0.c */
#define VT0                                                                  (0)
/* ./src/termios/VT1.c */
#define VT1                                                              (1<<17)
/* ./src/termios/VTDLY.c */
#define VTDLY                                                            (1<<17)
/* ./src/termios/XCASE.c */
#define XCASE                                                             (1<<9)
#endif

#if	(defined _POSIX_SOURCE)
/* ./src/termios/cc_t.c */
#ifndef __TYPE_cc_t_DEFINED__
#define __TYPE_cc_t_DEFINED__
typedef int                                                                cc_t;
#endif

/* ./src/termios/speed_t.c */
#ifndef __TYPE_speed_t_DEFINED__
#define __TYPE_speed_t_DEFINED__
typedef int                                                             speed_t;
#endif

/* ./src/termios/tcflag_t.c */
#ifndef __TYPE_tcflag_t_DEFINED__
#define __TYPE_tcflag_t_DEFINED__
typedef unsigned int                                                   tcflag_t;
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/termios/struct_termios.c */
#ifndef __TYPE_struct_termios_DEFINED__
#define __TYPE_struct_termios_DEFINED__
struct termios {
	tcflag_t c_iflag;
	tcflag_t c_oflag;
	tcflag_t c_cflag;
	tcflag_t c_lflag;
	cc_t c_cc[NCCS];
};
#endif

#endif

#if	(defined _POSIX_SOURCE)
/* ./src/termios/cfgetispeed.c */
speed_t cfgetispeed(const struct termios *__termios_p);
/* ./src/termios/cfgetospeed.c */
speed_t cfgetospeed(const struct termios *__termios_p);
/* ./src/termios/cfsetispeed.c */
int cfsetispeed(struct termios *__termios_p, speed_t __speed);
/* ./src/termios/cfsetospeed.c */
int cfsetospeed(struct termios *__termios_p, speed_t __speed);
/* ./src/termios/tcdrain.c */
int tcdrain(int __fildes);
/* ./src/termios/tcflow.c */
int tcflow(int __fildes, int __action);
/* ./src/termios/tcflush.c */
int tcflush(int __fildes, int __queue_selector);
/* ./src/termios/tcgetattr.c */
int tcgetattr(int __fildes, struct termios *__termios_p);
/* ./src/termios/tcsendbreak.c */
int tcsendbreak(int __fildes, int __duration);
/* ./src/termios/tcsetattr.c */
int tcsetattr(int __fildes, int __optional_actions, struct termios *__termios_p);
#endif

#if	(defined _POSIX_C_SOURCE && 200809 <= _POSIX_C_SOURCE) || \
	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/termios/tcgetsid.c */
pid_t tcgetsid(int __fildes);
#endif


#endif

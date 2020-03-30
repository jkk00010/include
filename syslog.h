#ifndef __SYSLOG_H__
#define __SYSLOG_H__

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

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/syslog/LOG_ALERT.c */
#define LOG_ALERT                                                         (1<<1)
/* ./src/syslog/LOG_CONS.c */
#define LOG_CONS                                                          (1<<1)
/* ./src/syslog/LOG_CRIT.c */
#define LOG_CRIT                                                          (1<<2)
/* ./src/syslog/LOG_CRON.c */
#define LOG_CRON                                                               7
/* ./src/syslog/LOG_DAEMON.c */
#define LOG_DAEMON                                                             5
/* ./src/syslog/LOG_DEBUG.c */
#define LOG_DEBUG                                                         (1<<7)
/* ./src/syslog/LOG_EMERG.c */
#define LOG_EMERG                                                         (1<<0)
/* ./src/syslog/LOG_ERR.c */
#define LOG_ERR                                                           (1<<3)
/* ./src/syslog/LOG_INFO.c */
#define LOG_INFO                                                          (1<<6)
/* ./src/syslog/LOG_KERN.c */
#define LOG_KERN                                                               0
/* ./src/syslog/LOG_LOCAL0.c */
#define LOG_LOCAL0                                                            10
/* ./src/syslog/LOG_LOCAL1.c */
#define LOG_LOCAL1                                                            11
/* ./src/syslog/LOG_LOCAL2.c */
#define LOG_LOCAL2                                                            12
/* ./src/syslog/LOG_LOCAL3.c */
#define LOG_LOCAL3                                                            13
/* ./src/syslog/LOG_LOCAL4.c */
#define LOG_LOCAL4                                                            14
/* ./src/syslog/LOG_LOCAL5.c */
#define LOG_LOCAL5                                                            15
/* ./src/syslog/LOG_LOCAL6.c */
#define LOG_LOCAL6                                                            16
/* ./src/syslog/LOG_LOCAL7.c */
#define LOG_LOCAL7                                                            17
/* ./src/syslog/LOG_LPR.c */
#define LOG_LPR                                                                8
/* ./src/syslog/LOG_MAIL.c */
#define LOG_MAIL                                                               2
/* ./src/syslog/LOG_MASK.c */
#define LOG_MASK(__pri)                                               (1<<__pri)
/* ./src/syslog/LOG_NDELAY.c */
#define LOG_NDELAY                                                        (1<<2)
/* ./src/syslog/LOG_NEWS.c */
#define LOG_NEWS                                                               3
/* ./src/syslog/LOG_NOTICE.c */
#define LOG_NOTICE                                                        (1<<5)
/* ./src/syslog/LOG_NOWAIT.c */
#define LOG_NOWAIT                                                        (1<<4)
/* ./src/syslog/LOG_ODELAY.c */
#define LOG_ODELAY                                                        (1<<3)
/* ./src/syslog/LOG_PID.c */
#define LOG_PID                                                           (1<<0)
/* ./src/syslog/LOG_USER.c */
#define LOG_USER                                                               1
/* ./src/syslog/LOG_UUCP.c */
#define LOG_UUCP                                                               4
/* ./src/syslog/LOG_WARNING.c */
#define LOG_WARNING                                                       (1<<4)
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 500)
/* ./src/syslog/LOG_UPTO.c */
#define LOG_UPTO() /* TODO */
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/syslog/closelog.c */
void closelog(void);
/* ./src/syslog/openlog.c */
void openlog(const char * __ident, int __logopt, int __facility);
/* ./src/syslog/setlogmask.c */
int setlogmask(int __maskpri);
/* ./src/syslog/syslog.c */
void syslog(int __priority, const char * __message, ...);
#endif


#endif

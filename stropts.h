#ifndef __STROPTS_H__
#define __STROPTS_H__

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
/* ./src/stropts/ANYMARK.c */
#define ANYMARK /* TODO */
/* ./src/stropts/FLUSHR.c */
#define FLUSHR /* TODO */
/* ./src/stropts/FLUSHRW.c */
#define FLUSHRW /* TODO */
/* ./src/stropts/FLUSHW.c */
#define FLUSHW /* TODO */
/* ./src/stropts/FMNAMESZ.c */
#define FMNAMESZ /* TODO */
/* ./src/stropts/I_ATMARK.c */
#define I_ATMARK /* TODO */
/* ./src/stropts/I_CANPUT.c */
#define I_CANPUT /* TODO */
/* ./src/stropts/I_CKBAND.c */
#define I_CKBAND /* TODO */
/* ./src/stropts/I_FDINSERT.c */
#define I_FDINSERT /* TODO */
/* ./src/stropts/I_FIND.c */
#define I_FIND /* TODO */
/* ./src/stropts/I_FLUSH.c */
#define I_FLUSH /* TODO */
/* ./src/stropts/I_FLUSHBAND.c */
#define I_FLUSHBAND /* TODO */
/* ./src/stropts/I_GETBAND.c */
#define I_GETBAND /* TODO */
/* ./src/stropts/I_GETCLTIME.c */
#define I_GETCLTIME /* TODO */
/* ./src/stropts/I_GETSIG.c */
#define I_GETSIG /* TODO */
/* ./src/stropts/I_GRDOPT.c */
#define I_GRDOPT /* TODO */
/* ./src/stropts/I_GWROPT.c */
#define I_GWROPT /* TODO */
/* ./src/stropts/I_LINK.c */
#define I_LINK /* TODO */
/* ./src/stropts/I_LIST.c */
#define I_LIST /* TODO */
/* ./src/stropts/I_LOOK.c */
#define I_LOOK /* TODO */
/* ./src/stropts/I_NREAD.c */
#define I_NREAD /* TODO */
/* ./src/stropts/I_PEEK.c */
#define I_PEEK /* TODO */
/* ./src/stropts/I_PLINK.c */
#define I_PLINK /* TODO */
/* ./src/stropts/I_POP.c */
#define I_POP /* TODO */
/* ./src/stropts/I_PUNLINK.c */
#define I_PUNLINK /* TODO */
/* ./src/stropts/I_PUSH.c */
#define I_PUSH /* TODO */
/* ./src/stropts/I_RECVFD.c */
#define I_RECVFD /* TODO */
/* ./src/stropts/I_SENDFD.c */
#define I_SENDFD /* TODO */
/* ./src/stropts/I_SETCLTIME.c */
#define I_SETCLTIME /* TODO */
/* ./src/stropts/I_SETSIG.c */
#define I_SETSIG /* TODO */
/* ./src/stropts/I_SRDOPT.c */
#define I_SRDOPT /* TODO */
/* ./src/stropts/I_STR.c */
#define I_STR /* TODO */
/* ./src/stropts/I_SWROPT.c */
#define I_SWROPT /* TODO */
/* ./src/stropts/I_UNLINK.c */
#define I_UNLINK /* TODO */
/* ./src/stropts/LASTMARK.c */
#define LASTMARK /* TODO */
/* ./src/stropts/MORECTL.c */
#define MORECTL /* TODO */
/* ./src/stropts/MOREDATA.c */
#define MOREDATA /* TODO */
/* ./src/stropts/MSG_ANY.c */
#define MSG_ANY /* TODO */
/* ./src/stropts/MSG_BAND.c */
#define MSG_BAND /* TODO */
/* ./src/stropts/MSG_HIPRI.c */
#define MSG_HIPRI /* TODO */
/* ./src/stropts/MUXID_ALL.c */
#define MUXID_ALL /* TODO */
/* ./src/stropts/RMSGD.c */
#define RMSGD /* TODO */
/* ./src/stropts/RMSGN.c */
#define RMSGN /* TODO */
/* ./src/stropts/RNORM.c */
#define RNORM /* TODO */
/* ./src/stropts/RPOTNORM.c */
#define RPOTNORM /* TODO */
/* ./src/stropts/RPROTDAT.c */
#define RPROTDAT /* TODO */
/* ./src/stropts/RPROTDIS.c */
#define RPROTDIS /* TODO */
/* ./src/stropts/RS_HIPRI.c */
#define RS_HIPRI /* TODO */
/* ./src/stropts/SNDZERO.c */
#define SNDZERO /* TODO */
/* ./src/stropts/S_BANDURG.c */
#define S_BANDURG /* TODO */
/* ./src/stropts/S_ERROR.c */
#define S_ERROR /* TODO */
/* ./src/stropts/S_HANGUP.c */
#define S_HANGUP /* TODO */
/* ./src/stropts/S_HIPRI.c */
#define S_HIPRI /* TODO */
/* ./src/stropts/S_INPUT.c */
#define S_INPUT /* TODO */
/* ./src/stropts/S_MSG.c */
#define S_MSG /* TODO */
/* ./src/stropts/S_OUTPUT.c */
#define S_OUTPUT /* TODO */
/* ./src/stropts/S_RDBAND.c */
#define S_RDBAND /* TODO */
/* ./src/stropts/S_RDNORM.c */
#define S_RDNORM /* TODO */
/* ./src/stropts/S_WRBAND.c */
#define S_WRBAND /* TODO */
/* ./src/stropts/S_WRNORM.c */
#define S_WRNORM /* TODO */
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/stropts/struct_bandinfo.c */
#ifndef __TYPE_struct_bandinfo_DEFINED__
#define __TYPE_struct_bandinfo_DEFINED__
struct bandinfo {
	unsigned char bi_pri;
	int bi_flag;
};
#endif

/* ./src/stropts/struct_str_list.c */
#ifndef __TYPE_struct_str_list_DEFINED__
#define __TYPE_struct_str_list_DEFINED__
struct str_list {
	int sl_nmods;
	struct str_mlist *sl_modlist;
};
#endif

/* ./src/stropts/struct_str_mlist.c */
#ifndef __TYPE_struct_str_mlist_DEFINED__
#define __TYPE_struct_str_mlist_DEFINED__
struct str_mlist {
	char l_name[FMNAMESZ+1];
};
#endif

/* ./src/stropts/struct_strbuf.c */
#ifndef __TYPE_struct_strbuf_DEFINED__
#define __TYPE_struct_strbuf_DEFINED__
struct strbuf {
	int maxlen;
	int len;
	char *buf;
};
#endif

/* ./src/stropts/struct_strfdinsert.c */
#ifndef __TYPE_struct_strfdinsert_DEFINED__
#define __TYPE_struct_strfdinsert_DEFINED__
struct strfdinsert {
	struct strbuf ctlbuf;
	struct strbuf databuf;
	long flags;
	int fildes;
	int offset;
};
#endif

/* ./src/stropts/struct_strioctl.c */
#ifndef __TYPE_struct_strioctl_DEFINED__
#define __TYPE_struct_strioctl_DEFINED__
struct strioctl {
	int ic_cmd;
	int ic_timeout;
	int ic_len;
	char *ic_dp;
};
#endif

/* ./src/stropts/struct_strpeek.c */
#ifndef __TYPE_struct_strpeek_DEFINED__
#define __TYPE_struct_strpeek_DEFINED__
struct strpeek {
	int maxlen;
	int len;
	char *buf;
};
#endif

/* ./src/stropts/struct_strrecvfd.c */
#ifndef __TYPE_struct_strrecvfd_DEFINED__
#define __TYPE_struct_strrecvfd_DEFINED__
struct strrecvfd {
	int fd;
	uid_t uid;
	gid_t gid;
};
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/stropts/fattach.c */
int fattach(int __fildes, const char * path );
/* ./src/stropts/fdetach.c */
int fdetach(const char * path );
/* ./src/stropts/getmsg.c */
int getmsg(int fd , struct strbuf * ctlptr , struct strbuf * dataptr , int * flagsp );
/* ./src/stropts/getpmsg.c */
int getpmsg(int fd , struct strbuf * ctlptr , struct strbuf * dataptr , int * bandp , int * flagsp );
/* ./src/stropts/ioctl.c */
int ioctl(int fildes , int request , ... );
/* ./src/stropts/isastream.c */
int isastream(int fildes );
/* ./src/stropts/putmsg.c */
int putmsg(int fd , const struct strbuf * ctlptr , const struct strbuf * dataptr , int flags );
/* ./src/stropts/putpmsg.c */
int putpmsg(int fd , const struct strbuf * ctlptr , const struct strbuf * dataptr , int band , int flags );
#endif


#endif

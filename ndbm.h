#ifndef __NDBM_H__
#define __NDBM_H__

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

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/ndbm/DBM_INSERT.c */
#define DBM_INSERT                                                             1
/* ./src/ndbm/DBM_REPLACE.c */
#define DBM_REPLACE                                                            2
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/ndbm/DBM.c */
#ifndef __TYPE_DBM_DEFINED__
#define __TYPE_DBM_DEFINED__
typedef struct __DBM                                                        DBM;
#endif

/* ./src/ndbm/datum.c */
#ifndef __TYPE_datum_DEFINED__
#define __TYPE_datum_DEFINED__
typedef struct {
	void *	dptr;
	size_t	dsize;
} datum;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/ndbm/dbm_clearerr.c */
int dbm_clearerr(DBM * __db);
/* ./src/ndbm/dbm_close.c */
void dbm_close(DBM * __db);
/* ./src/ndbm/dbm_delete.c */
int dbm_delete(DBM * __db, datum __key);
/* ./src/ndbm/dbm_error.c */
int dbm_error(DBM * __db);
/* ./src/ndbm/dbm_fetch.c */
datum dbm_fetch(DBM * __db, datum __key);
/* ./src/ndbm/dbm_firstkey.c */
datum dbm_firstkey(DBM * __db);
/* ./src/ndbm/dbm_nextkey.c */
datum dbm_nextkey(DBM * __db);
/* ./src/ndbm/dbm_open.c */
DBM *dbm_open(const char * __file, int __open_flags, mode_t __file_mode);
/* ./src/ndbm/dbm_store.c */
int dbm_store(DBM * __db, datum __key, datum __content, int __store_mode);
#endif


#endif

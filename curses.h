#ifndef __CURSES_H__
#define __CURSES_H__

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

#if	(defined _XOPEN_SOURCE)
/* ./src/curses/A_ATTRIBUTES.c */
#define A_ATTRIBUTES                                                   (0x1ff00)
/* ./src/curses/A_BLINK.c */
#define A_BLINK                                                           (1<<9)
/* ./src/curses/A_BOLD.c */
#define A_BOLD                                                           (1<<10)
/* ./src/curses/A_CHARTEXT.c */
#define A_CHARTEXT                                                        (0xff)
/* ./src/curses/A_DIM.c */
#define A_DIM                                                            (1<<11)
/* ./src/curses/A_REVERSE.c */
#define A_REVERSE                                                        (1<<14)
/* ./src/curses/A_STANDOUT.c */
#define A_STANDOUT                                                       (1<<15)
/* ./src/curses/A_UNDERLINE.c */
#define A_UNDERLINE                                                      (1<<16)
/* ./src/curses/ERR.c */
#define ERR                                                                 (-1)
/* ./src/curses/FALSE.c */
#define FALSE                                                                (0)
/* ./src/curses/KEY_A1.c */
#define KEY_A1 /* TODO */
/* ./src/curses/KEY_A3.c */
#define KEY_A3 /* TODO */
/* ./src/curses/KEY_B2.c */
#define KEY_B2 /* TODO */
/* ./src/curses/KEY_BACKSPACE.c */
#define KEY_BACKSPACE /* TODO */
/* ./src/curses/KEY_BREAK.c */
#define KEY_BREAK /* TODO */
/* ./src/curses/KEY_C1.c */
#define KEY_C1 /* TODO */
/* ./src/curses/KEY_C3.c */
#define KEY_C3 /* TODO */
/* ./src/curses/KEY_CATAB.c */
#define KEY_CATAB /* TODO */
/* ./src/curses/KEY_CLEAR.c */
#define KEY_CLEAR /* TODO */
/* ./src/curses/KEY_CTAB.c */
#define KEY_CTAB /* TODO */
/* ./src/curses/KEY_DC.c */
#define KEY_DC /* TODO */
/* ./src/curses/KEY_DL.c */
#define KEY_DL /* TODO */
/* ./src/curses/KEY_DOWN.c */
#define KEY_DOWN /* TODO */
/* ./src/curses/KEY_EIC.c */
#define KEY_EIC /* TODO */
/* ./src/curses/KEY_ENTER.c */
#define KEY_ENTER /* TODO */
/* ./src/curses/KEY_EOL.c */
#define KEY_EOL /* TODO */
/* ./src/curses/KEY_EOS.c */
#define KEY_EOS /* TODO */
/* ./src/curses/KEY_F0.c */
#define KEY_F0 /* TODO */
/* ./src/curses/KEY_HOME.c */
#define KEY_HOME /* TODO */
/* ./src/curses/KEY_IC.c */
#define KEY_IC /* TODO */
/* ./src/curses/KEY_IL.c */
#define KEY_IL /* TODO */
/* ./src/curses/KEY_LEFT.c */
#define KEY_LEFT /* TODO */
/* ./src/curses/KEY_LL.c */
#define KEY_LL /* TODO */
/* ./src/curses/KEY_NPAGE.c */
#define KEY_NPAGE /* TODO */
/* ./src/curses/KEY_PPAGE.c */
#define KEY_PPAGE /* TODO */
/* ./src/curses/KEY_PRINT.c */
#define KEY_PRINT /* TODO */
/* ./src/curses/KEY_RESET.c */
#define KEY_RESET /* TODO */
/* ./src/curses/KEY_RIGHT.c */
#define KEY_RIGHT /* TODO */
/* ./src/curses/KEY_SF.c */
#define KEY_SF /* TODO */
/* ./src/curses/KEY_SR.c */
#define KEY_SR /* TODO */
/* ./src/curses/KEY_SRESET.c */
#define KEY_SRESET /* TODO */
/* ./src/curses/KEY_STAB.c */
#define KEY_STAB /* TODO */
/* ./src/curses/KEY_UP.c */
#define KEY_UP /* TODO */
/* ./src/curses/OK.c */
#define OK                                                                   (0)
/* ./src/curses/TRUE.c */
#define TRUE                                                                 (1)
/* ./src/curses/getyx.c */
#define getyx(_win, _y, _x) /* TODO */
/* src/stdio/EOF.c */
#define EOF                                                                 (-1)
/* src/wctype/WEOF.c */
#define WEOF                                                      ((wint_t)(-1))
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/curses/ACS_BLOCK.c */
#define ACS_BLOCK /* TODO */
/* ./src/curses/ACS_BOARD.c */
#define ACS_BOARD /* TODO */
/* ./src/curses/ACS_BTEE.c */
#define ACS_BTEE /* TODO */
/* ./src/curses/ACS_BULLET.c */
#define ACS_BULLET /* TODO */
/* ./src/curses/ACS_CKBOARD.c */
#define ACS_CKBOARD /* TODO */
/* ./src/curses/ACS_DARROW.c */
#define ACS_DARROW /* TODO */
/* ./src/curses/ACS_DEGREE.c */
#define ACS_DEGREE /* TODO */
/* ./src/curses/ACS_DIAMOND.c */
#define ACS_DIAMOND /* TODO */
/* ./src/curses/ACS_HLINE.c */
#define ACS_HLINE /* TODO */
/* ./src/curses/ACS_LANTERN.c */
#define ACS_LANTERN /* TODO */
/* ./src/curses/ACS_LARROW.c */
#define ACS_LARROW /* TODO */
/* ./src/curses/ACS_LLCORNER.c */
#define ACS_LLCORNER /* TODO */
/* ./src/curses/ACS_LRCORNER.c */
#define ACS_LRCORNER /* TODO */
/* ./src/curses/ACS_LTEE.c */
#define ACS_LTEE /* TODO */
/* ./src/curses/ACS_PLMINUS.c */
#define ACS_PLMINUS /* TODO */
/* ./src/curses/ACS_PLUS.c */
#define ACS_PLUS /* TODO */
/* ./src/curses/ACS_RARROW.c */
#define ACS_RARROW /* TODO */
/* ./src/curses/ACS_RTEE.c */
#define ACS_RTEE /* TODO */
/* ./src/curses/ACS_S1.c */
#define ACS_S1 /* TODO */
/* ./src/curses/ACS_S9.c */
#define ACS_S9 /* TODO */
/* ./src/curses/ACS_TTEE.c */
#define ACS_TTEE /* TODO */
/* ./src/curses/ACS_UARROW.c */
#define ACS_UARROW /* TODO */
/* ./src/curses/ACS_ULCORNER.c */
#define ACS_ULCORNER /* TODO */
/* ./src/curses/ACS_URCORNER.c */
#define ACS_URCORNER /* TODO */
/* ./src/curses/ACS_VLINE.c */
#define ACS_VLINE /* TODO */
/* ./src/curses/A_ALTCHARSET.c */
#define A_ALTCHARSET                                                      (1<<8)
/* ./src/curses/A_COLOR.c */
#define A_COLOR                                                     (0xff000000)
/* ./src/curses/A_INVIS.c */
#define A_INVIS                                                          (1<<12)
/* ./src/curses/A_PROTECT.c */
#define A_PROTECT                                                        (1<<13)
/* ./src/curses/COLOR_BLACK.c */
#define COLOR_BLACK                                                          (0)
/* ./src/curses/COLOR_BLUE.c */
#define COLOR_BLUE                                                           (4)
/* ./src/curses/COLOR_CYAN.c */
#define COLOR_CYAN                                                           (6)
/* ./src/curses/COLOR_GREEN.c */
#define COLOR_GREEN                                                          (2)
/* ./src/curses/COLOR_MAGENTA.c */
#define COLOR_MAGENTA                                                        (5)
/* ./src/curses/COLOR_PAIR.c */
#define COLOR_PAIR(__n) /* TODO */
/* ./src/curses/COLOR_RED.c */
#define COLOR_RED                                                            (1)
/* ./src/curses/COLOR_WHITE.c */
#define COLOR_WHITE                                                          (7)
/* ./src/curses/COLOR_YELLOW.c */
#define COLOR_YELLOW                                                         (3)
/* ./src/curses/KEY_BEG.c */
#define KEY_BEG /* TODO */
/* ./src/curses/KEY_BTAB.c */
#define KEY_BTAB /* TODO */
/* ./src/curses/KEY_CANCEL.c */
#define KEY_CANCEL /* TODO */
/* ./src/curses/KEY_CLOSE.c */
#define KEY_CLOSE /* TODO */
/* ./src/curses/KEY_COMMAND.c */
#define KEY_COMMAND /* TODO */
/* ./src/curses/KEY_COPY.c */
#define KEY_COPY /* TODO */
/* ./src/curses/KEY_CREATE.c */
#define KEY_CREATE /* TODO */
/* ./src/curses/KEY_END.c */
#define KEY_END /* TODO */
/* ./src/curses/KEY_EXIT.c */
#define KEY_EXIT /* TODO */
/* ./src/curses/KEY_FIND.c */
#define KEY_FIND /* TODO */
/* ./src/curses/KEY_HELP.c */
#define KEY_HELP /* TODO */
/* ./src/curses/KEY_MARK.c */
#define KEY_MARK /* TODO */
/* ./src/curses/KEY_MESSAGE.c */
#define KEY_MESSAGE /* TODO */
/* ./src/curses/KEY_MOVE.c */
#define KEY_MOVE /* TODO */
/* ./src/curses/KEY_NEXT.c */
#define KEY_NEXT /* TODO */
/* ./src/curses/KEY_OPEN.c */
#define KEY_OPEN /* TODO */
/* ./src/curses/KEY_OPTIONS.c */
#define KEY_OPTIONS /* TODO */
/* ./src/curses/KEY_PREVIOUS.c */
#define KEY_PREVIOUS /* TODO */
/* ./src/curses/KEY_REDO.c */
#define KEY_REDO /* TODO */
/* ./src/curses/KEY_REFERENCE.c */
#define KEY_REFERENCE /* TODO */
/* ./src/curses/KEY_REFRESH.c */
#define KEY_REFRESH /* TODO */
/* ./src/curses/KEY_REPLACE.c */
#define KEY_REPLACE /* TODO */
/* ./src/curses/KEY_RESTART.c */
#define KEY_RESTART /* TODO */
/* ./src/curses/KEY_RESUME.c */
#define KEY_RESUME /* TODO */
/* ./src/curses/KEY_SAVE.c */
#define KEY_SAVE /* TODO */
/* ./src/curses/KEY_SBEG.c */
#define KEY_SBEG /* TODO */
/* ./src/curses/KEY_SCANCEL.c */
#define KEY_SCANCEL /* TODO */
/* ./src/curses/KEY_SCOMMAND.c */
#define KEY_SCOMMAND /* TODO */
/* ./src/curses/KEY_SCOPY.c */
#define KEY_SCOPY /* TODO */
/* ./src/curses/KEY_SCREATE.c */
#define KEY_SCREATE /* TODO */
/* ./src/curses/KEY_SDC.c */
#define KEY_SDC /* TODO */
/* ./src/curses/KEY_SDL.c */
#define KEY_SDL /* TODO */
/* ./src/curses/KEY_SELECT.c */
#define KEY_SELECT /* TODO */
/* ./src/curses/KEY_SEND.c */
#define KEY_SEND /* TODO */
/* ./src/curses/KEY_SEOL.c */
#define KEY_SEOL /* TODO */
/* ./src/curses/KEY_SEXIT.c */
#define KEY_SEXIT /* TODO */
/* ./src/curses/KEY_SFIND.c */
#define KEY_SFIND /* TODO */
/* ./src/curses/KEY_SHELP.c */
#define KEY_SHELP /* TODO */
/* ./src/curses/KEY_SHOME.c */
#define KEY_SHOME /* TODO */
/* ./src/curses/KEY_SIX.c */
#define KEY_SIX /* TODO */
/* ./src/curses/KEY_SLEFT.c */
#define KEY_SLEFT /* TODO */
/* ./src/curses/KEY_SMESSAGE.c */
#define KEY_SMESSAGE /* TODO */
/* ./src/curses/KEY_SMOVE.c */
#define KEY_SMOVE /* TODO */
/* ./src/curses/KEY_SNEXT.c */
#define KEY_SNEXT /* TODO */
/* ./src/curses/KEY_SOPTIONS.c */
#define KEY_SOPTIONS /* TODO */
/* ./src/curses/KEY_SPREVIOUS.c */
#define KEY_SPREVIOUS /* TODO */
/* ./src/curses/KEY_SPRINT.c */
#define KEY_SPRINT /* TODO */
/* ./src/curses/KEY_SREDO.c */
#define KEY_SREDO /* TODO */
/* ./src/curses/KEY_SREPLACE.c */
#define KEY_SREPLACE /* TODO */
/* ./src/curses/KEY_SRIGHT.c */
#define KEY_SRIGHT /* TODO */
/* ./src/curses/KEY_SRSUME.c */
#define KEY_SRSUME /* TODO */
/* ./src/curses/KEY_SSAVE.c */
#define KEY_SSAVE /* TODO */
/* ./src/curses/KEY_SSUSPEND.c */
#define KEY_SSUSPEND /* TODO */
/* ./src/curses/KEY_SUNDO.c */
#define KEY_SUNDO /* TODO */
/* ./src/curses/KEY_SUSPEND.c */
#define KEY_SUSPEND /* TODO */
/* ./src/curses/KEY_UNDO.c */
#define KEY_UNDO /* TODO */
/* ./src/curses/PAIR_NUMBER.c */
#define PAIR_NUMBER(__value) /* TODO */
/* ./src/curses/WACS_BLOCK.c */
#define WACS_BLOCK /* TODO */
/* ./src/curses/WACS_BOARD.c */
#define WACS_BOARD /* TODO */
/* ./src/curses/WACS_BTEE.c */
#define WACS_BTEE /* TODO */
/* ./src/curses/WACS_BULLET.c */
#define WACS_BULLET /* TODO */
/* ./src/curses/WACS_CKBOARD.c */
#define WACS_CKBOARD /* TODO */
/* ./src/curses/WACS_DARROW.c */
#define WACS_DARROW /* TODO */
/* ./src/curses/WACS_DEGREE.c */
#define WACS_DEGREE /* TODO */
/* ./src/curses/WACS_DIAMOND.c */
#define WACS_DIAMOND /* TODO */
/* ./src/curses/WACS_HLINE.c */
#define WACS_HLINE /* TODO */
/* ./src/curses/WACS_LANTERN.c */
#define WACS_LANTERN /* TODO */
/* ./src/curses/WACS_LARROW.c */
#define WACS_LARROW /* TODO */
/* ./src/curses/WACS_LLCORNER.c */
#define WACS_LLCORNER /* TODO */
/* ./src/curses/WACS_LRCORNER.c */
#define WACS_LRCORNER /* TODO */
/* ./src/curses/WACS_LTEE.c */
#define WACS_LTEE /* TODO */
/* ./src/curses/WACS_PLMINUS.c */
#define WACS_PLMINUS /* TODO */
/* ./src/curses/WACS_PLUS.c */
#define WACS_PLUS /* TODO */
/* ./src/curses/WACS_RARROW.c */
#define WACS_RARROW /* TODO */
/* ./src/curses/WACS_RTEE.c */
#define WACS_RTEE /* TODO */
/* ./src/curses/WACS_S1.c */
#define WACS_S1 /* TODO */
/* ./src/curses/WACS_S9.c */
#define WACS_S9 /* TODO */
/* ./src/curses/WACS_TTEE.c */
#define WACS_TTEE /* TODO */
/* ./src/curses/WACS_UARROW.c */
#define WACS_UARROW /* TODO */
/* ./src/curses/WACS_ULCORNER.c */
#define WACS_ULCORNER /* TODO */
/* ./src/curses/WACS_URCORNER.c */
#define WACS_URCORNER /* TODO */
/* ./src/curses/WACS_VLINE.c */
#define WACS_VLINE /* TODO */
/* ./src/curses/WA_ALTCHARSET.c */
#define WA_ALTCHARSET                                                     (1<<0)
/* ./src/curses/WA_BLINK.c */
#define WA_BLINK                                                          (1<<1)
/* ./src/curses/WA_BOLD.c */
#define WA_BOLD                                                           (1<<2)
/* ./src/curses/WA_DIM.c */
#define WA_DIM                                                            (1<<3)
/* ./src/curses/WA_HORIZONTAL.c */
#define WA_HORIZONTAL                                                     (1<<4)
/* ./src/curses/WA_INVIS.c */
#define WA_INVIS                                                          (1<<5)
/* ./src/curses/WA_LEFT.c */
#define WA_LEFT                                                           (1<<6)
/* ./src/curses/WA_LOW.c */
#define WA_LOW                                                            (1<<7)
/* ./src/curses/WA_PROTECT.c */
#define WA_PROTECT                                                        (1<<8)
/* ./src/curses/WA_REVERSE.c */
#define WA_REVERSE                                                        (1<<9)
/* ./src/curses/WA_RIGHT.c */
#define WA_RIGHT                                                         (1<<10)
/* ./src/curses/WA_STANDOUT.c */
#define WA_STANDOUT                                                      (1<<11)
/* ./src/curses/WA_TOP.c */
#define WA_TOP                                                           (1<<12)
/* ./src/curses/WA_UNDERLINE.c */
#define WA_UNDERLINE                                                     (1<<13)
/* ./src/curses/_XOPEN_CURSES.c */
#define _XOPEN_CURSES                                            (_XOPEN_SOURCE)
/* ./src/curses/getbegyx.c */
#define getbegyx(_win, _y, _x) /* TODO */
/* ./src/curses/getmaxyx.c */
#define getmaxyx(_win, _y, _x) /* TODO */
/* ./src/curses/getparyx.c */
#define getparyx(_win, _y, _x) /* TODO */
#endif

#if	(defined _XOPEN_SOURCE && 700 <= _XOPEN_SOURCE)
/* ./src/curses/KEY_CODE_YES.c */
#define KEY_CODE_YES                                                         (1)
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/curses/SCREEN.c */
#ifndef __TYPE_SCREEN_DEFINED__
#define __TYPE_SCREEN_DEFINED__
typedef struct __SCREEN SCREEN;
#endif

/* ./src/curses/WINDOW.c */
#ifndef __TYPE_WINDOW_DEFINED__
#define __TYPE_WINDOW_DEFINED__
typedef struct __WINDOW WINDOW;
#endif

/* ./src/curses/bool.c */
#ifndef __TYPE_bool_DEFINED__
#define __TYPE_bool_DEFINED__
#if defined __STDC_VERSION__ && 199901L <= __STDC_VERSION__
typedef _Bool bool;
#else
typedef int bool;
#endif
#endif

/* ./src/curses/chtype.c */
#ifndef __TYPE_chtype_DEFINED__
#define __TYPE_chtype_DEFINED__
typedef unsigned int chtype;
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/curses/attr_t.c */
#ifndef __TYPE_attr_t_DEFINED__
#define __TYPE_attr_t_DEFINED__
typedef unsigned int attr_t;
#endif

/* ./src/curses/cchar_t.c */
#ifndef __TYPE_cchar_t_DEFINED__
#define __TYPE_cchar_t_DEFINED__
typedef wchar_t * cchar_t;
#endif

/* src/stddef/wchar_t.c */
#ifndef __TYPE_wchar_t_DEFINED__
#define __TYPE_wchar_t_DEFINED__
typedef int                                                             wchar_t;
#endif

/* src/wctype/wint_t.c */
#ifndef __TYPE_wint_t_DEFINED__
#define __TYPE_wint_t_DEFINED__
typedef int                                                              wint_t;
#endif

#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/curses/COLS.c */
extern int COLS;
/* ./src/curses/LINES.c */
extern int LINES;
/* ./src/curses/curscr.c */
extern SCREEN *curscr;
/* ./src/curses/stdscr.c */
extern WINDOW *stdscr;
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/curses/COLORS.c */
extern int COLORS;
/* ./src/curses/COLOR_PAIRS.c */
extern int COLOR_PAIRS;
#endif

#if	(defined _XOPEN_SOURCE)
/* ./src/curses/add_wchnstr.c */
int wadd_wchnstr(WINDOW * __win, const cchar_t * __wchstr, int __n);
/* ./src/curses/addch.c */
int waddch(WINDOW * __win, const chtype __ch);
/* ./src/curses/addchstr.c */
int waddchstr(WINDOW * __win, const chtype * __chstr);
/* ./src/curses/attroff.c */
int wattroff(WINDOW * __win, int __attrs);
/* ./src/curses/attron.c */
int wattron(WINDOW * __win, int __attrs);
/* ./src/curses/attrset.c */
int wattrset(WINDOW * __win, int __attrs);
/* ./src/curses/baudrate.c */
int baudrate(void);
/* ./src/curses/beep.c */
int beep(void);
/* ./src/curses/box.c */
int box(WINDOW * __win, chtype __verch, chtype __horch);
/* ./src/curses/cbreak.c */
int cbreak(void);
/* ./src/curses/clear.c */
int wclear(WINDOW * __win);
/* ./src/curses/clearok.c */
int clearok(WINDOW * __win, bool __bf);
/* ./src/curses/clrtobot.c */
int wclrtobot(WINDOW * __win);
/* ./src/curses/clrtoeol.c */
int wclrtoeol(WINDOW * __win);
/* ./src/curses/def_prog_mode.c */
int def_prog_mode(void);
/* ./src/curses/def_shell_mode.c */
int def_shell_mode(void);
/* ./src/curses/delay_output.c */
int delay_output(int __ms);
/* ./src/curses/delch.c */
int wdelch(WINDOW * __win);
/* ./src/curses/deleteln.c */
int wdeleteln(WINDOW * __win);
/* ./src/curses/delwin.c */
void delwin(WINDOW * __win);
/* ./src/curses/doupdate.c */
int doupdate(void);
/* ./src/curses/echo.c */
int echo(void);
/* ./src/curses/endwin.c */
int endwin(void);
/* ./src/curses/erase.c */
int werase(WINDOW * __win);
/* ./src/curses/erasechar.c */
char erasechar(void);
/* ./src/curses/flash.c */
int flash(void);
/* ./src/curses/flushinp.c */
int flushinp(void);
/* ./src/curses/getch.c */
int wgetch(WINDOW * __win);
/* ./src/curses/getnstr.c */
int wgetnstr(WINDOW * __win, char * __str, int __n);
/* ./src/curses/getstr.c */
int wgetstr(WINDOW * __win, char * __str);
/* ./src/curses/has_ic.c */
bool has_ic(void);
/* ./src/curses/has_il.c */
bool has_il(void);
/* ./src/curses/idlok.c */
int idlok(WINDOW * __win, bool __bf);
/* ./src/curses/inch.c */
chtype winch(WINDOW * __win);
/* ./src/curses/initscr.c */
WINDOW * initscr(void);
/* ./src/curses/insch.c */
int winsch(WINDOW * __win, chtype __ch);
/* ./src/curses/insertln.c */
int winsertln(WINDOW * __win);
/* ./src/curses/intrflush.c */
int intrflush(WINDOW * __win, bool __bf);
/* ./src/curses/keypad.c */
int keypad(WINDOW * __win, bool __bf);
/* ./src/curses/killchar.c */
char killchar(void);
/* ./src/curses/leaveok.c */
int leaveok(WINDOW * __win, bool __bf);
/* ./src/curses/longname.c */
char * longname(void);
/* ./src/curses/move.c */
int wmove(WINDOW * __win, int __y, int __x);
/* ./src/curses/mvprintw.c */
int mvprintw(int __y, int __x, const char * __fmt, ...);
/* ./src/curses/mvscanw.c */
int mvscanw(int __y, int __x, const char * __fmt, ...);
/* ./src/curses/mvwin.c */
int mvwin(WINDOW * __win, int __y, int __x);
/* ./src/curses/mvwprintw.c */
int mvwprintw(WINDOW * __win, int __y, int __x, const char * __fmt, ...);
/* ./src/curses/mvwscanw.c */
int mvwscanw(WINDOW * __win, int __y, int __x, const char * __fmt, ...);
/* ./src/curses/newpad.c */
WINDOW * newpad(int __nlines, int __ncols);
/* ./src/curses/newterm.c */
SCREEN * newterm(const char * __type, FILE * __outfile, FILE * __infile);
/* ./src/curses/newwin.c */
WINDOW * newwin(int __nlines, int __ncols, int __begin_y, int __begin_x);
/* ./src/curses/nl.c */
int nl(void);
/* ./src/curses/nocbreak.c */
int nocbreak(void);
/* ./src/curses/nodelay.c */
int nodelay(WINDOW * __win, bool __bf);
/* ./src/curses/noecho.c */
int noecho(void);
/* ./src/curses/nonl.c */
int nonl(void);
/* ./src/curses/noraw.c */
int noraw(void);
/* ./src/curses/overlay.c */
int overlay(const WINDOW * __srcwin, WINDOW * __dstwin);
/* ./src/curses/overwrite.c */
int overwrite(const WINDOW * __srcwin, WINDOW * __dstwin);
/* ./src/curses/pnoutrefresh.c */
int pnoutrefresh(WINDOW * __pad, int __pminrow, int __pmincol, int __sminrow, int __smincol, int __smaxrow, int __smaxcol);
/* ./src/curses/prefresh.c */
int prefresh(WINDOW * __pad, int __pminrow, int __pmincol, int __sminrow, int __smincol, int __smaxrow, int __smaxcol);
/* ./src/curses/printw.c */
int printw(const char * __fmt, ...);
/* ./src/curses/raw.c */
int raw(void);
/* ./src/curses/refresh.c */
int wrefresh(WINDOW * __win);
/* ./src/curses/reset_prog_mode.c */
int reset_prog_mode(void);
/* ./src/curses/reset_shell_mode.c */
int reset_shell_mode(void);
/* ./src/curses/resetty.c */
int resetty(void);
/* ./src/curses/savetty.c */
int savetty(void);
/* ./src/curses/scanw.c */
int scanw(const char * __fmt, ...);
/* ./src/curses/scrollok.c */
int scrollok(WINDOW * __win, bool __bf);
/* ./src/curses/set_term.c */
SCREEN * set_term(SCREEN * __new);
/* ./src/curses/setscrreg.c */
int wsetscrreg(WINDOW * __win, int __top, int __bot);
/* ./src/curses/standend.c */
int wstandend(WINDOW * __win);
/* ./src/curses/standout.c */
int wstandout(WINDOW * __win);
/* ./src/curses/subwin.c */
WINDOW * subwin(WINDOW * __orig, int __nlines, int __ncols, int __begin_y, int __begin_x);
/* ./src/curses/touchwin.c */
int touchwin(WINDOW * __win);
/* ./src/curses/typeahead.c */
int typeahead(int __fildes);
/* ./src/curses/wnoutrefresh.c */
int wnoutrefresh(WINDOW * __win);
/* ./src/curses/wprintw.c */
int wprintw(WINDOW * __win, const char * __fmt, ...);
/* ./src/curses/wscanw.c */
int wscanw(WINDOW * __win, const char * __fmt, ...);
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/curses/add_wch.c */
int wadd_wch(WINDOW * __win, const cchar_t * __wch);
/* ./src/curses/add_wchstr.c */
int wadd_wchstr(WINDOW * __win, const cchar_t * __wchstr);
/* ./src/curses/addchnstr.c */
int waddchnstr(WINDOW * __win, const chtype * __chstr, int __n);
/* ./src/curses/addnstr.c */
int waddnstr(WINDOW * __win, const char * __str, int __n);
/* ./src/curses/addnwstr.c */
int waddnwstr(WINDOW * __win, const wchar_t * __wstr, int __n);
/* ./src/curses/addstr.c */
int waddstr(WINDOW *__win, const char * __str);
/* ./src/curses/addwstr.c */
int waddwstr(WINDOW * __win, const wchar_t * __wstr);
/* ./src/curses/attr_get.c */
int wattr_get(WINDOW * __win, attr_t * __attrs, short * __color_pair_number, void * __opts);
/* ./src/curses/attr_off.c */
int wattr_off(WINDOW * __win, attr_t __attrs, void * __opts);
/* ./src/curses/attr_on.c */
int wattr_on(WINDOW * __win, attr_t __attrs, void * __opts);
/* ./src/curses/attr_set.c */
int wattr_set(WINDOW * __win, attr_t __attrs, short __color_pair_number, void * __opts);
/* ./src/curses/bkgd.c */
int wbkgd(WINDOW * __win, chtype __ch);
/* ./src/curses/bkgdset.c */
void wbkgdset(WINDOW * __win, chtype __ch);
/* ./src/curses/bkgrnd.c */
int wbkgrnd(WINDOW * __win, const cchar_t * __wch);
/* ./src/curses/bkgrndset.c */
void wbkgrndset(WINDOW * __win, const cchar_t * __wch);
/* ./src/curses/border.c */
int wborder(WINDOW * __win, chtype __ls, chtype __rs, chtype __ts, chtype __bs, chtype __tl, chtype __tr, chtype __bl, chtype __br);
/* ./src/curses/border_set.c */
int wborder_set(WINDOW * __win, const cchar_t * __ls, const cchar_t * __rs, const cchar_t * __ts, const cchar_t * __bs, const cchar_t * __tl, const cchar_t * __tr, const cchar_t * __bl, const cchar_t * __br);
/* ./src/curses/box_set.c */
int box_set(WINDOW * __win, const cchar_t * __verch, const cchar_t * __horch);
/* ./src/curses/can_change_color.c */
bool can_change_color(void);
/* ./src/curses/chgat.c */
int wchgat(WINDOW * __win, int __n, attr_t __attr, short __color, const void * __opts);
/* ./src/curses/color_content.c */
int color_content(short __color, short * __red, short * __green, short * __blue);
/* ./src/curses/color_set.c */
int wcolor_set(WINDOW * __win, short __color_pair_number, void * __opts);
/* ./src/curses/copywin.c */
int copywin(const WINDOW * __srcwin, WINDOW * __dstwin, int __sminrow, int __smincol, int __dminrow, int __dmincol, int __dmaxrow, int __dmaxcol, int __overlay);
/* ./src/curses/curs_set.c */
int curs_set(int __visibility);
/* ./src/curses/delscreen.c */
void delscreen(SCREEN * __sp);
/* ./src/curses/derwin.c */
WINDOW * derwin(WINDOW * __orig, int __nlines, int __ncols, int __begin_y, int __begin_x);
/* ./src/curses/dupwin.c */
WINDOW * dupwin(WINDOW * __win);
/* ./src/curses/echo_wchar.c */
int wecho_wchar(WINDOW * __win, const cchar_t * __wch);
/* ./src/curses/echochar.c */
int wechochar(WINDOW * __win, const chtype __wch);
/* ./src/curses/erasewchar.c */
int erasewchar(wchar_t * __ch);
/* ./src/curses/filter.c */
void filter(void);
/* ./src/curses/get_wch.c */
int wget_wch(WINDOW * __win, wint_t * __ch);
/* ./src/curses/get_wstr.c */
int wget_wstr(WINDOW * __win, wint_t * __wstr);
/* ./src/curses/getbkgd.c */
chtype getbkgd(WINDOW * __win);
/* ./src/curses/getbkgrnd.c */
chtype wgetbkgrnd(WINDOW * __win, cchar_t * __wch);
/* ./src/curses/getcchar.c */
int getcchar(const cchar_t * __wcval, wchar_t * __wch, attr_t * __attrs, short * __color_pair, void * __opts);
/* ./src/curses/getn_wstr.c */
int wgetn_wstr(WINDOW * __win, wint_t * __wstr, int __n);
/* ./src/curses/getwin.c */
WINDOW * getwin(FILE * __filep);
/* ./src/curses/halfdelay.c */
int halfdelay(int __tenths);
/* ./src/curses/has_colors.c */
bool has_colors(void);
/* ./src/curses/hline.c */
int whline(WINDOW * __win, chtype __ch, int __n);
/* ./src/curses/hline_set.c */
int whline_set(WINDOW * __win, const cchar_t * __wch, int __n);
/* ./src/curses/idcok.c */
void idcok(WINDOW * __win, bool __bf);
/* ./src/curses/immedok.c */
void immedok(WINDOW * __win, bool __bf);
/* ./src/curses/in_wch.c */
int win_wch(WINDOW * __win, cchar_t * __wcval);
/* ./src/curses/in_wchnstr.c */
int win_wchnstr(WINDOW * __win, cchar_t * __wcstr, int __n);
/* ./src/curses/in_wchstr.c */
int win_wchstr(WINDOW * __win, cchar_t * __wcstr);
/* ./src/curses/inchnstr.c */
int winchnstr(WINDOW * __win, chtype * __chstr, int __n);
/* ./src/curses/inchstr.c */
int winchstr(WINDOW * __win, chtype * __chstr);
/* ./src/curses/init_color.c */
int init_color(short __color, short __red, short __green, short __blue);
/* ./src/curses/init_pair.c */
int init_pair(short __pai, short __f, short __b);
/* ./src/curses/innstr.c */
int winnstr(WINDOW * __win, char * __str, int __n);
/* ./src/curses/innwstr.c */
int winnwstr(WINDOW * __win, wchar_t * __wstr, int __n);
/* ./src/curses/ins_nwstr.c */
int wins_nwstr(WINDOW * __win, const wchar_t * __wstr, int __n);
/* ./src/curses/ins_wch.c */
int wins_wch(WINDOW * __win, const cchar_t * __wch);
/* ./src/curses/ins_wstr.c */
int wins_wstr(WINDOW * __win, const wchar_t * __wstr);
/* ./src/curses/insdelln.c */
int winsdelln(WINDOW * __win, int __n);
/* ./src/curses/insnstr.c */
int winsnstr(WINDOW * __win, const char * __str, int __n);
/* ./src/curses/insstr.c */
int winsstr(WINDOW * __win, const char * __str);
/* ./src/curses/instr.c */
int winstr(WINDOW * __win, char * __str);
/* ./src/curses/inwstr.c */
int winwstr(WINDOW * __win, wchar_t * __wstr);
/* ./src/curses/is_linetouched.c */
bool is_linetouched(WINDOW * __win, int __line);
/* ./src/curses/is_wintouched.c */
bool is_wintouched(WINDOW * __win);
/* ./src/curses/isendwin.c */
bool isendwin(void);
/* ./src/curses/key_name.c */
char * key_name(wchar_t __c);
/* ./src/curses/keyname.c */
char * keyname(int __c);
/* ./src/curses/killwchar.c */
int killwchar(wchar_t * __ch);
/* ./src/curses/meta.c */
int meta(WINDOW * __win, bool __bf);
/* ./src/curses/mvcur.c */
int mvcur(int __oldrow, int __oldcol, int __newrow, int __newcol);
/* ./src/curses/mvderwin.c */
WINDOW * mvderwin(WINDOW * __orig, int __par_y, int __par_x);
/* ./src/curses/napms.c */
int napms(int __ms);
/* ./src/curses/noqiflush.c */
void noqiflush(void);
/* ./src/curses/notimeout.c */
int notimeout(WINDOW * __win, bool __bf);
/* ./src/curses/pair_content.c */
int pair_content(short __pair, short * __f, short * __b);
/* ./src/curses/pecho_wchar.c */
int pecho_wchar(WINDOW * __pad, const cchar_t * __wch);
/* ./src/curses/pechochar.c */
int pechochar(WINDOW * __pad, chtype __ch);
/* ./src/curses/putwin.c */
int putwin(WINDOW * __win, FILE * __filep);
/* ./src/curses/qiflush.c */
void qiflush(void);
/* ./src/curses/redrawwin.c */
int redrawwin(WINDOW * __win);
/* ./src/curses/ripoffline.c */
int ripoffline(int __line, int (*__init)(WINDOW * __win, int __columns));
/* ./src/curses/scr_dump.c */
int scr_dump(const char * __filename);
/* ./src/curses/scr_init.c */
int scr_init(const char * __filename);
/* ./src/curses/scr_restore.c */
int scr_restore(const char * __filename);
/* ./src/curses/scr_set.c */
int scr_set(const char * __filename);
/* ./src/curses/scrl.c */
int wscrl(WINDOW * __win, int __n);
/* ./src/curses/setcchar.c */
int setcchar(cchar_t * __wcval, const wchar_t * __wch, const attr_t __attrs, short __color_pair, const void * __opts);
/* ./src/curses/slk_attr_off.c */
int slk_attr_off(const chtype __attrs, void * __opts);
/* ./src/curses/slk_attr_on.c */
int slk_attr_on(const chtype __attrs, void * __opts);
/* ./src/curses/slk_attr_set.c */
int slk_attr_set(const chtype __attrs, short __color_pair_number, void * __opts);
/* ./src/curses/slk_attroff.c */
int slk_attroff(const chtype __attrs);
/* ./src/curses/slk_attron.c */
int slk_attron(const chtype __attrs);
/* ./src/curses/slk_attrset.c */
int slk_attrset(const chtype __attrs);
/* ./src/curses/slk_clear.c */
int slk_clear(void);
/* ./src/curses/slk_color.c */
int slk_color(short __color_pair_number);
/* ./src/curses/slk_init.c */
int slk_init(int __fmt);
/* ./src/curses/slk_label.c */
char * slk_label(int __labnum);
/* ./src/curses/slk_noutrefresh.c */
int slk_noutrefresh(void);
/* ./src/curses/slk_refresh.c */
int slk_refresh(void);
/* ./src/curses/slk_restore.c */
int slk_restore(void);
/* ./src/curses/slk_set.c */
int slk_set(int __labnum, const char * __label, int __justify);
/* ./src/curses/slk_touch.c */
int slk_touch(void);
/* ./src/curses/slk_wset.c */
int slk_wset(int __labnum, const wchar_t * __label, int __justify);
/* ./src/curses/start_color.c */
int start_color(void);
/* ./src/curses/subpad.c */
WINDOW * subpad(WINDOW * __orig, int __nlines, int __ncols, int __begin_y, int __begin_x);
/* ./src/curses/syncok.c */
int syncok(WINDOW * __win, bool __bf);
/* ./src/curses/term_attrs.c */
attr_t terma_ttrs(void);
/* ./src/curses/termattrs.c */
chtype termattrs(void);
/* ./src/curses/termname.c */
char * termname(void);
/* ./src/curses/timeout.c */
void wtimeout(WINDOW * __win, int __delay);
/* ./src/curses/touchline.c */
int touchline(WINDOW * __win, int __start, int __count);
/* ./src/curses/unget_wch.c */
int unget_wch(const wchar_t __wch);
/* ./src/curses/ungetch.c */
int ungetch(int __ch);
/* ./src/curses/untouchwin.c */
int untouchwin(WINDOW * __win);
/* ./src/curses/use_env.c */
void use_env(bool __boolval);
/* ./src/curses/vid_attr.c */
int vid_ttr(attr_t __attr, short __color_pair_number, void * __opt);
/* ./src/curses/vid_puts.c */
int vid_puts(attr_t __attr, short __color_pair_number, void * __opt, int (*__putfunc)(int));
/* ./src/curses/vidattr.c */
int vidattr(chtype __attr);
/* ./src/curses/vidputs.c */
int vidputs(chtype __attr, int (*__putfunc)(int));
/* ./src/curses/vline.c */
int wvline(WINDOW * __win, chtype __ch, int __n);
/* ./src/curses/vline_set.c */
int wvline_set(WINDOW * __win, const cchar_t * __wch, int __n);
/* ./src/curses/vw_printw.c */
int vw_printw(WINDOW * __win, const char * __fmt, va_list __varglist);
/* ./src/curses/vw_scanw.c */
int vw_scanw(WINDOW * __win, const char * __fmt, va_list __varglist);
/* ./src/curses/wcursyncup.c */
void wcursyncup(WINDOW * __win);
/* ./src/curses/wredrawln.c */
int wredrawln(WINDOW * __win, int __beg_line, int __num_lines);
/* ./src/curses/wsyncdown.c */
void wsyncdown(WINDOW * __win);
/* ./src/curses/wsyncup.c */
void wsyncup(WINDOW * __win);
/* ./src/curses/wtouchln.c */
int wtouchln(WINDOW * __win, int __y, int __x, int __changed);
/* ./src/curses/wunctrl.c */
wchar_t * wunctrl(cchar_t * __wc);
#endif


#endif

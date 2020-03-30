#ifndef __ISO646_H__
#define __ISO646_H__

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

#if	(defined __STDC_VERSION__ && 199409 <= __STDC_VERSION__)
/* ./src/iso646/and.c */
#define and                                                                   &&
/* ./src/iso646/and_eq.c */
#define and_eq                                                                &=
/* ./src/iso646/bitand.c */
#define bitand                                                                 &
/* ./src/iso646/bitor.c */
#define bitor                                                                  |
/* ./src/iso646/compl.c */
#define compl                                                                  ~
/* ./src/iso646/not.c */
#define not                                                                    !
/* ./src/iso646/not_eq.c */
#define not_eq                                                                !=
/* ./src/iso646/or.c */
#define or                                                                    ||
/* ./src/iso646/or_eq.c */
#define or_eq                                                                 |=
/* ./src/iso646/xor.c */
#define xor                                                                    ^
/* ./src/iso646/xor_eq.c */
#define xor_eq                                                                ^=
#endif


#endif

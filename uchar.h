#ifndef __UCHAR_H__
#define __UCHAR_H__

#include <__ung.h>
#include <wchar.h>	/* size_t and mbstate_t */

typedef unsigned short                                                 char16_t;
typedef unsigned int                                                   char32_t;

size_t c16rtomb(char * restrict __s, char16_t __c16, mbstate_t * restrict __ps);
size_t c32rtomb(char * restrict __s, char32_t __c32, mbstate_t * restrict __ps);
size_t mbrtoc16(char16_t * restrict __pc16, const char * restrict __s, size_t __n, mbstate_t * restrict __ps);
size_t mbrtoc32(char32_t * restrict __pc32, const char * restrict __s, size_t __n, mbstate_t * restrict __ps);

#ifndef __UNG_INTERNAL__
size_t __c16rtomb(const char *, const char *, unsigned long long, char * restrict __s, char16_t __c16, mbstate_t * restrict __ps);
#define c16rtomb(__s, __c, __ps) __c16rtomb(__FILE__, __func__, __LINE__, __s, __c, __ps)
size_t __c32rtomb(const char *, const char *, unsigned long long, char * restrict __s, char32_t __c32, mbstate_t * restrict __ps);
#define c32rtomb(__s, __c, __ps) __c32rtomb(__FILE__, __func__, __LINE__, __s, __c, __ps)
size_t __mbrtoc16(const char *, const char *, unsigned long long, char16_t * restrict __pc16, const char * restrict __s, size_t __n, mbstate_t * restrict __ps);
#define mbrtoc16(__p, __s, __n, __ps) __mbrtoc16(__FILE__, __func__, __LINE__, __p, __s, __n, __ps)
size_t __mbrtoc32(const char *, const char *, unsigned long long, char32_t * restrict __pc32, const char * restrict __s, size_t __n, mbstate_t * restrict __ps);
#define mbrtoc32(__p, __s, __n, __ps) __mbrtoc32(__FILE__, __func__, __LINE__, __p, __s, __n, __ps)
#endif

#endif

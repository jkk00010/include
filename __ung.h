#ifdef auto
#error Undefined Behavior: Keyword auto is defined as a macro
#undef auto
#endif

#ifdef break
#error Undefined Behavior: Keyword break is defined as a macro
#undef break
#endif

#ifdef case
#error Undefined Behavior: Keyword case is defined as a macro
#undef case
#endif

#ifdef char
#error Undefined Behavior: Keyword char is defined as a macro
#undef char
#endif

#ifdef const
#error Undefined Behavior: Keyword const is defined as a macro
#undef const
#endif

#ifdef continue
#error Undefined Behavior: Keyword continue is defined as a macro
#undef continue
#endif

#ifdef default
#error Undefined Behavior: Keyword default is defined as a macro
#undef default
#endif

#ifdef do
#error Undefined Behavior: Keyword do is defined as a macro
#undef do
#endif

#ifdef double
#error Undefined Behavior: Keyword double is defined as a macro
#undef double
#endif

#ifdef else
#error Undefined Behavior: Keyword else is defined as a macro
#undef else
#endif

#ifdef enum
#error Undefined Behavior: Keyword enum is defined as a macro
#undef enum
#endif

#ifdef extern
#error Undefined Behavior: Keyword extern is defined as a macro
#undef extern
#endif

#ifdef float
#error Undefined Behavior: Keyword float is defined as a macro
#undef float
#endif

#ifdef for
#error Undefined Behavior: Keyword for is defined as a macro
#undef for
#endif

#ifdef goto
#error Undefined Behavior: Keyword goto is defined as a macro
#undef goto
#endif

#ifdef if
#error Undefined Behavior: Keyword if is defined as a macro
#undef if
#endif

#ifdef inline
#error Undefined Behavior: Keyword inline is defined as a macro
#undef inline
#endif

#ifdef int
#error Undefined Behavior: Keyword int is defined as a macro
#undef int
#endif

#ifdef long
#error Undefined Behavior: Keyword long is defined as a macro
#undef long
#endif

#ifdef register
#error Undefined Behavior: Keyword register is defined as a macro
#undef register
#endif

#ifdef restrict
#if (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L)
#error Undefined Behavior: Keyword restrict is defined as a macro
#undef restrict
#endif
#endif

#ifdef return
#error Undefined Behavior: Keyword return is defined as a macro
#undef return
#endif

#ifdef short
#error Undefined Behavior: Keyword short is defined as a macro
#undef short
#endif

#ifdef signed
#error Undefined Behavior: Keyword signed is defined as a macro
#undef signed
#endif

#ifdef sizeof
#error Undefined Behavior: Keyword sizeof is defined as a macro
#undef sizeof
#endif

#ifdef static
#error Undefined Behavior: Keyword static is defined as a macro
#undef static
#endif

#ifdef struct
#error Undefined Behavior: Keyword struct is defined as a macro
#undef struct
#endif

#ifdef switch
#error Undefined Behavior: Keyword switch is defined as a macro
#undef switch
#endif

#ifdef typedef
#error Undefined Behavior: Keyword typedef is defined as a macro
#undef typedef
#endif

#ifdef union
#error Undefined Behavior: Keyword union is defined as a macro
#undef union
#endif

#ifdef unsigned
#error Undefined Behavior: Keyword unsigned is defined as a macro
#undef unsigned
#endif

#ifdef void
#error Undefined Behavior: Keyword void is defined as a macro
#undef void
#endif

#ifdef volatile
#error Undefined Behavior: Keyword volatile is defined as a macro
#undef volatile
#endif

#ifdef while
#error Undefined Behavior: Keyword while is defined as a macro
#undef while
#endif

#ifdef _Alignas
#error Undefined Behavior: Keyword _Alignas is defined as a macro
#undef _Alignas
#endif

#ifdef _Alignof
#error Undefined Behavior: Keyword _Alignof is defined as a macro
#undfef _Alignof
#endif

#ifdef _Atomic
#error Undefined Behavior: Keyword _Atomic is defined as a macro
#unfdef _Atomic
#endif

#ifdef _Bool
#error Undefined Behavior: Keyword _Bool is defined as a macro
#undef _Bool
#endif

#ifdef _Complex
#error Undefined Behavior: Keyword _Complex is defined as a macro
#undef _Complex
#endif

#ifdef _Generic
#error Undefined Behavior: Keyword _Generic is defined as a macro
#undef _Generic
#endif

#ifdef _Imaginary
#error Undefined Behavior: Keyword _Imaginary is defined as a macro
#undef _Imaginary
#endif

#ifdef _Noreturn
#if (defined __STDC_VERSION__ && __STDC_VERSION__ >= 201112L)
#error Undefined Behavior: Keyword _Noreturn is defined as a macro
#undef _Noreturn
#endif
#endif

#ifdef _Static_assert
#error Undefined Behavior: Keyword _Static_assert is defined as a macro
#undef _Static_assert
#endif

#ifdef _Thread_local
#error Undefined Behavior: Keyword _Thread_local is defined as a macro
#undef _Thread_local
#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)                 
#define restrict                                                                
#endif 

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#define __func__ "unknown function"
#endif

#if (!defined __STDC_VERSION__) || (__STDC_VERSION__ < 200112L)                 
#define _Noreturn                                                               
#endif                                                                          

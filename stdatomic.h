#ifndef __STDC_VERSION_STDATOMIC_H__
#if defined __STDC_VERSION__
#define __STDC_VERSION_STDATOMIC_H__ __STDC_VERSION__
#else
#define __STDC_VERSION_STDATOMIC_H__ 1
#endif

#include <__ung.h>

#include <wchar.h>
#include <inttypes.h>
#include <stddef.h>

#define __BASE int
#define __TYPE int

#define ATOMIC_BOOL_LOCK_FREE                                                (1)
#define ATOMIC_CHAR_16_T_LOCK_FREE                                           (1)
#define ATOMIC_CHAR32_T_LOCK_FREE                                            (1)
#define ATOMIC_CHAR_LOCK_FREE                                                (1)
#define ATOMIC_FLAG_INIT                                                     (0)
#define ATOMIC_INT_LOCK_FREE                                                 (1)
#define ATOMIC_LLONG_LOCK_FREE                                               (1)
#define ATOMIC_LONG_LOCK_FREE                                                (1)
#define ATOMIC_POINTER_LOCK_FREE                                             (1)
#define ATOMIC_SHORT_LOCK_FREE                                               (1)
#define ATOMIC_VAR_INIT(__value)                                       (__value)
#define ATOMIC_WCHAR_T_LOCK_FREE                                             (1)

typedef                                                            _Atomic _Bool
	atomic_flag;
typedef _Atomic int atomic_int;
typedef _Atomic int_fast16_t atomic_int_fast16_t;
typedef _Atomic int_fast32_t atomic_int_fast32_t;
typedef _Atomic int_fast64_t atomic_int_fast64_t;
typedef _Atomic int_fast8_t atomic_int_fast8_t;
typedef _Atomic int_least16_t atomic_int_least16_t;
typedef _Atomic int_least32_t atomic_int_least32_t;
typedef _Atomic int_least64_t atomic_int_least64_t;
typedef _Atomic int_least8_t atomic_int_least8_t;
typedef _Atomic intmax_t atomic_intmax_t;
typedef _Atomic intptr_t atomic_intptr_t;
typedef _Atomic long long atomic_llong;
typedef _Atomic long atomic_long;
typedef _Atomic ptrdiff_t atomic_ptrdiff_t;
typedef _Atomic signed char atomic_schar;
typedef _Atomic short atomic_short;
typedef _Atomic size_t atomic_size_t;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic uint_fast16_t atomic_uint_fast16_t;
typedef _Atomic uint_fast32_t atomic_uint_fast32_t;
typedef _Atomic uint_fast64_t atomic_uint_fast64_t;
typedef _Atomic uint_fast8_t atomic_uint_fast8_t;
typedef _Atomic uint_least16_t atomic_uint_least16_t;
typedef _Atomic uint_least32_t atomic_uint_least32_t;
typedef _Atomic uint_least64_t atomic_uint_least64_t;
typedef _Atomic uint_least8_t atomic_uint_least8_t;
typedef _Atomic uintmax_t atomic_uintmax_t;
typedef _Atomic uintptr_t atomic_uintptr_t;
typedef _Atomic unsigned long long atomic_ullong;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic wchar_t atomic_wchar_t;
#define kill_dependency(__y)                                               (__y)
typedef enum {
	memory_order_relaxed,
	memory_order_consume,
	memory_order_acquire,
	memory_order_release,
	memory_order_acq_rel,
	memory_order_seq_cst,
} memory_order;

_Bool atomic_compare_exchange_strong(volatile __TYPE *object, __BASE *expected, __BASE desired);
_Bool atomic_compare_exchange_strong_explicit(volatile __TYPE *object, __BASE *expected, __BASE desired, memory_order failure);
_Bool atomic_compare_exchange_weak(volatile __TYPE *object, __BASE *expected, __BASE desired);
_Bool atomic_compare_exchange_weak_explicit(volatile __TYPE *object, __BASE *expected, __BASE desired, memory_order failure);
__BASE atomic_exchange(volatile __TYPE *object, __BASE desired);
__BASE atomic_exchange_explicit(volatile __TYPE *object, __BASE desired, memory_order order);
void atomic_flag_clear(volatile atomic_flag *object);
void atomic_flag_clear_explicit(volatile atomic_flag *object, memory_order order);
_Bool atomic_flag_test_and_set(volatile atomic_flag *object);
_Bool atomic_flag_test_and_set_explicit(volatile atomic_flag *object, memory_order order);
void atomic_init(volatile __TYPE *obj, __BASE value);
_Bool atomic_is_lock_free(const volatile __TYPE *obj);
__BASE atomic_load(const volatile __TYPE *object);
__BASE atomic_load_explicit(const volatile __TYPE *object, memory_order order);
void atomic_signal_fence(memory_order order);
void atomic_store(volatile __TYPE *object, __BASE desired);
void atomic_store_explicit(volatile __TYPE *object, __BASE desired, memory_order order);
void atomic_thread_fence(memory_order order);

#endif

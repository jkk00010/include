#ifndef __THREADS_H__
#define __THREADS_H__

#include <__ung.h>

#include <time.h>

struct timespec;

#define thread_local _Thread_local
#define ONCE_FLAG_INIT /* same as PTHREAD_ONCE_INIT */
#define TSS_DTOR_ITERATIONS (64)

enum {
	mtx_plain	= 1 << 0,
	mtx_recursive	= 1 << 1,
	mtx_timed	= 1 << 2,
};

enum {
	thrd_success	= 0,
	thrd_busy	= 1,
	thrd_error	= 2,
	thrd_nomem	= 3,
	thrd_timedout	= 4,
};

typedef int /* same as pthread_cond_t */ cnd_t;
typedef int /* same as pthread_mutex_t */ mtx_t;
typedef int (*thrd_start_t)(void *);
typedef int /* same as pthread_t */ thrd_t;
typedef void (*tss_dtor_t)(void*);
typedef int /* same as pthread_key_t */ tss_t;
typedef int /* same as pthread_once_t */ once_flag;


void call_once(once_flag *__flag, void (*__func)(void));
int cnd_broadcast(cnd_t *__cond);
void cnd_destroy(cnd_t *__cond);
int cnd_init(cnd_t *__cond);
int cnd_signal(cnd_t *__cond);
int cnd_timedwait(cnd_t *restrict __cond, mtx_t *restrict __mtx, const struct timespec *__restrict ts);
int cnd_wait(cnd_t *__cond, mtx_t *__mtx);
void mtx_destroy(mtx_t *__mtx);
int mtx_init(mtx_t *__mtx, int __type);
int mtx_lock(mtx_t *__mtx);
int mtx_timedlock(mtx_t *restrict __mtx, const struct timespec *restrict __ts);
int mtx_trylock(mtx_t *__mtx);
int mtx_unlock(mtx_t *__mtx);
int thrd_create(thrd_t *__thr, thrd_start_t __func, void *__arg);
thrd_t thrd_current(void);
int thrd_detach(thrd_t __thr);
int thrd_equal(thrd_t __thr0, thrd_t __thr1);
_Noreturn void thrd_exit(int __res);
int thrd_join(thrd_t __thr, int *__res);
int thrd_sleep(const struct timespec *__duration, struct timespec *__remaining);
void thrd_yield(void);
int tss_create(tss_t *__key, tss_dtor_t __dtor);
void tss_delete(tss_t __key);
void *tss_get(tss_t __key);
int tss_set(tss_t __key, void *__val);

#ifndef __UNG_INTERNAL__
void __call_once(const char *, const char *, unsigned long long, once_flag *__flag, void (*__func)(void));
#define call_once(__fl, __fn) __call_once(__FILE__, __func__, __LINE__, __fl, __fn)
int __cnd_broadcast(const char *, const char *, unsigned long long, cnd_t *__cond);
#define cnd_broadcast(__c) __cnd_broadcast(__FILE__, __func__, __LINE__, __c)
void __cnd_destroy(const char *, const char *, unsigned long long, cnd_t *__cond);
#define cnd_destroy(__c) __cnd_destroy(__FILE__, __func__, __LINE__, __c)
int __cnd_init(const char *, const char *, unsigned long long, cnd_t *__cond);
#define cnd_init(__c) __cnd_init(__FILE__, __func__, __LINE__, __c)
int __cnd_signal(const char *, const char *, unsigned long long, cnd_t *__cond);
#define cnd_signal(__c) __cnd_signal(__FILE__, __func__, __LINE__, __c)
int __cnd_timedwait(const char *, const char *, unsigned long long, cnd_t *restrict __cond, mtx_t *restrict __mtx, const struct timespec *__restrict ts);
#define cnd_timedwait(__c, __m, __t) __cnd_timedwait(__FILE__, __func__, __LINE__, __c, __m, __t)
int __cnd_wait(const char *, const char *, unsigned long long, cnd_t *__cond, mtx_t *__mtx);
#define cnd_wait(__c, __m) __cnd_wait(__FILE__, __func__, __LINE__, __c, __m)

void __mtx_destroy(const char *, const char *, unsigned long long, mtx_t *__mtx);
#define mtx_destroy(__m) __mtx_destroy(__FILE__, __func__, __LINE__, __m)
int __mtx_init(const char *, const char *, unsigned long long, mtx_t *__mtx, int __type);
#define mtx_init(__m, __t) __mtx_init(__FILE__, __func__, __LINE__, __m, __t)
int __mtx_lock(const char *, const char *, unsigned long long, mtx_t *__mtx);
#define mtx_lock(__m) __mtx_lock(__FILE__, __func__, __LINE__, __m)
int __mtx_timedlock(const char *, const char *, unsigned long long, mtx_t *restrict __mtx, const struct timespec *restrict __ts);
#define mtx_timedlock(__m, __t) __mtx_timedlock(__FILE__, __func__, __LINE__, __m, __t)
int __mtx_trylock(const char *, const char *, unsigned long long, mtx_t *__mtx);
#define mtx_trylock(__m) __mtx_trylock(__FILE__, __func__, __LINE__, __m)
int __mtx_unlock(const char *, const char *, unsigned long long, mtx_t *__mtx);
#define mtx_unlock(__m) __mtx_unlock(__FILE__, __func__, __LINE__, __m)

int __thrd_create(const char *, const char *, unsigned long long, thrd_t *__thr, thrd_start_t __func, void *__arg);
#define thrd_create(__t, __f, __a) __thrd_create(__FILE__, __func__, __LINE__, __fl, __t, __f, __a)
thrd_t __thrd_current(const char *, const char *, unsigned long long);
#define thrd_current() __thrd_current(__FILE__, __func__, __LINE__)
int __thrd_detach(const char *, const char *, unsigned long long, thrd_t __thr);
#define thrd_detach(__t) __thrd_detach(__FILE__, __func__, __LINE__, __t)
int __thrd_equal(const char *, const char *, unsigned long long, thrd_t __thr0, thrd_t __thr1);
#define thrd_equal(__t0, __t1) __thrd_equal(__FILE__, __func__, __LINE__, __t0, __t1)
_Noreturn void __thrd_exit(const char *, const char *, unsigned long long, int __res);
#define thrd_exit(__r) __thrd_exit(__FILE__, __func__, __LINE__, __r)
int __thrd_join(const char *, const char *, unsigned long long, thrd_t __thr, int *__res);
#define thrd_join(__t, __r) __thrd_join(__FILE__, __func__, __LINE__, __t, __r)
int __thrd_sleep(const char *, const char *, unsigned long long, const struct timespec *__duration, struct timespec *__remaining);
#define thrd_sleep(__d, __r) __thrd_sleep(__FILE__, __func__, __LINE__, __d, __r)
void __thrd_yield(const char *, const char *, unsigned long long);
#define thrd_yield() __thrd_yield(__FILE__, __func__, __LINE__)

int __tss_create(const char *, const char *, unsigned long long, tss_t *__key, tss_dtor_t __dtor);
#define tss_create(__k, __d) __tss_create(__FILE__, __func__, __LINE__, __k, __d)
void __tss_delete(const char *, const char *, unsigned long long, tss_t __key);
#define tss_delete(__k) __tss_delete(__FILE__, __func__, __LINE__, __k)
void *__tss_get(const char *, const char *, unsigned long long, tss_t __key);
#define tss_get(__k) __tss_get(__FILE__, __func__, __LINE__, __k)
int __tss_set(const char *, const char *, unsigned long long, tss_t __key, void *__val);
#define tss_set(__k, __v) __tss_set(__FILE__, __func__, __LINE__, __k, __v)
#endif

#endif

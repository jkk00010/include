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
#define call_once(__flag, __func) \
	__checked(__FILE__, __func__, __LINE__, call_once, __flag, __func)

int cnd_broadcast(cnd_t *__cond);
#define cnd_broadcast(__cond) \
	__checked_i(__FILE__, __func__, __LINE__, cnd_broadcast, __cond)

void cnd_destroy(cnd_t *__cond);
#define cnd_destroy(__cond) \
	__checked(__FILE__, __func__, __LINE__, cnd_destroy, __cond)

int cnd_init(cnd_t *__cond);
#define cnd_init(__cond) \
	__checked_i(__FILE__, __func__, __LINE__, cnd_init, __cond)

int cnd_signal(cnd_t *__cond);
#define cnd_signal(__cond) \
	__checked_i(__FILE__, __func__, __LINE__, cnd_signal, __cond)

int cnd_timedwait(cnd_t *restrict __cond, mtx_t *restrict __mtx, const struct timespec *__restrict ts);
#define cnd_timedwait(__cond, __mtx, __ts) \
	__checked_i(__FILE__, __func__, __LINE__, cnd_timedwait, __cond, __mtx, __ts)

int cnd_wait(cnd_t *__cond, mtx_t *__mtx);
#define cnd_wait(__cond, __mtx) \
	__checked_i(__FILE__, __func__, __LINE__, cnd_wait, __cond, __mtx)

void mtx_destroy(mtx_t *__mtx);
#define mtx_destroy(__mtx) \
	__checked(__FILE__, __func__, __LINE__, mtx_destroy, __mtx)

int mtx_init(mtx_t *__mtx, int __type);
#define mtx_init(__mtx, __type) \
	__checked_i(__FILE__, __func__, __LINE__, mtx_init, __mtx, __type)

int mtx_lock(mtx_t *__mtx);
#define mtx_lock(__mtx) \
	__checked_i(__FILE__, __func__, __LINE__, mtx_lock, __mtx)

int mtx_timedlock(mtx_t *restrict __mtx, const struct timespec *restrict __ts);
#define mtx_timedlock(__mtx, __ts) \
	__checked_i(__FILE__, __func__, __LINE__, mtx_timedlock, __mtx, __ts)

int mtx_trylock(mtx_t *__mtx);
#define mtx_trylock(__mtx) \
	__checked_i(__FILE__, __func__, __LINE__, mtx_trylock, __mtx)

int mtx_unlock(mtx_t *__mtx);
#define mtx_unlock(__mtx) \
	__checked_i(__FILE__, __func__, __LINE__, mtx_unlock, __mtx)

int thrd_create(thrd_t *__thr, thrd_start_t __func, void *__arg);
#define thrd_create(__thr, __func, __arg) \
	__checked_i(__FILE__, __func__, __LINE__, thrd_create, __thr, __func, __arg)

thrd_t thrd_current(void);
#define thrd_current() \
	__checked_t(__FILE__, __func__, __LINE__, thrd_current)

int thrd_detach(thrd_t __thr);
#define thrd_deatch(__thr) \
	__checked_i(__FILE__, __func__, __LINE__, thrd_detach, __thr)

int thrd_equal(thrd_t __thr0, thrd_t __thr1);
#define thrd_equal(__thr0, __thr1) \
	__checked_i(__FILE__, __func__, __LINE__, thrd_equal, __thr0, __thr1)

_Noreturn void thrd_exit(int __res);
#define thrd_exit(__res) \
	__checked(__FILE__, __func__, __LINE__, thrd_exit, __res)

int thrd_join(thrd_t __thr, int *__res);
#define thrd_join(__thr, __res) \
	__checked_i(__FILE__, __func__, __LINE__, thrd_join, __thr, __res)

int thrd_sleep(const struct timespec *__duration, struct timespec *__remaining);
#define thrd_sleep(__d, __r) \
	__checked_i(__FILE__, __func__, __LINE__, thrd_sleep, __d, __r)

void thrd_yield(void);
#define thrd_yield() \
	__checked(__FILE__, __func__, __LINE__, thrd_yield)

int tss_create(tss_t *__key, tss_dtor_t __dtor);
#define tss_create(__key, __dtor) \
	__checked_i(__FILE__, __func__, __LINE__, tss_create, __key, __dtor)

void tss_delete(tss_t __key);
#define tss_delete(__key) \
	__checked(__FILE__, __func__, __LINE__, tss_delete, __key)

void *tss_get(tss_t __key);
#define tss_get(__key) \
	__checked_p(__FILE__, __func__, __LINE__, tss_get, __key)

int tss_set(tss_t __key, void *__val);
#define tss_set(__key, __val) \
	__checked_i(__FILE__, __func__, __LINE__, tss_set, __key, __val)

#endif

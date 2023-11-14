#ifndef __THREADS_H__
#define __THREADS_H__

#include <time.h>

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


void call_once(once_flag *flag, void (*func)(void));
int cnd_broadcast(cnd_t *cond);
void cnd_destroy(cnd_t *cond);
int cnd_init(cnd_t *cond);
int cnd_signal(cnd_t *cond);
int cnd_timedwait(cnd_t *restrict cond, mtx_t *restrict mtx, const struct timespec *restrict ts);
int cnd_wait(cnd_t *cond, mtx_t *mtx);
void mtx_destroy(mtx_t *mtx);
int mtx_init(mtx_t *mtx, int type);
int mtx_lock(mtx_t *mtx);
int mtx_timedlock(mtx_t *restrict mtx, const struct timespec *restrict ts);
int mtx_trylock(mtx_t *mtx);
int mtx_unlock(mtx_t *mtx);
int thrd_create(thrd_t *thr, thrd_start_t func, void *arg);
thrd_t thrd_current(void);
int thrd_detach(thrd_t thr);
int thrd_equal(thrd_t thr0, thrd_t thr1);
_Noreturn void thrd_exit(int res);
int thrd_join(thrd_t thr, int *res);
int thrd_sleep(const struct timespec *duration, struct timespec *remaining);
void thrd_yield(void);
int tss_create(tss_t *key, tss_dtor_t dtor);
void tss_delete(tss_t key);
void *tss_get(tss_t key);
int tss_set(tss_t key, void *val);

#endif

#ifndef CPP_CORE_THREADING_H
#define CPP_CORE_THREADING_H

#include <threads.h>
#include "types.h"

namespace core::threads
{
	using task_fn = rawptr_t (*)(rawptr_t arg);
	using thread_t = thrd_t;
	using mutex_t = mtx_t;

	enum class result
	{
		success  = thrd_success,
		no_memory = thrd_nomem,
		timed_out = thrd_timedout,
		busy     = thrd_busy,
		error    = thrd_error
	};
}
#endif

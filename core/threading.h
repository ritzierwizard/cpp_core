#ifndef CPP_CORE_THREADING_H
#define CPP_CORE_THREADING_H

#include <threads.h>
#include "types.h"

namespace core::threads
{
	using task_fn = rawptr (*)(rawptr arg);
	using thread = thrd_t;
	using mutex = mtx_t;

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

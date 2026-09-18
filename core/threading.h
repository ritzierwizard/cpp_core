#ifndef CPP_CORE_THREADING_H
#define CPP_CORE_THREADING_H
#include <threads.h>
#include "types.h"

namespace core::threads
{
	using task_fn = rawptr_t (*)(rawptr_t arg);

	enum class thread_result
	{
		success  = thrd_success,
		nomemory = thrd_nomem,
		timedout = thrd_timedout,
		busy     = thrd_busy,
		error    = thrd_error
	};

	struct worker
	{
	};

	struct pool
	{
	};
}
#endif

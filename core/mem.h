//
// Created by joshua on 9/18/26.
//

#ifndef CPP_CORE_MEM_H
#define CPP_CORE_MEM_H
#include "types.h"
#include <sys/mman.h>

namespace core::mem
{
	enum class prot
	{
		exec       = PROT_EXEC,
		read       = PROT_READ,
		write      = PROT_WRITE,
		read_write = PROT_READ | PROT_WRITE,
		all        = read_write | exec,
		none       = PROT_NONE
	};

	enum class flag
	{
		map_shared          = MAP_SHARED,
		map_shared_validate = MAP_SHARED_VALIDATE,
		map_private         = MAP_PRIVATE,
		map_32              = MAP_32BIT,
		map_anon            = MAP_ANON,
		map_anonymous       = MAP_ANONYMOUS,
		map_deny_write      = MAP_DENYWRITE,
		map_exec            = MAP_EXECUTABLE,
		map_file            = MAP_FILE,
		map_fixed           = MAP_FIXED,
		map_fixed_noreplace = MAP_FIXED_NOREPLACE,
		map_grows_down      = MAP_GROWSDOWN,
		map_huge_tlb        = MAP_HUGETLB,
		map_huge_2mb        = MAP_HUGE_2MB,
		map_huge_1gb        = MAP_HUGE_1GB,
		map_locked          = MAP_LOCKED,
		map_nonblock        = MAP_NONBLOCK,
		map_noreserved      = MAP_NORESERVE,
		map_populate        = MAP_POPULATE,
		map_stack           = MAP_STACK,
		map_sync            = MAP_SYNC,
	};

	inline rawptr_t allocate(usize_t allocation_size, prot protection, flag flags, int file_descriptor = -1, int offset = 0)
	{
		return mmap(nullptr,
		            allocation_size,
		            static_cast<int>(protection),
		            static_cast<int>(flags),
		            file_descriptor, offset);
	}
}

#endif //CPP_CORE_MEM_H

#ifndef CPP_CORE_ARRAY_H
#define CPP_CORE_ARRAY_H

#include "types.h"
#include <cassert>

/*
 *	Container providing a static array with opt-out bounds checking.
 *	If you do not want bounds checking on all array accesses, define NDEBUG
 *	at the top of your program.
 */

namespace core
{
	template <typename TypeT, isize_t Size>
	struct array_t
	{
		TypeT items[Size];
		isize_t len = 0;

		/*
		 *	Made access to array_t::Size a static method
		 *	to avoid ambiguity regarding the runtime cost of access.
		 */
		static constexpr isize_t cap()
		{
			return Size;
		}

		TypeT& at(const isize_t index)
		{
			#ifndef NDEBUG
			assert(index < len && index >= 0);
			#endif
			return items[index];
		}

		[[nodiscard]] const TypeT& at(isize_t index) const
		{
			#ifndef NDEBUG
			assert(index < len && index >= 0);
			#endif
			return items[index];
		}

		// OPERATOR OVERLOADS
		TypeT& operator[](const isize_t index)
		{
			return at(index);
		}

		const TypeT& operator[](const isize_t index) const
		{
			return at(index);
		}

		void append(TypeT item)
		{
			#ifndef NDEBUG
			assert(len < cap());
			#endif
			items[len] = item;
			len++;
		}
	};
}
#endif

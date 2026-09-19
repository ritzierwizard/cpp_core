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
	template <typename TypeT, isize Size>
	struct array_t
	{
		TypeT items[Size];
		isize len = 0;

		/*
		 *	Made access to array_t::Size a static method
		 *	to avoid ambiguity regarding the runtime cost of access.
		 */
		static constexpr isize cap()
		{
			return Size;
		}

		TypeT& at(const isize index)
		{
			assert(index < len && index >= 0);
			return items[index];
		}

		[[nodiscard]] const TypeT& at(isize index) const
		{
			assert(index < len && index >= 0);
			return items[index];
		}

		// OPERATOR OVERLOADS
		TypeT& operator[](const isize index)
		{
			return at(index);
		}

		const TypeT& operator[](const isize index) const
		{
			return at(index);
		}

		void append(TypeT item)
		{
			assert(len < cap());
			items[len] = item;
			len++;
		}
	};
}
#endif

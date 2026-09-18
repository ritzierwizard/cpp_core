#include "array.h"
#include <print>
#include "types.h"

int main()
{
	core::array_t<core::int32_t, static_cast<core::isize_t>(32)> my_array{};
	for (core::int32_t i = 0; i < my_array.cap(); i++)
	{
		my_array.append(i);
	}
	std::print("{0}", my_array[1]);
	return 0;
}

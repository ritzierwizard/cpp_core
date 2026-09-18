#include "array.h"
#include <print>
#include "types.h"

int main()
{
	core::array_t<core::int32, static_cast<core::isize>(32)> my_array{};
	for (core::int32 i = 0; i < my_array.cap(); i++)
	{
		my_array.append(i);
	}
	std::print("{0}\n", my_array[1]);
	return 0;
}

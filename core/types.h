#ifndef CPP_CORE_TYPES_H
#define CPP_CORE_TYPES_H

#include <type_traits>
#include <cstddef>
#include <cstdint>

namespace core
{
	using rawptr = void*;
	using isize  = std::make_signed_t<std::size_t>;
	using usize  = std::size_t;

	using int8    = std::int8_t;
	using uint8   = std::uint8_t;
	using int16   = std::int16_t;
	using uint16  = std::uint16_t;
	using int32   = std::int32_t;
	using uint32  = std::uint32_t;
	using int64   = std::int64_t;
	using uint64  = std::uint64_t;
	using uint128 = __uint128_t;
	using int128  = __int128_t;
}
#endif

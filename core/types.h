#ifndef CPP_CORE_TYPES_H
#define CPP_CORE_TYPES_H

#include <type_traits>
#include <cstddef>
#include <cstdint>

namespace core
{
	using rawptr_t = void*;
	using isize_t  = std::make_signed_t<std::size_t>;
	using usize_t  = std::size_t;

	using int8_t    = std::int8_t;
	using uint8_t   = std::uint8_t;
	using int16_t   = std::int16_t;
	using uint16_t  = std::uint16_t;
	using int32_t   = std::int32_t;
	using uint32_t  = std::uint32_t;
	using int64_t   = std::int64_t;
	using uint64_t  = std::uint64_t;
	using uint128_t = __uint128_t;
	using int128_t  = __int128_t;
}
#endif

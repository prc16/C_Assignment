//#include <qrsqrt.hpp>
#include <iostream>
#include <bit>
#include <limits>
#include <cstdint>

// Improverd c++20 version
constexpr float qrsqrt(float x) noexcept
{
	static_assert(std::numeric_limits<float>::is_iec559); // (enable only on IEEE 754)

	float const y =
		std::bit_cast<float>(0x5F1FFFF9 - (std::bit_cast<std::uint32_t>(x) >> 1));
	return y * 0.703952253f * (2.38924456f - x * y * y);
}

/*
// c++20 version
constexpr float qrsqrt(float number) noexcept
{
	static_assert(std::numeric_limits<float>::is_iec559); // (enable only on IEEE 754)

	float const y = std::bit_cast<float>(
		0x5f3759df - (std::bit_cast<std::uint32_t>(number) >> 1));
	return y * (1.5f - (number * 0.5f * y * y));
}
*/

/*
// Original fast inverse square root implementation from Quake III Arena
float qrsqrt( float number )
{
	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y  = number;
	i  = * ( long * ) &y;                       // evil floating point bit level hacking
	i  = 0x5f3759df - ( i >> 1 );               // what the fuck?
	y  = * ( float * ) &i;
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
//y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

	return y;
}
*/

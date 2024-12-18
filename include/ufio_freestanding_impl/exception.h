﻿#pragma once

namespace ufio
{

namespace details
{

inline cross_code_cvt_t<char8_t> ehvw_common_impl(char const *c_str) noexcept
{
	using char8_const_may_alias_ptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
		[[__gnu__::__may_alias__]]
#endif
		= char8_t const *;
	return {{reinterpret_cast<char8_const_may_alias_ptr>(c_str), cstr_len(c_str)}};
}

} // namespace details

namespace manipulators
{
template <typename T>
	requires requires(T const &eh) {
		{ eh.what() } -> ::std::same_as<char const *>;
	}
inline cross_code_cvt_t<char8_t> ehvw(T const &eh) noexcept
{
	return ::ufio::details::ehvw_common_impl(eh.what());
}
} // namespace manipulators

} // namespace ufio

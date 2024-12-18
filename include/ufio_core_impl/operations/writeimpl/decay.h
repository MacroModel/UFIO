﻿#pragma once

namespace ufio::operations::decay
{

template <typename outstmtype>
inline constexpr typename outstmtype::output_char_type const *
write_some_decay(outstmtype outsm, typename outstmtype::output_char_type const *first,
				 typename outstmtype::output_char_type const *last)
{
	return ::ufio::details::write_some_impl(outsm, first, last);
}

template <typename outstmtype>
inline constexpr void write_all_decay(outstmtype outsm, typename outstmtype::output_char_type const *first,
									  typename outstmtype::output_char_type const *last)
{
	::ufio::details::write_all_impl(outsm, first, last);
}

template <typename outstmtype>
inline constexpr ::std::byte const *write_some_bytes_decay(outstmtype outsm, ::std::byte const *first,
														   ::std::byte const *last)
{
	return ::ufio::details::write_some_bytes_impl(outsm, first, last);
}

template <typename outstmtype>
inline constexpr void write_all_bytes_decay(outstmtype outsm, ::std::byte const *first, ::std::byte const *last)
{
	::ufio::details::write_all_bytes_impl(outsm, first, last);
}

template <typename outstmtype>
inline constexpr io_scatter_status_t
scatter_write_some_decay(outstmtype outsm, basic_io_scatter_t<typename outstmtype::output_char_type> const *pscatters,
						 ::std::size_t n)
{
	return ::ufio::details::scatter_write_some_impl(outsm, pscatters, n);
}

template <typename outstmtype>
inline constexpr io_scatter_status_t scatter_write_some_bytes_decay(outstmtype outsm, io_scatter_t const *pscatters,
																	::std::size_t n)
{
	return ::ufio::details::scatter_write_some_bytes_impl(outsm, pscatters, n);
}

template <typename outstmtype>
inline constexpr void
scatter_write_all_decay(outstmtype outsm, basic_io_scatter_t<typename outstmtype::output_char_type> const *pscatters,
						::std::size_t n)
{
	::ufio::details::scatter_write_all_impl(outsm, pscatters, n);
}

template <typename outstmtype>
inline constexpr void scatter_write_all_bytes_decay(outstmtype outsm, io_scatter_t const *pscatters, ::std::size_t n)
{
	::ufio::details::scatter_write_all_bytes_impl(outsm, pscatters, n);
}

template <typename outstmtype>
inline constexpr typename outstmtype::output_char_type const *
pwrite_some_decay(outstmtype outsm, typename outstmtype::output_char_type const *first,
				  typename outstmtype::output_char_type const *last, ::ufio::intfpos_t off)
{
	return ::ufio::details::pwrite_some_impl(outsm, first, last, off);
}

template <typename outstmtype>
inline constexpr void pwrite_all_decay(outstmtype outsm, typename outstmtype::output_char_type const *first,
									   typename outstmtype::output_char_type const *last, ::ufio::intfpos_t off)
{
	::ufio::details::pwrite_all_impl(outsm, first, last, off);
}

template <typename outstmtype>
inline constexpr ::std::byte const *pwrite_some_bytes_decay(outstmtype outsm, ::std::byte const *first,
															::std::byte const *last, ::ufio::intfpos_t off)
{
	return ::ufio::details::pwrite_some_bytes_impl(outsm, first, last, off);
}

template <typename outstmtype>
inline constexpr void pwrite_all_bytes_decay(outstmtype outsm, ::std::byte const *first, ::std::byte const *last,
											 ::ufio::intfpos_t off)
{
	::ufio::details::pwrite_all_bytes_impl(outsm, first, last, off);
}

template <typename outstmtype>
inline constexpr io_scatter_status_t
scatter_pwrite_some_decay(outstmtype outsm, basic_io_scatter_t<typename outstmtype::output_char_type> const *pscatters,
						  ::std::size_t n, ::ufio::intfpos_t off)
{
	return ::ufio::details::scatter_pwrite_some_impl(outsm, pscatters, n, off);
}

template <typename outstmtype>
inline constexpr io_scatter_status_t scatter_pwrite_some_bytes_decay(outstmtype outsm, io_scatter_t const *pscatters,
																	 ::std::size_t n, ::ufio::intfpos_t off)
{
	return ::ufio::details::scatter_pwrite_some_bytes_impl(outsm, pscatters, n, off);
}

template <typename outstmtype>
inline constexpr void
scatter_pwrite_all_decay(outstmtype outsm, basic_io_scatter_t<typename outstmtype::output_char_type> const *pscatters,
						 ::std::size_t n, ::ufio::intfpos_t off)
{
	::ufio::details::scatter_pwrite_all_impl(outsm, pscatters, n, off);
}

template <typename outstmtype>
inline constexpr void scatter_pwrite_all_bytes_decay(outstmtype outsm, io_scatter_t const *pscatters, ::std::size_t n,
													 ::ufio::intfpos_t off)
{
	::ufio::details::scatter_pwrite_all_bytes_impl(outsm, pscatters, n, off);
}

template <typename outstmtype>
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr void char_put_decay(outstmtype outstm, typename outstmtype::output_char_type ch)
{
	::ufio::details::char_put_impl(outstm, ch);
}

} // namespace ufio::operations::decay

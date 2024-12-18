﻿#pragma once

namespace ufio
{

struct scan_string_context
{
	bool copying{};
};

namespace details
{

template <bool noskipws, bool line, ::std::integral char_type, typename traits, typename allocator_type>
inline constexpr ::ufio::parse_result<char_type const *>
scan_context_define_string_impl(bool &skip_space_done, char_type const *first, char_type const *last,
								::std::basic_string<char_type, traits, allocator_type> &ref)
{
	auto it{first};
	if constexpr (!noskipws && !line)
	{
		if (!skip_space_done)
		{
			it = ::ufio::find_none_c_space(it, last);
			if (it == last)
			{
				return {it, ::ufio::parse_code::partial};
			}
			skip_space_done = true;
			ref.clear();
		}
	}
	auto it_space{it};
	if constexpr (line)
	{
		it_space = ::ufio::find_lf(it_space, last);
	}
	else
	{
		it_space = ::ufio::find_c_space(it_space, last);
	}
	if constexpr (noskipws || line)
	{
		if (!skip_space_done)
		{
			ref.assign(it, it_space);
			skip_space_done = true;
		}
		else
		{
			ref.append(it, it_space);
		}
	}
	else
	{
		ref.append(it, it_space);
	}
	if (it_space == last)
	{
		return {it_space, ::ufio::parse_code::partial};
	}
	if constexpr (line)
	{
		++it_space;
	}
	return {it_space, ::ufio::parse_code::ok};
}

inline constexpr ::ufio::parse_code scan_context_eof_string_define_impl(bool skip_space_done) noexcept
{
	if (skip_space_done)
	{
		return ::ufio::parse_code::ok;
	}
	else
	{
		return ::ufio::parse_code::end_of_file;
	}
}

template <bool noskipws, bool line>
inline constexpr ::ufio::manipulators::scalar_flags string_default_scalar_flags{.noskipws = noskipws, .line = line};

template <::std::integral char_type, typename traits, typename allocator_type>
inline constexpr ::ufio::parse_result<char_type const *>
scan_context_define_whole_string_impl(bool &notfirstround, char_type const *first, char_type const *last,
									  ::std::basic_string<char_type, traits, allocator_type> &ref)
{
	if (!notfirstround) [[unlikely]]
	{
		ref.assign(first, last);
		notfirstround = true;
	}
	else
	{
		ref.append(first, last);
	}
	return {last, ::ufio::parse_code::partial};
}

template <::std::integral char_type, typename traits, typename allocator_type>
inline constexpr ::ufio::parse_code
scan_context_define_whole_string_eof_impl(bool notfirstround,
										  ::std::basic_string<char_type, traits, allocator_type> &ref)
{
	if (!notfirstround)
	{
		ref.clear();
	}
	return ::ufio::parse_code::ok;
}

} // namespace details

template <::std::integral char_type, ::ufio::manipulators::scalar_flags flags, typename traits,
		  typename allocator_type>
inline constexpr io_type_t<scan_string_context> scan_context_type(
	io_reserve_type_t<char_type, ::ufio::manipulators::scalar_manip_t<
									 flags, ::std::basic_string<char_type, traits, allocator_type> &>>) noexcept
{
	return {};
}

template <::std::integral char_type, ::ufio::manipulators::scalar_flags flags, typename traits,
		  typename allocator_type>
inline constexpr parse_result<char_type const *> scan_context_define(
	io_reserve_type_t<char_type, ::ufio::manipulators::scalar_manip_t<
									 flags, ::std::basic_string<char_type, traits, allocator_type> &>>,
	scan_string_context &skip_space_done, char_type const *first, char_type const *last,
	::ufio::manipulators::scalar_manip_t<flags, ::std::basic_string<char_type, traits, allocator_type> &> str)
{
	return ::ufio::details::scan_context_define_string_impl<flags.noskipws, flags.line>(skip_space_done.copying,
																						   first, last, str.reference);
}

template <::ufio::manipulators::scalar_flags flags, ::std::integral char_type, typename traits,
		  typename allocator_type>
inline constexpr ::ufio::parse_code scan_context_eof_define(
	io_reserve_type_t<char_type, ::ufio::manipulators::scalar_manip_t<
									 flags, ::std::basic_string<char_type, traits, allocator_type> &>>,
	scan_string_context skip_space_done,
	::ufio::manipulators::scalar_manip_t<flags, ::std::basic_string<char_type, traits, allocator_type> &>
		str) noexcept
{
	if constexpr (flags.line || flags.noskipws)
	{
		if (str.reference.empty())
		{
			return ::ufio::parse_code::end_of_file;
		}
		else
		{
			return ::ufio::parse_code::ok;
		}
	}
	else
	{
		return ::ufio::details::scan_context_eof_string_define_impl(skip_space_done.copying);
	}
}

template <::std::integral char_type, typename traits, typename allocator_type>
inline constexpr ::ufio::manipulators::scalar_manip_t<::ufio::details::string_default_scalar_flags<false, false>,
														 ::std::basic_string<char_type, traits, allocator_type> &>
scan_alias_define(io_alias_t, ::std::basic_string<char_type, traits, allocator_type> &t) noexcept
{
	return {t};
}

template <::std::integral char_type, typename traits, typename allocator_type>
inline constexpr io_type_t<::ufio::scan_string_context>
scan_context_type(io_reserve_type_t<char_type, ::ufio::manipulators::whole_get_t<
												   ::std::basic_string<char_type, traits, allocator_type> &>>) noexcept
{
	return {};
}

template <::std::integral char_type, typename traits, typename allocator_type>
inline constexpr parse_result<char_type const *> scan_context_define(
	io_reserve_type_t<char_type,
					  ::ufio::manipulators::whole_get_t<::std::basic_string<char_type, traits, allocator_type> &>>,
	::ufio::scan_string_context &ctx, char_type const *first, char_type const *last,
	::ufio::manipulators::whole_get_t<::std::basic_string<char_type, traits, allocator_type> &> str)
{
	return ::ufio::details::scan_context_define_whole_string_impl(ctx.copying, first, last, str.reference);
}

template <::std::integral char_type, typename traits, typename allocator_type>
inline constexpr ::ufio::parse_code scan_context_eof_define(
	io_reserve_type_t<char_type,
					  ::ufio::manipulators::whole_get_t<::std::basic_string<char_type, traits, allocator_type> &>>,
	::ufio::scan_string_context ctx,
	::ufio::manipulators::whole_get_t<::std::basic_string<char_type, traits, allocator_type> &> str) noexcept
{
	return ::ufio::details::scan_context_define_whole_string_eof_impl(ctx.copying, str.reference);
}

namespace manipulators
{

template <::std::integral char_type, typename traits, typename allocator_type>
inline constexpr ::ufio::manipulators::scalar_manip_t<::ufio::details::string_default_scalar_flags<false, true>,
														 ::std::basic_string<char_type, traits, allocator_type> &>
line_get(::std::basic_string<char_type, traits, allocator_type> &line_str) noexcept
{
	return {line_str};
}

template <::std::integral char_type, typename traits, typename allocator_type>
inline constexpr ::ufio::manipulators::whole_get_t<::std::basic_string<char_type, traits, allocator_type> &>
whole_get(::std::basic_string<char_type, traits, allocator_type> &whole_str) noexcept
{
	return {whole_str};
}

} // namespace manipulators

} // namespace ufio

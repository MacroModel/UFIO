﻿#pragma once

namespace ufio
{

namespace details
{

template <typename optstmtype, typename instmtype, typename T>
	requires(sizeof(typename optstmtype::output_char_type) == sizeof(typename instmtype::input_char_type))
inline constexpr void transmit_until_eof_generic_main_impl(optstmtype optstm, instmtype instm, T resultint)
{
	/*
	A dummy placeholder implementation
	*/
	using input_char_type = typename instmtype::input_char_type;
	using output_char_type = typename optstmtype::output_char_type;
	::ufio::details::local_operator_new_array_ptr<input_char_type> newptr(
		::ufio::details::transmit_buffer_size_cache<sizeof(input_char_type)>);
	input_char_type *buffer_start{newptr.ptr};
	input_char_type *buffer_end{newptr.ptr + newptr.size};
	for (input_char_type *iter;
		 (iter = ::ufio::operations::decay::read_some_decay(instm, buffer_start, buffer_end)) != buffer_start;)
	{
		::std::size_t off{static_cast<::std::size_t>(iter - buffer_start)};
		if constexpr (::std::same_as<output_char_type, input_char_type>)
		{
			::ufio::operations::decay::write_all_decay(optstm, buffer_start, iter);
		}
		else
		{
			using output_char_type_may_alias_const_ptrtp
#if __has_cpp_attribute(__gnu__::__may_alias__)
				[[__gnu__::__may_alias__]]
#endif
				= output_char_type const *;
			::ufio::operations::decay::write_all_decay(
				optstm, reinterpret_cast<output_char_type_may_alias_const_ptrtp>(buffer_start),
				reinterpret_cast<output_char_type_may_alias_const_ptrtp>(iter));
		}
		transmit_integer_add_define(resultint, off);
	}
}

template <typename optstmtype, typename instmtype>
inline constexpr ::ufio::transmit_result transmit_until_eof_main_impl(optstmtype optstm, instmtype instm)
{
	::ufio::uintfpos_t transmitted{};
	uintfpos_transmit_reference_wrapper wrapper{__builtin_addressof(transmitted)};
	::ufio::details::transmit_until_eof_generic_main_impl(optstm, instm, wrapper);
	return {transmitted};
}

} // namespace details

namespace operations
{

namespace decay
{

template <typename optstmtype, typename instmtype, typename T>
inline constexpr decltype(auto) transmit_until_eof_generic_decay(optstmtype optstm, instmtype instm, T resultint)
{
#if 0
	if constexpr(::ufio::status_output_stream<optstmtype>)
	{
		return status_transmit_until_eof_generic_define(
			optstm,instm,resultint);
	}
	else if constexpr(::ufio::status_input_stream<instmtype>)
	{
		return status_transmit_until_eof_generic_define(
			optstm,instm,resultint);
	}
	else
#endif
	if constexpr (::ufio::operations::decay::defines::has_output_or_io_stream_mutex_ref_define<optstmtype>)
	{
		::ufio::operations::decay::stream_ref_decay_lock_guard lg{
			::ufio::operations::decay::output_stream_mutex_ref_decay(optstm)};
		return ::ufio::operations::decay::transmit_until_eof_generic_decay(
			::ufio::operations::decay::output_stream_unlocked_ref_decay(optstm), instm, resultint);
	}
	else if constexpr (::ufio::operations::decay::defines::has_input_or_io_stream_mutex_ref_define<instmtype>)
	{
		::ufio::operations::decay::stream_ref_decay_lock_guard lg{
			::ufio::operations::decay::input_stream_mutex_ref_decay(instm)};
		return ::ufio::operations::decay::transmit_until_eof_generic_decay(
			optstm, ::ufio::operations::decay::input_stream_unlocked_ref_decay(instm), resultint);
	}
	else
	{
		return ::ufio::details::transmit_until_eof_generic_main_impl(optstm, instm, resultint);
	}
}

template <typename optstmtype, typename instmtype>
inline constexpr decltype(auto) transmit_until_eof_decay(optstmtype optstm, instmtype instm)
{
#if 0
	if constexpr(::ufio::status_output_stream<optstmtype>)
	{
		return status_transmit_until_eof_define(optstm,instm);
	}
	else if constexpr(::ufio::status_input_stream<instmtype>)
	{
		return status_transmit_until_eof_define(optstm,instm);
	}
	else
#endif
	if constexpr (::ufio::operations::decay::defines::has_output_or_io_stream_mutex_ref_define<optstmtype>)
	{
		::ufio::operations::decay::stream_ref_decay_lock_guard lg{
			::ufio::operations::decay::output_stream_mutex_ref_decay(optstm)};
		return ::ufio::operations::decay::transmit_until_eof_decay(
			::ufio::operations::decay::output_stream_unlocked_ref_decay(optstm), instm);
	}
	else if constexpr (::ufio::operations::decay::defines::has_input_or_io_stream_mutex_ref_define<instmtype>)
	{
		::ufio::operations::decay::stream_ref_decay_lock_guard lg{
			::ufio::operations::decay::input_stream_mutex_ref_decay(instm)};
		return ::ufio::operations::decay::transmit_until_eof_decay(
			optstm, ::ufio::operations::decay::input_stream_unlocked_ref_decay(optstm));
	}
	else
	{
		return ::ufio::details::transmit_until_eof_main_impl(optstm, instm);
	}
}

} // namespace decay

template <typename optstmtype, typename instmtype, typename T>
inline constexpr decltype(auto) transmit_until_eof_generic(optstmtype &&optstm, instmtype &&instm, T resultint)
{
	return ::ufio::operations::decay::transmit_until_eof_generic_decay(
		::ufio::operations::output_stream_ref(optstm), ::ufio::operations::input_stream_ref(instm), resultint);
}

template <typename optstmtype, typename instmtype>
inline constexpr decltype(auto) transmit_until_eof(optstmtype &&optstm, instmtype &&instm)
{
	return ::ufio::operations::decay::transmit_until_eof_decay(::ufio::operations::output_stream_ref(optstm),
																  ::ufio::operations::input_stream_ref(instm));
}

} // namespace operations

} // namespace ufio

#pragma once

namespace fast_io::details::streamreflect
{

template<typename T>
concept has_output_stream_seek = requires(T&& outstm)
{
	::fast_io::details::output_stream_seek_impl(::fast_io::manipulators::output_stream_ref(outstm),0,::fast_io::seekdir::cur);
};

template<typename T>
concept has_output_stream_lock = requires(T&& outstm)
{
	::fast_io::details::output_stream_lock_impl(::fast_io::manipulators::output_stream_ref(outstm));
};

template<typename T>
concept has_obuffer_basic_ops = requires(T&& outstm,typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type *ptr)
{
	obuffer_begin(::fast_io::manipulators::output_stream_ref(outstm));
	obuffer_curr(::fast_io::manipulators::output_stream_ref(outstm));
	obuffer_end(::fast_io::manipulators::output_stream_ref(outstm));
	obuffer_set_curr(::fast_io::manipulators::output_stream_ref(outstm),ptr);
};

template<typename T>
concept has_obuffer_all_ops = has_obuffer_basic_ops<T>&&(requires(T&& outstm,typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type const *cptr)
{
	obuffer_write_all_overflow_define(::fast_io::manipulators::output_stream_ref(outstm),cptr,cptr);
});

template<typename T>
concept has_obuffer_some_ops = has_obuffer_basic_ops<T>&&(requires(T&& outstm,typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type const *cptr)
{
	obuffer_write_some_overflow_define(::fast_io::manipulators::output_stream_ref(outstm),cptr,cptr);
});

template<typename T>
concept has_obuffer_ops = has_obuffer_all_ops<T>||has_obuffer_some_ops<T>;

template<typename T>
concept has_write_some_define = requires(T&& outstm,typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type const* ptr)
{
	write_some_define(::fast_io::manipulators::output_stream_ref(outstm),ptr,ptr);
};

template<typename T>
concept has_write_all_define = requires(T&& outstm,typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type const* ptr)
{
	write_all_define(::fast_io::manipulators::output_stream_ref(outstm),ptr,ptr);
};

template<typename T>
concept has_write_some_bytes_define = requires(T&& outstm,::std::byte const* ptr)
{
	write_some_bytes_define(::fast_io::manipulators::output_stream_ref(outstm),ptr,ptr);
};

template<typename T>
concept has_write_all_bytes_define = requires(T&& outstm,::std::byte const* ptr)
{
	write_all_bytes_define(::fast_io::manipulators::output_stream_ref(outstm),ptr,ptr);
};

template<typename T>
concept has_scatter_write_some_bytes_define = requires(T&& outstm,::fast_io::io_scatter_t const *scatter,::std::size_t len)
{
	scatter_write_some_bytes_define(::fast_io::manipulators::output_stream_ref(outstm),scatter,len);
};

template<typename T>
concept has_scatter_write_all_bytes_define = requires(T&& outstm,::fast_io::io_scatter_t const *scatter,::std::size_t len)
{
	scatter_write_all_bytes_define(::fast_io::manipulators::output_stream_ref(outstm),scatter,len);
};

template<typename T>
concept has_scatter_write_some_define = requires(T&& outstm,::fast_io::basic_io_scatter_t<typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type> const *pscatter,::std::size_t len)
{
	scatter_write_some_define(::fast_io::manipulators::output_stream_ref(outstm),pscatter,len);
};

template<typename T>
concept has_scatter_write_all_define = requires(T&& outstm,::fast_io::basic_io_scatter_t<typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type> const *pscatter,::std::size_t len)
{
	scatter_write_all_define(::fast_io::manipulators::output_stream_ref(outstm),pscatter,len);
};

template<typename T>
concept has_seek_define = requires(T&& outstm)
{
	seek_define(::fast_io::manipulators::output_stream_ref(outstm),0,::fast_io::seekdir::cur);
};

template<typename T>
concept outputstreamdef = requires(T&& instm)
{
	{::fast_io::manipulators::output_stream_ref(instm)} noexcept;
};

}

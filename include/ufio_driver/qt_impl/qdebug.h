﻿#pragma once

namespace ufio
{

template <::std::integral ch_type>
struct basic_qt_qdebug
{
	using char_type = ch_type;
	QDebug pqdbg;
};

using qt_qdebug = basic_qt_qdebug<char>;
using wqt_qdebug = basic_qt_qdebug<wchar_t>;
using u8qt_qdebug = basic_qt_qdebug<char8_t>;
using u16qt_qdebug = basic_qt_qdebug<char16_t>;
using u32qt_qdebug = basic_qt_qdebug<char32_t>;

namespace manipulators
{

inline ::ufio::qt_qdebug qtdbg(QDebug qdbg)
{
	return {qdbg};
}

inline ::ufio::wqt_qdebug wqtdbg(QDebug qdbg)
{
	return {qdbg};
}

inline ::ufio::u8qt_qdebug u8qtdbg(QDebug qdbg)
{
	return {qdbg};
}

inline ::ufio::u16qt_qdebug u16qtdbg(QDebug qdbg)
{
	return {qdbg};
}

inline ::ufio::u32qt_qdebug u32qtdbg(QDebug qdbg)
{
	return {qdbg};
}

} // namespace manipulators

namespace details
{

inline void qtdbg_write_impl(QDebug &qdb, char const *first, char const *last)
{
	qdb << QByteArrayView(first, last);
}

inline void qtdbg_scatter_write_impl(QDebug &qdb, io_scatter_t const *scatters, ::std::size_t n)
{
	for (auto i{scatters}, e{i + n}; i != e; ++i)
	{
		qtdbg_write_impl(qdb, reinterpret_cast<char const *>(i->base),
						 reinterpret_cast<char const *>(i->base) + i->len);
	}
}

} // namespace details

template <::std::integral char_type>
inline void write(basic_qt_qdebug<char_type> qdbg, char_type const *first, char_type const *last)
{
	::ufio::details::qtdbg_write_impl(qdbg.pqdbg, reinterpret_cast<char const *>(first),
										 reinterpret_cast<char const *>(last));
}

template <::std::integral char_type>
inline void scatter_write(basic_qt_qdebug<char_type> qdbg, io_scatters_t scatters)
{
	::ufio::details::qtdbg_scatter_write_impl(qdbg.pqdbg, scatters.base, scatters.len);
}

} // namespace ufio

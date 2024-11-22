﻿#pragma once

#include <crtdbg.h>

namespace ufio
{

class wincrt_malloc_dbg_allocator
{
public:
#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *allocate(::std::size_t n) noexcept
	{
		if (n == 0)
		{
			n = 1;
		}
		void *p = ::ufio::noexcept_call(_malloc_dbg, n, 1, __FILE__, __LINE__);
		if (p == nullptr)
		{
			::ufio::fast_terminate();
		}
		return p;
	}
#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *reallocate(void *p, ::std::size_t n) noexcept
	{
		if (n == 0)
		{
			n = 1;
		}
		p = ::ufio::noexcept_call(_realloc_dbg, p, n, 1, __FILE__, __LINE__);
		if (p == nullptr)
		{
			::ufio::fast_terminate();
		}
		return p;
	}
#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *allocate_zero(::std::size_t n) noexcept
	{
		if (n == 0)
		{
			n = 1;
		}
		void *p = ::ufio::noexcept_call(_calloc_dbg, 1, n, 1, __FILE__, __LINE__);
		if (p == nullptr)
		{
			::ufio::fast_terminate();
		}
		return p;
	}
	static inline void deallocate(void *p) noexcept
	{
		if (p == nullptr)
		{
			return;
		}
		::ufio::noexcept_call(_free_dbg, p, 1);
	}

#if 0
	static inline allocation_least_result allocate_at_least(::std::size_t n) noexcept
	{
		auto p{::ufio::wincrt_malloc_dbg_allocator::allocate(n)};
		return {p, ::ufio::noexcept_call(_msize_dbg, p, 1)};
	}
	static inline allocation_least_result allocate_zero_at_least(::std::size_t n) noexcept
	{
		auto p{::ufio::wincrt_malloc_dbg_allocator::allocate_zero(n)};
		return {p, ::ufio::noexcept_call(_msize_dbg, p, 1)};
	}
	static inline allocation_least_result reallocate_at_least(void *oldp, ::std::size_t n) noexcept
	{
		auto p{::ufio::wincrt_malloc_dbg_allocator::reallocate(oldp, n)};
		return {p, ::ufio::noexcept_call(_msize_dbg, p, 1)};
	}
#endif
};

} // namespace ufio
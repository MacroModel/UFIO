﻿#pragma once

#if !defined(__cplusplus)
#error "You must be using a C++ compiler"
#endif

#if !defined(__cplusplus)
#error "You must be using a C++ compiler"
#endif

#include "impl/push_macros.h"
#include "impl/push_warnings.h"

#include "../fast_io_core.h"
#include "impl/array.h"

namespace fast_io
{

template <typename T, ::std::size_t N>
using array = ::fast_io::containers::array<T, N>;

namespace tlc
{
template <typename T, ::std::size_t N>
using array = ::fast_io::containers::array<T, N>;

using ::fast_io::containers::to_array;
} // namespace tlc

using ::fast_io::containers::to_array;

} // namespace fast_io

#include "impl/pop_macros.h"
#include "impl/pop_warnings.h"

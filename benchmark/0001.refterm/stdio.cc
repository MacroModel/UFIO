﻿#include <fast_io.h>
#include <fast_io_device.h>
using namespace fast_io::io;

inline void test()
{
	for (std::size_t i{}; i != 1000000; ++i)
	{
		printf("%zu\n", i);
	}
}

int main()
{
	fast_io::u8obuf_file timer_obf(u"stdio.txt");
	fast_io::timer t(u8"stdio");
	test();
}

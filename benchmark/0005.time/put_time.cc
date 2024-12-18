﻿#include <clocale>
#include <langinfo.h>
#include <ufio.h>
#include <ufio_driver/timer.h>
#include <ufio_legacy.h>
#include <locale>
#include <iomanip>
using namespace ufio::io;

int main()
{
	auto glibc_locale{newlocale(LC_ALL, "", locale_t(0))};
	constexpr std::size_t N(10000000);

	std::time_t t{};
	t = time(__builtin_addressof(t));
	struct tm tm_value
	{
	};
	gmtime_r(__builtin_addressof(t), __builtin_addressof(tm_value));
	{
		auto nl_str{nl_langinfo_l(_DATE_FMT, glibc_locale)};
		ufio::timer timer(u8"std_put_time_nl_langinfo");
		ufio::filebuf_file fbf(u8"std_put_time_nl_langinfo.txt", ufio::open_mode::out);
		std::ostream os(fbf.fb);
		os.imbue(std::locale(""));
		for (std::size_t i{}; i != N; ++i)
		{
			os << std::put_time(__builtin_addressof(tm_value), nl_str);
			println(fbf);
		}
	}
}
﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("mt_MT"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Maltese language locale for Malta"),.source=tsc("IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc("1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Maltese"),.territory=tsc("malta"),.revision=tsc("1.0"),.date=tsc("2000-07-20")},.monetary={.int_curr_symbol=tsc("EUR "),.currency_symbol=tsc("€"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Ħad"),tsc("Tne"),tsc("Tli"),tsc("Erb"),tsc("Ħam"),tsc("Ġim"),tsc("Sib")},.day={tsc("il-Ħadd"),tsc("it-Tnejn"),tsc("it-Tlieta"),tsc("l-Erbgħa"),tsc("il-Ħamis"),tsc("il-Ġimgħa"),tsc("is-Sibt")},.abmon={tsc("Jan"),tsc("Fra"),tsc("Mar"),tsc("Apr"),tsc("Mej"),tsc("Ġun"),tsc("Lul"),tsc("Aww"),tsc("Set"),tsc("Ott"),tsc("Nov"),tsc("Diċ")},.mon={tsc("Jannar"),tsc("Frar"),tsc("Marzu"),tsc("April"),tsc("Mejju"),tsc("Ġunju"),tsc("Lulju"),tsc("Awwissu"),tsc("Settembru"),tsc("Ottubru"),tsc("Novembru"),tsc("Diċembru")},.d_t_fmt=tsc("%A, %d ta %b, %Y %H:%M:%S"),.d_fmt=tsc("%A, %d ta %b, %Y"),.t_fmt=tsc("%H:%M:%S %Z"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%A, %d ta %b, %Y %H:%M:%S %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yYiI]"),.noexpr=tsc("^[-0nNlL]"),.yesstr=tsc("iva"),.nostr=tsc("le")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c ;%a ;%l"),.int_select=tsc("00"),.int_prefix=tsc("356")},.name={.name_fmt=tsc("%p%t%f%t%g"),.name_gen=tsc(""),.name_miss=tsc("Miss."),.name_mr=tsc("Mr."),.name_mrs=tsc("Mrs."),.name_ms=tsc("Ms.")},.address={.postal_fmt=tsc("%z%c%T%s%b%e%r"),.country_name=tsc("Malta"),.country_ab2=tsc("MT"),.country_ab3=tsc("MLT"),.country_num=470,.country_car=tsc("M"),.lang_name=tsc("Malti"),.lang_ab=tsc("mt"),.lang_term=tsc("mlt"),.lang_lib=tsc("mlt")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"mt_MT"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Maltese language locale for Malta"),.source=tsc(L"IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc(L"1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Maltese"),.territory=tsc(L"malta"),.revision=tsc(L"1.0"),.date=tsc(L"2000-07-20")},.monetary={.int_curr_symbol=tsc(L"EUR "),.currency_symbol=tsc(L"€"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Ħad"),tsc(L"Tne"),tsc(L"Tli"),tsc(L"Erb"),tsc(L"Ħam"),tsc(L"Ġim"),tsc(L"Sib")},.day={tsc(L"il-Ħadd"),tsc(L"it-Tnejn"),tsc(L"it-Tlieta"),tsc(L"l-Erbgħa"),tsc(L"il-Ħamis"),tsc(L"il-Ġimgħa"),tsc(L"is-Sibt")},.abmon={tsc(L"Jan"),tsc(L"Fra"),tsc(L"Mar"),tsc(L"Apr"),tsc(L"Mej"),tsc(L"Ġun"),tsc(L"Lul"),tsc(L"Aww"),tsc(L"Set"),tsc(L"Ott"),tsc(L"Nov"),tsc(L"Diċ")},.mon={tsc(L"Jannar"),tsc(L"Frar"),tsc(L"Marzu"),tsc(L"April"),tsc(L"Mejju"),tsc(L"Ġunju"),tsc(L"Lulju"),tsc(L"Awwissu"),tsc(L"Settembru"),tsc(L"Ottubru"),tsc(L"Novembru"),tsc(L"Diċembru")},.d_t_fmt=tsc(L"%A, %d ta %b, %Y %H:%M:%S"),.d_fmt=tsc(L"%A, %d ta %b, %Y"),.t_fmt=tsc(L"%H:%M:%S %Z"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%A, %d ta %b, %Y %H:%M:%S %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yYiI]"),.noexpr=tsc(L"^[-0nNlL]"),.yesstr=tsc(L"iva"),.nostr=tsc(L"le")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c ;%a ;%l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"356")},.name={.name_fmt=tsc(L"%p%t%f%t%g"),.name_gen=tsc(L""),.name_miss=tsc(L"Miss."),.name_mr=tsc(L"Mr."),.name_mrs=tsc(L"Mrs."),.name_ms=tsc(L"Ms.")},.address={.postal_fmt=tsc(L"%z%c%T%s%b%e%r"),.country_name=tsc(L"Malta"),.country_ab2=tsc(L"MT"),.country_ab3=tsc(L"MLT"),.country_num=470,.country_car=tsc(L"M"),.lang_name=tsc(L"Malti"),.lang_ab=tsc(L"mt"),.lang_term=tsc(L"mlt"),.lang_lib=tsc(L"mlt")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"mt_MT"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Maltese language locale for Malta"),.source=tsc(u8"IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc(u8"1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Maltese"),.territory=tsc(u8"malta"),.revision=tsc(u8"1.0"),.date=tsc(u8"2000-07-20")},.monetary={.int_curr_symbol=tsc(u8"EUR "),.currency_symbol=tsc(u8"€"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Ħad"),tsc(u8"Tne"),tsc(u8"Tli"),tsc(u8"Erb"),tsc(u8"Ħam"),tsc(u8"Ġim"),tsc(u8"Sib")},.day={tsc(u8"il-Ħadd"),tsc(u8"it-Tnejn"),tsc(u8"it-Tlieta"),tsc(u8"l-Erbgħa"),tsc(u8"il-Ħamis"),tsc(u8"il-Ġimgħa"),tsc(u8"is-Sibt")},.abmon={tsc(u8"Jan"),tsc(u8"Fra"),tsc(u8"Mar"),tsc(u8"Apr"),tsc(u8"Mej"),tsc(u8"Ġun"),tsc(u8"Lul"),tsc(u8"Aww"),tsc(u8"Set"),tsc(u8"Ott"),tsc(u8"Nov"),tsc(u8"Diċ")},.mon={tsc(u8"Jannar"),tsc(u8"Frar"),tsc(u8"Marzu"),tsc(u8"April"),tsc(u8"Mejju"),tsc(u8"Ġunju"),tsc(u8"Lulju"),tsc(u8"Awwissu"),tsc(u8"Settembru"),tsc(u8"Ottubru"),tsc(u8"Novembru"),tsc(u8"Diċembru")},.d_t_fmt=tsc(u8"%A, %d ta %b, %Y %H:%M:%S"),.d_fmt=tsc(u8"%A, %d ta %b, %Y"),.t_fmt=tsc(u8"%H:%M:%S %Z"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%A, %d ta %b, %Y %H:%M:%S %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yYiI]"),.noexpr=tsc(u8"^[-0nNlL]"),.yesstr=tsc(u8"iva"),.nostr=tsc(u8"le")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c ;%a ;%l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"356")},.name={.name_fmt=tsc(u8"%p%t%f%t%g"),.name_gen=tsc(u8""),.name_miss=tsc(u8"Miss."),.name_mr=tsc(u8"Mr."),.name_mrs=tsc(u8"Mrs."),.name_ms=tsc(u8"Ms.")},.address={.postal_fmt=tsc(u8"%z%c%T%s%b%e%r"),.country_name=tsc(u8"Malta"),.country_ab2=tsc(u8"MT"),.country_ab3=tsc(u8"MLT"),.country_num=470,.country_car=tsc(u8"M"),.lang_name=tsc(u8"Malti"),.lang_ab=tsc(u8"mt"),.lang_term=tsc(u8"mlt"),.lang_lib=tsc(u8"mlt")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"mt_MT"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Maltese language locale for Malta"),.source=tsc(u"IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc(u"1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Maltese"),.territory=tsc(u"malta"),.revision=tsc(u"1.0"),.date=tsc(u"2000-07-20")},.monetary={.int_curr_symbol=tsc(u"EUR "),.currency_symbol=tsc(u"€"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Ħad"),tsc(u"Tne"),tsc(u"Tli"),tsc(u"Erb"),tsc(u"Ħam"),tsc(u"Ġim"),tsc(u"Sib")},.day={tsc(u"il-Ħadd"),tsc(u"it-Tnejn"),tsc(u"it-Tlieta"),tsc(u"l-Erbgħa"),tsc(u"il-Ħamis"),tsc(u"il-Ġimgħa"),tsc(u"is-Sibt")},.abmon={tsc(u"Jan"),tsc(u"Fra"),tsc(u"Mar"),tsc(u"Apr"),tsc(u"Mej"),tsc(u"Ġun"),tsc(u"Lul"),tsc(u"Aww"),tsc(u"Set"),tsc(u"Ott"),tsc(u"Nov"),tsc(u"Diċ")},.mon={tsc(u"Jannar"),tsc(u"Frar"),tsc(u"Marzu"),tsc(u"April"),tsc(u"Mejju"),tsc(u"Ġunju"),tsc(u"Lulju"),tsc(u"Awwissu"),tsc(u"Settembru"),tsc(u"Ottubru"),tsc(u"Novembru"),tsc(u"Diċembru")},.d_t_fmt=tsc(u"%A, %d ta %b, %Y %H:%M:%S"),.d_fmt=tsc(u"%A, %d ta %b, %Y"),.t_fmt=tsc(u"%H:%M:%S %Z"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%A, %d ta %b, %Y %H:%M:%S %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yYiI]"),.noexpr=tsc(u"^[-0nNlL]"),.yesstr=tsc(u"iva"),.nostr=tsc(u"le")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c ;%a ;%l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"356")},.name={.name_fmt=tsc(u"%p%t%f%t%g"),.name_gen=tsc(u""),.name_miss=tsc(u"Miss."),.name_mr=tsc(u"Mr."),.name_mrs=tsc(u"Mrs."),.name_ms=tsc(u"Ms.")},.address={.postal_fmt=tsc(u"%z%c%T%s%b%e%r"),.country_name=tsc(u"Malta"),.country_ab2=tsc(u"MT"),.country_ab3=tsc(u"MLT"),.country_num=470,.country_car=tsc(u"M"),.lang_name=tsc(u"Malti"),.lang_ab=tsc(u"mt"),.lang_term=tsc(u"mlt"),.lang_lib=tsc(u"mlt")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"mt_MT"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Maltese language locale for Malta"),.source=tsc(U"IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc(U"1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Maltese"),.territory=tsc(U"malta"),.revision=tsc(U"1.0"),.date=tsc(U"2000-07-20")},.monetary={.int_curr_symbol=tsc(U"EUR "),.currency_symbol=tsc(U"€"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Ħad"),tsc(U"Tne"),tsc(U"Tli"),tsc(U"Erb"),tsc(U"Ħam"),tsc(U"Ġim"),tsc(U"Sib")},.day={tsc(U"il-Ħadd"),tsc(U"it-Tnejn"),tsc(U"it-Tlieta"),tsc(U"l-Erbgħa"),tsc(U"il-Ħamis"),tsc(U"il-Ġimgħa"),tsc(U"is-Sibt")},.abmon={tsc(U"Jan"),tsc(U"Fra"),tsc(U"Mar"),tsc(U"Apr"),tsc(U"Mej"),tsc(U"Ġun"),tsc(U"Lul"),tsc(U"Aww"),tsc(U"Set"),tsc(U"Ott"),tsc(U"Nov"),tsc(U"Diċ")},.mon={tsc(U"Jannar"),tsc(U"Frar"),tsc(U"Marzu"),tsc(U"April"),tsc(U"Mejju"),tsc(U"Ġunju"),tsc(U"Lulju"),tsc(U"Awwissu"),tsc(U"Settembru"),tsc(U"Ottubru"),tsc(U"Novembru"),tsc(U"Diċembru")},.d_t_fmt=tsc(U"%A, %d ta %b, %Y %H:%M:%S"),.d_fmt=tsc(U"%A, %d ta %b, %Y"),.t_fmt=tsc(U"%H:%M:%S %Z"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%A, %d ta %b, %Y %H:%M:%S %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yYiI]"),.noexpr=tsc(U"^[-0nNlL]"),.yesstr=tsc(U"iva"),.nostr=tsc(U"le")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c ;%a ;%l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"356")},.name={.name_fmt=tsc(U"%p%t%f%t%g"),.name_gen=tsc(U""),.name_miss=tsc(U"Miss."),.name_mr=tsc(U"Mr."),.name_mrs=tsc(U"Mrs."),.name_ms=tsc(U"Ms.")},.address={.postal_fmt=tsc(U"%z%c%T%s%b%e%r"),.country_name=tsc(U"Malta"),.country_ab2=tsc(U"MT"),.country_ab3=tsc(U"MLT"),.country_num=470,.country_car=tsc(U"M"),.lang_name=tsc(U"Malti"),.lang_ab=tsc(U"mt"),.lang_term=tsc(U"mlt"),.lang_lib=tsc(U"mlt")},.measurement={.measurement=1}};


}
}

#include"../main.h"
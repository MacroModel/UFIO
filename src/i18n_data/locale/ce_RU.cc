﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("ce_RU"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Chechen locale for RUSSIAN FEDERATION"),.source=tsc("ANCHR\t\t;\t\tfast_io"),.address=tsc("364024, ChR, Grozny, pr-kt of M. Esambayev, 13\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.language=tsc("Chechen"),.territory=tsc("Russia"),.revision=tsc("1.0"),.date=tsc("2014-08-25")},.monetary={.int_curr_symbol=tsc("RUB "),.currency_symbol=tsc("₽"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc(" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("КӀ"),tsc("Ор"),tsc("Ши"),tsc("Кх"),tsc("Еа"),tsc("ПӀ"),tsc("Шо")},.day={tsc("КӀиранан де"),tsc("Оршотан де"),tsc("Шинарин де"),tsc("Кхаарин де"),tsc("Еарин де"),tsc("ПӀераскан де"),tsc("Шот де")},.abmon={tsc("янв"),tsc("фев"),tsc("мар"),tsc("апр"),tsc("май"),tsc("июн"),tsc("июл"),tsc("авг"),tsc("сен"),tsc("окт"),tsc("ноя"),tsc("дек")},.mon={tsc("Январь"),tsc("Февраль"),tsc("Март"),tsc("Апрель"),tsc("Май"),tsc("Июнь"),tsc("Июль"),tsc("Август"),tsc("Сентябрь"),tsc("Октябрь"),tsc("Ноябрь"),tsc("Декабрь")},.d_t_fmt=tsc("%Y %d %b %a %T"),.d_fmt=tsc("%Y.%d.%m"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%Y %d %b %a %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYДд]"),.noexpr=tsc("^[-0nNМм]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("0~10"),.int_prefix=tsc("7")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Росси"),.country_ab2=tsc("RU"),.country_ab3=tsc("RUS"),.country_num=643,.country_car=tsc("RUS"),.lang_name=tsc("нохчийн"),.lang_ab=tsc("ce"),.lang_term=tsc("che")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"ce_RU"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Chechen locale for RUSSIAN FEDERATION"),.source=tsc(L"ANCHR\t\t;\t\tfast_io"),.address=tsc(L"364024, ChR, Grozny, pr-kt of M. Esambayev, 13\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.language=tsc(L"Chechen"),.territory=tsc(L"Russia"),.revision=tsc(L"1.0"),.date=tsc(L"2014-08-25")},.monetary={.int_curr_symbol=tsc(L"RUB "),.currency_symbol=tsc(L"₽"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"КӀ"),tsc(L"Ор"),tsc(L"Ши"),tsc(L"Кх"),tsc(L"Еа"),tsc(L"ПӀ"),tsc(L"Шо")},.day={tsc(L"КӀиранан де"),tsc(L"Оршотан де"),tsc(L"Шинарин де"),tsc(L"Кхаарин де"),tsc(L"Еарин де"),tsc(L"ПӀераскан де"),tsc(L"Шот де")},.abmon={tsc(L"янв"),tsc(L"фев"),tsc(L"мар"),tsc(L"апр"),tsc(L"май"),tsc(L"июн"),tsc(L"июл"),tsc(L"авг"),tsc(L"сен"),tsc(L"окт"),tsc(L"ноя"),tsc(L"дек")},.mon={tsc(L"Январь"),tsc(L"Февраль"),tsc(L"Март"),tsc(L"Апрель"),tsc(L"Май"),tsc(L"Июнь"),tsc(L"Июль"),tsc(L"Август"),tsc(L"Сентябрь"),tsc(L"Октябрь"),tsc(L"Ноябрь"),tsc(L"Декабрь")},.d_t_fmt=tsc(L"%Y %d %b %a %T"),.d_fmt=tsc(L"%Y.%d.%m"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%Y %d %b %a %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYДд]"),.noexpr=tsc(L"^[-0nNМм]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"0~10"),.int_prefix=tsc(L"7")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Росси"),.country_ab2=tsc(L"RU"),.country_ab3=tsc(L"RUS"),.country_num=643,.country_car=tsc(L"RUS"),.lang_name=tsc(L"нохчийн"),.lang_ab=tsc(L"ce"),.lang_term=tsc(L"che")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"ce_RU"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Chechen locale for RUSSIAN FEDERATION"),.source=tsc(u8"ANCHR\t\t;\t\tfast_io"),.address=tsc(u8"364024, ChR, Grozny, pr-kt of M. Esambayev, 13\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.language=tsc(u8"Chechen"),.territory=tsc(u8"Russia"),.revision=tsc(u8"1.0"),.date=tsc(u8"2014-08-25")},.monetary={.int_curr_symbol=tsc(u8"RUB "),.currency_symbol=tsc(u8"₽"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"КӀ"),tsc(u8"Ор"),tsc(u8"Ши"),tsc(u8"Кх"),tsc(u8"Еа"),tsc(u8"ПӀ"),tsc(u8"Шо")},.day={tsc(u8"КӀиранан де"),tsc(u8"Оршотан де"),tsc(u8"Шинарин де"),tsc(u8"Кхаарин де"),tsc(u8"Еарин де"),tsc(u8"ПӀераскан де"),tsc(u8"Шот де")},.abmon={tsc(u8"янв"),tsc(u8"фев"),tsc(u8"мар"),tsc(u8"апр"),tsc(u8"май"),tsc(u8"июн"),tsc(u8"июл"),tsc(u8"авг"),tsc(u8"сен"),tsc(u8"окт"),tsc(u8"ноя"),tsc(u8"дек")},.mon={tsc(u8"Январь"),tsc(u8"Февраль"),tsc(u8"Март"),tsc(u8"Апрель"),tsc(u8"Май"),tsc(u8"Июнь"),tsc(u8"Июль"),tsc(u8"Август"),tsc(u8"Сентябрь"),tsc(u8"Октябрь"),tsc(u8"Ноябрь"),tsc(u8"Декабрь")},.d_t_fmt=tsc(u8"%Y %d %b %a %T"),.d_fmt=tsc(u8"%Y.%d.%m"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%Y %d %b %a %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYДд]"),.noexpr=tsc(u8"^[-0nNМм]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"0~10"),.int_prefix=tsc(u8"7")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Росси"),.country_ab2=tsc(u8"RU"),.country_ab3=tsc(u8"RUS"),.country_num=643,.country_car=tsc(u8"RUS"),.lang_name=tsc(u8"нохчийн"),.lang_ab=tsc(u8"ce"),.lang_term=tsc(u8"che")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"ce_RU"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Chechen locale for RUSSIAN FEDERATION"),.source=tsc(u"ANCHR\t\t;\t\tfast_io"),.address=tsc(u"364024, ChR, Grozny, pr-kt of M. Esambayev, 13\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.language=tsc(u"Chechen"),.territory=tsc(u"Russia"),.revision=tsc(u"1.0"),.date=tsc(u"2014-08-25")},.monetary={.int_curr_symbol=tsc(u"RUB "),.currency_symbol=tsc(u"₽"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"КӀ"),tsc(u"Ор"),tsc(u"Ши"),tsc(u"Кх"),tsc(u"Еа"),tsc(u"ПӀ"),tsc(u"Шо")},.day={tsc(u"КӀиранан де"),tsc(u"Оршотан де"),tsc(u"Шинарин де"),tsc(u"Кхаарин де"),tsc(u"Еарин де"),tsc(u"ПӀераскан де"),tsc(u"Шот де")},.abmon={tsc(u"янв"),tsc(u"фев"),tsc(u"мар"),tsc(u"апр"),tsc(u"май"),tsc(u"июн"),tsc(u"июл"),tsc(u"авг"),tsc(u"сен"),tsc(u"окт"),tsc(u"ноя"),tsc(u"дек")},.mon={tsc(u"Январь"),tsc(u"Февраль"),tsc(u"Март"),tsc(u"Апрель"),tsc(u"Май"),tsc(u"Июнь"),tsc(u"Июль"),tsc(u"Август"),tsc(u"Сентябрь"),tsc(u"Октябрь"),tsc(u"Ноябрь"),tsc(u"Декабрь")},.d_t_fmt=tsc(u"%Y %d %b %a %T"),.d_fmt=tsc(u"%Y.%d.%m"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%Y %d %b %a %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYДд]"),.noexpr=tsc(u"^[-0nNМм]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"0~10"),.int_prefix=tsc(u"7")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Росси"),.country_ab2=tsc(u"RU"),.country_ab3=tsc(u"RUS"),.country_num=643,.country_car=tsc(u"RUS"),.lang_name=tsc(u"нохчийн"),.lang_ab=tsc(u"ce"),.lang_term=tsc(u"che")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"ce_RU"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Chechen locale for RUSSIAN FEDERATION"),.source=tsc(U"ANCHR\t\t;\t\tfast_io"),.address=tsc(U"364024, ChR, Grozny, pr-kt of M. Esambayev, 13\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.language=tsc(U"Chechen"),.territory=tsc(U"Russia"),.revision=tsc(U"1.0"),.date=tsc(U"2014-08-25")},.monetary={.int_curr_symbol=tsc(U"RUB "),.currency_symbol=tsc(U"₽"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"КӀ"),tsc(U"Ор"),tsc(U"Ши"),tsc(U"Кх"),tsc(U"Еа"),tsc(U"ПӀ"),tsc(U"Шо")},.day={tsc(U"КӀиранан де"),tsc(U"Оршотан де"),tsc(U"Шинарин де"),tsc(U"Кхаарин де"),tsc(U"Еарин де"),tsc(U"ПӀераскан де"),tsc(U"Шот де")},.abmon={tsc(U"янв"),tsc(U"фев"),tsc(U"мар"),tsc(U"апр"),tsc(U"май"),tsc(U"июн"),tsc(U"июл"),tsc(U"авг"),tsc(U"сен"),tsc(U"окт"),tsc(U"ноя"),tsc(U"дек")},.mon={tsc(U"Январь"),tsc(U"Февраль"),tsc(U"Март"),tsc(U"Апрель"),tsc(U"Май"),tsc(U"Июнь"),tsc(U"Июль"),tsc(U"Август"),tsc(U"Сентябрь"),tsc(U"Октябрь"),tsc(U"Ноябрь"),tsc(U"Декабрь")},.d_t_fmt=tsc(U"%Y %d %b %a %T"),.d_fmt=tsc(U"%Y.%d.%m"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%Y %d %b %a %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYДд]"),.noexpr=tsc(U"^[-0nNМм]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"0~10"),.int_prefix=tsc(U"7")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Росси"),.country_ab2=tsc(U"RU"),.country_ab3=tsc(U"RUS"),.country_num=643,.country_car=tsc(U"RUS"),.lang_name=tsc(U"нохчийн"),.lang_ab=tsc(U"ce"),.lang_term=tsc(U"che")},.measurement={.measurement=1}};


}
}

#include"../main.h"
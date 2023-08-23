#pragma once

namespace fast_io
{

namespace manipulators
{

template<typename T,typename U>
struct percentage_conventional_t
{
	using numerator_type = T;
	using denominator_type = U;
	numerator_type numerator;
	denominator_type denominator;
};

#if 0
template<typename T,typename U>
struct percentage_precision_t
{
	using numerator_type = T;
	using denominator_type = U;
	numerator_type numerator;
	denominator_type denominator;
	::std::size_t precisions;
};
#endif

template<bool showpos=false,typename T,typename U>
requires (::fast_io::details::my_integral<T>&&::fast_io::details::my_integral<U>)
inline constexpr auto percentage_conventional(T num,U deno) noexcept
{
	return ::fast_io::manipulators::scalar_manip_t<
	::fast_io::details::base_mani_flags_cache<10,false,false,showpos,false>,
	::fast_io::manipulators::percentage_conventional_t<
	typename ::fast_io::details::integer_alias_type_traits<T>::alias_type,
	typename ::fast_io::details::integer_alias_type_traits<U>::alias_type>>{{num,deno}};
}

template<bool showpos=false,typename T,typename U>
requires (::fast_io::details::my_integral<T>&&::fast_io::details::my_integral<U>)
inline constexpr auto comma_percentage_conventional(T num,U deno) noexcept
{
	return ::fast_io::manipulators::scalar_manip_t<
	::fast_io::details::base_mani_flags_cache<10,false,false,showpos,true>,
	::fast_io::manipulators::percentage_conventional_t<
	typename ::fast_io::details::integer_alias_type_traits<T>::alias_type,
	typename ::fast_io::details::integer_alias_type_traits<U>::alias_type>>{{num,deno}};
}

}

template<::std::integral chartype,::fast_io::manipulators::scalar_flags flags,typename T,typename U>
requires (::fast_io::details::my_integral<T>&&::fast_io::details::my_integral<U>)
inline constexpr ::std::size_t print_reserve_size(::fast_io::io_reserve_type_t<chartype,
	::fast_io::manipulators::scalar_manip_t<flags,::fast_io::manipulators::percentage_conventional_t<T,U>>>) noexcept
{
	return ::fast_io::details::print_integer_reserved_size_cache<flags.base,flags.showbase,flags.showpos,T> + 5u;
}

namespace details
{

template<::std::size_t base,typename T>
requires (2<=base&&base<=36)
inline constexpr
	T compute_base_ul64_max_val() noexcept
{
	constexpr
		T ul64max{static_cast<T>(-1)};
	constexpr
		T ulmxdv{ul64max/base/base};
	T val{1u};
	for(;val<=ulmxdv;val*=base);
	return val;
}

template<::std::size_t base,typename T>
requires (2<=base&&base<=36)
inline constexpr T base_ul64_max_val{::fast_io::details::compute_base_ul64_max_val<base,T>()};

template<::std::size_t base,bool uppercase,bool showpos,::std::integral chartype,typename T,typename U>
requires (::fast_io::details::my_integral<T>&&::fast_io::details::my_integral<U>)
inline constexpr chartype* prrsv_percentage_conventional_impl(chartype *iter,T numerator,U denominator) noexcept
{
	using unsignednumeratortype = ::fast_io::details::my_make_unsigned_t<T>;
	using unsigneddenominatortype = ::fast_io::details::my_make_unsigned_t<U>;
	if constexpr(::fast_io::details::my_signed_integral<T>||::fast_io::details::my_signed_integral<U>)
	{
		bool isnegative{numerator<0};
		unsignednumeratortype unsignednum{static_cast<unsignednumeratortype>(numerator)};
		if(isnegative)
		{
			constexpr
				unsignednumeratortype zero{};
			unsignednum=zero-unsignednum;
		}
		unsigneddenominatortype unsignedden{static_cast<unsigneddenominatortype>(denominator)};
		if(denominator<0)
		{
			constexpr
				unsigneddenominatortype zero{};
			unsignedden=zero-unsignedden;
			isnegative=!isnegative;
		}
		if constexpr(showpos)
		{
			chartype sign;
			if(isnegative)
			{
				sign=::fast_io::char_literal_v<u8'-',chartype>;
			}
			else
			{
				sign=::fast_io::char_literal_v<u8'+',chartype>;
			}
			*iter=sign;
			++iter;
		}
		else
		{
			if(isnegative)
			{
				*iter=::fast_io::char_literal_v<u8'-',chartype>;
				++iter;
			}
		}
		return prrsv_percentage_conventional_impl<base,uppercase,showpos>(iter,unsignednum,unsignedden);
	}
	else if constexpr(sizeof(T)<sizeof(::std::uint_least32_t))
	{
		return prrsv_percentage_conventional_impl(iter,static_cast<::std::uint_least32_t>(numerator),denominator);
	}
	else
	{
		if(denominator==0)	//denominator cannot be zero. so we print out nan
		{
			if constexpr(23u<base)
			{
				if constexpr(uppercase)
				{
					if constexpr(::std::same_as<chartype,char>)
					{
						iter=::fast_io::details::copy_string_literal("#NAN",iter);
					}
					else if constexpr(::std::same_as<chartype,wchar_t>)
					{
						iter=::fast_io::details::copy_string_literal(L"#NAN",iter);
					}
					else if constexpr(::std::same_as<chartype,char16_t>)
					{
						iter=::fast_io::details::copy_string_literal(u"#NAN",iter);
					}
					else if constexpr(::std::same_as<chartype,char32_t>)
					{
						iter=::fast_io::details::copy_string_literal(U"#NAN",iter);
					}
					else if constexpr(::std::same_as<chartype,char8_t>)
					{
						iter=::fast_io::details::copy_string_literal(u8"#NAN",iter);
					}
				}
				else
				{
					if constexpr(::std::same_as<chartype,char>)
					{
						iter=::fast_io::details::copy_string_literal("#nan",iter);
					}
					else if constexpr(::std::same_as<chartype,wchar_t>)
					{
						iter=::fast_io::details::copy_string_literal(L"#nan",iter);
					}
					else if constexpr(::std::same_as<chartype,char16_t>)
					{
						iter=::fast_io::details::copy_string_literal(u"#nan",iter);
					}
					else if constexpr(::std::same_as<chartype,char32_t>)
					{
						iter=::fast_io::details::copy_string_literal(U"#nan",iter);
					}
					else if constexpr(::std::same_as<chartype,char8_t>)
					{
						iter=::fast_io::details::copy_string_literal(u8"#nan",iter);
					}
				}
			}
			else
			{
				if constexpr(uppercase)
				{
					if constexpr(::std::same_as<chartype,char>)
					{
						iter=::fast_io::details::copy_string_literal("NAN",iter);
					}
					else if constexpr(::std::same_as<chartype,wchar_t>)
					{
						iter=::fast_io::details::copy_string_literal(L"NAN",iter);
					}
					else if constexpr(::std::same_as<chartype,char16_t>)
					{
						iter=::fast_io::details::copy_string_literal(u"NAN",iter);
					}
					else if constexpr(::std::same_as<chartype,char32_t>)
					{
						iter=::fast_io::details::copy_string_literal(U"NAN",iter);
					}
					else if constexpr(::std::same_as<chartype,char8_t>)
					{
						iter=::fast_io::details::copy_string_literal(u8"NAN",iter);
					}
				}
				else
				{
					if constexpr(::std::same_as<chartype,char>)
					{
						iter=::fast_io::details::copy_string_literal("nan",iter);
					}
					else if constexpr(::std::same_as<chartype,wchar_t>)
					{
						iter=::fast_io::details::copy_string_literal(L"nan",iter);
					}
					else if constexpr(::std::same_as<chartype,char16_t>)
					{
						iter=::fast_io::details::copy_string_literal(u"nan",iter);
					}
					else if constexpr(::std::same_as<chartype,char32_t>)
					{
						iter=::fast_io::details::copy_string_literal(U"nan",iter);
					}
					else if constexpr(::std::same_as<chartype,char8_t>)
					{
						iter=::fast_io::details::copy_string_literal(u8"nan",iter);
					}
				}
			}
			return iter;
		}

		constexpr
			::std::uint_least64_t twodigits{static_cast<T>(base)*static_cast<T>(base)};
		constexpr
			::std::uint_least64_t highu{twodigits*twodigits};
		constexpr auto tb{::fast_io::details::digits_table<chartype,base,uppercase>};
		if constexpr(sizeof(T)<sizeof(::std::uint_least64_t))
		{
			::std::uint_least64_t numerator10000low{numerator*static_cast<::std::uint_least64_t>(highu)};
			auto denominatordiv2{denominator>>1u};
			bool denominatoriseven{!(denominator&1u)};

			auto quotient{numerator10000low/denominator};
			auto remainder{numerator10000low%denominator};
			if((denominatordiv2<remainder)||
				(remainder==denominatordiv2&&denominatoriseven&&
				((quotient&1u)!=0u)))	//round 
			{	
				++quotient;//should be okay
			}
			auto quotientdiv100{quotient/twodigits};
			unsigned quotientmod100{static_cast<unsigned>(quotient%twodigits)};
			iter=::fast_io::details::print_reserve_integral_define<base,false,false,false,uppercase,false>(iter,quotientdiv100);
			*iter=::fast_io::char_literal_v<u8'.',chartype>;
			++iter;
			::fast_io::details::non_overlapped_copy_n(tb+(quotientmod100<<1u),2u,iter);
			iter+=2u;
		}
		else
		{
			T numerator10000high;
			T numerator10000low;
			if constexpr(sizeof(T)<=sizeof(::std::uint_least64_t))
			{
				numerator10000low=::fast_io::details::intrinsics::umul(numerator,highu,numerator10000high);
			}
			else
			{
				::std::uint_least64_t numeratorhigh;
				auto numeratorlow{::fast_io::details::intrinsics::unpack_generic(numerator,numeratorhigh)};

				::std::uint_least64_t numlh;
				auto numll=::fast_io::details::intrinsics::umul(numeratorlow,highu,numlh);
				
				::std::uint_least64_t numhl;
				auto numhh=::fast_io::details::intrinsics::umul(numeratorhigh,highu,numhl);
				constexpr
					::std::uint_least64_t zero{};

				bool carry{::fast_io::details::intrinsics::add_carry(false,numlh,numhl,numhl)};
				::fast_io::details::intrinsics::add_carry(carry,numhh,zero,numhh);
				numerator10000low=(static_cast<T>(numhl)<<64u)|numll;
				numerator10000high=static_cast<T>(numhh);
			}
			auto denominatordiv2{denominator>>1u};
			bool denominatoriseven{!(denominator&1u)};
			unsigned quotientmod100;
			if(numerator10000high==0u)
#if __has_cpp_attribute(likely)
			[[likely]]
#endif
			{
				auto quotient{numerator10000low/denominator};
				auto remainder{numerator10000low%denominator};
				if((denominatordiv2<remainder)||
					(remainder==denominatordiv2&&denominatoriseven&&
					((quotient&1u)!=0u)))	//round 
				{	
					++quotient;//should be okay
				}
				auto quotientdiv100{quotient/twodigits};
				quotientmod100=static_cast<unsigned>(quotient%twodigits);
				iter=::fast_io::details::print_reserve_integral_define<base,false,false,false,uppercase,false>(iter,quotientdiv100);
			}
			else
			{
				using udivmodtype = decltype(numerator10000low+denominator);
				constexpr
					T zero{},one{1u};
				auto [quotientlow,quotienthigh,remainderlow,remainderhigh] =
					::fast_io::details::intrinsics::udivmod<udivmodtype>(numerator10000low,numerator10000high,denominator,zero);
#if __has_cpp_attribute(assume)
				[[assume(remainderhigh==0)]];
#endif
				if((denominatordiv2<remainderlow)||
					(remainderlow==denominatordiv2&&denominatoriseven&&
					((quotientlow&1u)!=0u)))	//round 
				{

					bool carry{::fast_io::details::intrinsics::add_carry(false,quotientlow,one,quotientlow)};
					::fast_io::details::intrinsics::add_carry(carry,quotienthigh,zero,quotienthigh);
				}
				if(quotienthigh==0u)
				{
					auto quotientdiv100{quotientlow/twodigits};
					quotientmod100=static_cast<unsigned>(quotientlow%twodigits);
					iter=::fast_io::details::print_reserve_integral_define<base,false,false,false,uppercase,false>(iter,quotientdiv100);
				}
				else
				{
					constexpr
						auto mxval{::fast_io::details::base_ul64_max_val<base,T>};
					auto [quotientlowlow,quotientlowhigh,remainderlowlow,remainderlowhigh] =
						::fast_io::details::intrinsics::udivmod<udivmodtype>(quotientlow,quotienthigh,mxval,zero);

#if __has_cpp_attribute(assume)
					[[assume(quotientlowhigh==0)]];
					[[assume(remainderlowhigh==0)]];
#endif
			 		iter=::fast_io::details::print_reserve_integral_define<base,false,false,false,uppercase,false>(iter,quotientlowlow);

					auto quotientdiv100{remainderlowlow/twodigits};
					quotientmod100=static_cast<unsigned>(remainderlowlow%twodigits);

					constexpr std::size_t tdigitsm2{::fast_io::details::cal_max_int_size<T,base>()-4u};
					::fast_io::details::print_reserve_integral_main_impl<base,uppercase>(iter+=tdigitsm2,quotientdiv100,tdigitsm2);
				}
			}
			*iter=::fast_io::char_literal_v<u8'.',chartype>;
			++iter;
			::fast_io::details::non_overlapped_copy_n(tb+(quotientmod100<<1u),2u,iter);
			iter+=2u;
		}
		*iter=::fast_io::char_literal_v<u8'%',chartype>;
		++iter;
		return iter;
	}
}
	
}

template<::std::integral chartype,::fast_io::manipulators::scalar_flags flags,typename T,typename U>
requires (::fast_io::details::my_integral<T>&&::fast_io::details::my_integral<U>)
inline constexpr chartype* print_reserve_define(::fast_io::io_reserve_type_t<chartype,
	::fast_io::manipulators::scalar_manip_t<flags,::fast_io::manipulators::percentage_conventional_t<T,U>>>,
	chartype* iter,
	::fast_io::manipulators::scalar_manip_t<flags,::fast_io::manipulators::percentage_conventional_t<T,U>> v) noexcept
{
	return ::fast_io::details::prrsv_percentage_conventional_impl<flags.base,flags.uppercase,flags.showpos>(iter,v.reference.numerator,v.reference.denominator);
}

}

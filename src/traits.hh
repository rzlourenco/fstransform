/*
 * traits.hh
 *
 *  Created on: Feb 27, 2011
 *      Author: max
 */

#ifndef FSTRANSLATE_TRAITS_HH
#define FSTRANSLATE_TRAITS_HH

#include "check.hh"

template<typename T> struct ft_type_traits;
/**
 * whether char is signed or unsigned is implementation dependent.
 * in any case, the compiler treats (char), (unsigned char) and (signed char) as different types
 */
template<> struct ft_type_traits<char>               { typedef unsigned char      unsigned_type; typedef signed char signed_type; };
template<> struct ft_type_traits<signed char>        { typedef unsigned char      unsigned_type; typedef signed char signed_type; };
template<> struct ft_type_traits<unsigned char>      { typedef unsigned char      unsigned_type; typedef signed char signed_type; };
template<> struct ft_type_traits<short>              { typedef unsigned short     unsigned_type; typedef short       signed_type; };
template<> struct ft_type_traits<unsigned short>     { typedef unsigned short     unsigned_type; typedef short       signed_type; };
template<> struct ft_type_traits<int>                { typedef unsigned int       unsigned_type; typedef int         signed_type; };
template<> struct ft_type_traits<unsigned int>       { typedef unsigned int       unsigned_type; typedef int         signed_type; };
template<> struct ft_type_traits<long>               { typedef unsigned long      unsigned_type; typedef long        signed_type; };
template<> struct ft_type_traits<unsigned long>      { typedef unsigned long      unsigned_type; typedef long        signed_type; };

#ifdef FT_HAVE_LONG_LONG
template<> struct ft_type_traits<long long>          { typedef unsigned long long unsigned_type; typedef long long   signed_type; };
template<> struct ft_type_traits<unsigned long long> { typedef unsigned long long unsigned_type; typedef long long   signed_type; };
#endif /* FT_HAVE_LONG_LONG */

#define FT_TYPE_TO_UNSIGNED(T) ft_type_traits< T >::unsigned_type
#define FT_TYPE_TO_SIGNED(T)   ft_type_traits< T >::signed_type

#endif /* FSTRANSLATE_TRAITS_HH */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwesley <lwesley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:03:18 by lwesley           #+#    #+#             */
/*   Updated: 2022/08/08 12:29:46 by lwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>

template <typename someType>
void swap(someType &a, someType &b) {
	someType c;
	c = a;
	a = b;
	b = c;
}

template <typename someType>
someType min(someType &a, someType &b) {
	return (b <= a ? b : a);
}

template <typename someType>
someType max(someType &a, someType &b) {
	return (b >= a ? b : a);
}

#endif
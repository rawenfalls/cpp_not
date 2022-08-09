/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwesley <lwesley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:04:37 by lwesley           #+#    #+#             */
/*   Updated: 2022/08/08 13:20:10 by lwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename someType>
void fonc (someType symbol) {
	std::cout << "CPP it's " << symbol << std::endl;
}

template <typename T, typename U>
void iter (T *mas, U length, void (*func)(T const &t)) {
	for (U i = 0; i < length; i++)
		func(mas[i]);
}

#endif
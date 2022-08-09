/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwesley <lwesley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:04:41 by lwesley           #+#    #+#             */
/*   Updated: 2022/08/08 13:19:30 by lwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main() {
	int arr[] = {1, 2, 3};
	iter(arr, 3, fonc);

	double d_arr[] = {4.7, 5.8, 6.9};
	iter(d_arr, 3, fonc);

	float f_arr[] = {2.0f, 3.45f, 789.9f};
	iter(f_arr, 3, fonc);

	char c_arr[] = {'C', 'P', 'P'};
	iter(c_arr, 3, fonc);

	std::string s_arr[] = {"CPP", "07", "templates"};
	iter(s_arr, 3, fonc);

	return(0);
}
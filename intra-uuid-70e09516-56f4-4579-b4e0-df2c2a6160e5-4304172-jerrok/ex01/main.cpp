/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:33:34 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:38:16 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string str;

	while(str != "EXIT")
	{
		std::cout << "Enter command ADD | SERACH | EXIT" << std::endl;
		std::getline(std::cin, str);
		if(std::cin.eof())
			exit(1);
		if(str == "ADD")
			phoneBook.add();
		else if(str == "SEARCH")
			phoneBook.search();
		else
			if(str != "EXIT")
				std::cout << "Wrong command, try again" << std::endl;
	}
	return 0;
}
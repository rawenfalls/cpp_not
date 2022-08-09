/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:47:33 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:47:33 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook(){}

static void check_input(std::string str)
{
	while(str.empty())
	{
		std::cout << "Empty prompt" << std::endl;
		std::getline(std::cin, str);
	}
}

void PhoneBook::add()
{
	std::string str;
	static int i = 0;
	
	std::cout << "new contact pos: "<< i + 1 << std::endl;
	contacts[i].setIndex(i + 1);
	std::cout << "Enter first name:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	check_input(str);
	contacts[i].setFirstName(str);
	
	std::cout << "Enter last name:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	contacts[i].setLastName(str);
	
	std::cout << "Enter nickname:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	contacts[i].setNickname(str);
	
	std::cout << "Enter phone number:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	contacts[i].setPhoneNumber(str);
	
	std::cout << "Enter darkest secret:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	contacts[i].setDarkestSecret(str);
	std::cout << std::endl;

	i++;
	if(i == 8)
		i = 0;
	else
	{
		if(i == 0)
			for(; contacts[i].getIndex() && i < 8;)
				i++;
	}
}

void PhoneBook::show(int i)
{
	std::cout << "index: " << contacts[i].getIndex() << std::endl;
	std::cout << "first name: " << contacts[i].getFisrstName() << std::endl;
	std::cout << "last name: " << contacts[i].getLastName() << std::endl;
	std::cout << "nickname: " << contacts[i].getNickname() << std::endl;
	std::cout << "phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

static void print_str(std::string str)
{
	if(str.size() > 10)
		std::cout << std::setw(9) << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

void PhoneBook::search()
{
	int index, max;
	std::string str;

	std::cout << "     index|";
	std::cout << " firstName|";
	std::cout << "  lastName|";
	std::cout << "  nickname|" << std::endl;
	for(int i = 1; i <= 44; i++)
	{
		if(i % 11 == 0 && i)
			std::cout << "|";
		else
			std::cout << "-";
	}
	std::cout << std::endl;
	for(int i = 0; contacts[i].getIndex() > 0 && contacts[i].getIndex() < 9; i++)
	{
		std::cout << std::setw(10) << contacts[i].getIndex() << "|";
		str = contacts[i].getFisrstName();
		print_str(str);

		str = contacts[i].getLastName();
		print_str(str);

		str = contacts[i].getNickname();
		print_str(str);
		std::cout << std::endl;

		max = i + 1;
	}
	if(contacts[0].getIndex())
	{
		std::cout << "Enter index" << std::endl;
		std::getline(std::cin, str);
		index = atoi(str.c_str());
		while(index < 1 || index > max)
		{
			if(std::cin.eof())
				exit(1);
			std::cout << "Index out of range, try again" << std::endl;
			std::getline(std::cin, str);
			index = atoi(str.c_str());
		}
		show(index - 1);
	}
}

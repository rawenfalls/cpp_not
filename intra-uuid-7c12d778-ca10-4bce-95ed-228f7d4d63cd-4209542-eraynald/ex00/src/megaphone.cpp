/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:19:32 by eraynald          #+#    #+#             */
/*   Updated: 2022/08/11 16:23:36 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const **argv)
{

	if (argc == 1)
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		int i = 1;
		int j;
		while(argv[i]){
			j = 0;
			while(argv[i][j]){
				if (argv[i][j]>='a' and argv[i][j]<='z')
					std::cout<<(char)(argv[i][j] - 32);
				else
					std::cout<<argv[i][j];
				j++;
			}
			i++;
		}
	}	
	std::cout<<'\n';
	return 0;
}

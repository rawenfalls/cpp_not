#include "iter.hpp"

#include <iostream>

void to_upper(char &c){
	c = std::toupper(c);
}

int main(){
	{
		char c[4] = {'a', 'b', 'C', 'd'};
		iter(c, 4, to_upper);
		iter(c, 2, ::increment);
		std::cout << c[0] << " " << c[1] << " " << c[2] << " " << c[3] << "\n";
	}
	{
		int c[4] = {-1, 7, 15, 0};
		iter(c, 4, ::increment);
		std::cout << c[0] << " " << c[1] << " " << c[2] << " " << c[3] << "\n";
	}
}
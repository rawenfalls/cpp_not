/*#include <iostream>
#include "Array.hpp"

int main(){
	Array<int> IntArray(5);
	Array<std::string> StringArray(5);

	for (unsigned i = 0; i < IntArray.size(); ++i){
		IntArray[i] = i + 1;
		StringArray[i] = std::to_string(i + 1) + "_string";
	}
	std::cout << "Int Array:\n";
	for (unsigned i = 0; i < IntArray.size(); ++i){
		std::cout << IntArray[i] << "\n";
	}
	std::cout << "\nString Array:\n";
	for (unsigned i = 0; i < StringArray.size(); ++i){
		std::cout << StringArray[i] << "\n";
	}

	std::cout << "\nTry IntArray[5]:\n";
	try{
		IntArray[5] = 2;
	}
	catch(std::exception &e){
		std::cout << e.what();
	}

	std::cout << "\nconst String Array copy to String Array:\n";
	const Array<std::string> constStringArray(StringArray);
	for (unsigned i = 0; i < 5; ++i)
		std::cout << constStringArray[i] << "\n";

	for (unsigned i = 0; i < StringArray.size(); ++i){
		StringArray[i] = std::to_string(i + 1) + "_string_change";
	}
	std::cout << "\nString Array after changing:\n";
	for (unsigned i = 0; i < StringArray.size(); ++i){
		std::cout << StringArray[i] << "\n";
	}

	std::cout << "\nconst String Array after changing String Array:\n";
	for (unsigned i = 0; i < 5; ++i)
		std::cout << constStringArray[i] << "\n";

	std::cout << "\nString Array operator= const String Array:\n";
	StringArray = constStringArray;
	for (unsigned i = 0; i < StringArray.size(); ++i){
		std::cout << StringArray[i] << "\n";
	}
}*/
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}
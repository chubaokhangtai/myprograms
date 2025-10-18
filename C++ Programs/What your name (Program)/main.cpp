// Example program
#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout << "What is your name? ";
	getline (std::cin, name);
	std::cout << "Hello, " << name << "!\n";
	
	std::wcout << L"\nPress Enter to exit...";
	std::wcin.get();
	return 0;
}
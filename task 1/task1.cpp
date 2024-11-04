#include <iostream>

int main()
{
	char s;
	std::cout << "Enter your symbol: ";
	std::cin >> s;
	std::cout << int(s) << "\n";
	std::cout << std::hex << std::uppercase << int(s) << "\n";
	return 0;
}

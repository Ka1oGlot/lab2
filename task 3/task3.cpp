#include <iostream>


int main()
{
	int i;
	std::cout << "Enter your number: ";
	std::cin >> i;
	bool even = i % 2 == 0;
	bool oct = i % 8 == 0;
	bool hex = i % 16 == 0;
	if (even)
	{
		std::cout << "Подільність на 8: " << (oct ? "ТАК" : "НІ") << "\n";
		std::cout << "Подільність на 16: " << (hex ? "ТАК" : "НІ") << "\n";
		std::cout << "oct: " << std::oct << i << "\n";
		std::cout << "hex: " << std::hex << i << "\n";
	}
	else
	{
		std::cout << "Дане число не є парним\n";
	}
	return 0;
}

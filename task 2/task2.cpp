#include <iostream>
#include <iomanip>

int main()
{
	double a, b;
	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;
	std::cout << std::fixed << std::setprecision(12);
	std::cout << "Sum is: " << a+b << "\n" << "Difference is: " << a-b << "\n" << "Product is: " << a*b << "\n" << "Quotient is: " <<a/b << "\n";
	return 0;
}

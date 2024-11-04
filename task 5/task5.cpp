#include <iostream>

int main()
{
	double points;
	std::cout << "Введіть оцінку: ";
	std::cin >> points;
	if (0 <= points && points <= 4.4)
	{
		std::cout << "Незадовільна оцінка(2,0)\n";
	}
	else if (4.5 <= points && points <= 5.2)
	{
		std::cout << "Задовільна оцінка(3,0)\n";
	}
	else if (5.3 <= points && points <= 6.2)
	{
		std::cout << "Оцінка вище задовільної(3,5)\n";
	}
	else if (6.3 <= points && points <= 7.2)
	{
		std::cout << "Хороша оцінка(4,0)\n";
	}
	else if (7.3 <= points && points <= 8.2)
	{
		std::cout << "Оцінека вище добре(4,5)\n";
	}
	else if (8.3 <= points && points <= 9.0)
	{
		std::cout << "Дуже добре(5,0)\n";
	}
	else
	{
		std::cout << "Неправильна кількість пунктів!\n";
	}
	return 0;
}

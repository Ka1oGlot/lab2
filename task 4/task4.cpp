#include <iostream>
#include <iomanip>

int main()
{
	int a;
	std::cout << "Виберіть варіант:\n1 – переведення одиниць за Цельсієм у Фаренгейт\n2 – переведення одиниць Фаренгейта в Цельсій\n";
	std::cin >> a;
	if (a == 1)
	{
		double c;
		std::cout << "Введіть кількість градусів за Цельсієм: ";
		std::cin >> c;
		if (c < -273)
		{
			std::cout << "Занадто холодно для підрахунку!\n";
		}
		else
		{
			std::cout << std::fixed << std::setprecision(2);
			std::cout << c * 1.8 + 32 << " Фаренгейта\n";
		}
	}
	else if (a == 2)
	{
		double f;
		std::cout << "Введіть кількість градусів за Фаренгейтом: ";
		std::cin >> f;
		if (f < -459.67)
		{
			std::cout << "Занадто холодно для підрахунку!\n";
		}
		else
		{
			std::cout << std::fixed << std::setprecision(2);
			std::cout << (f - 32) / 1.8 << " Цельсія\n";
		}
	}
	else
	{
		std::cout << "Некоректно введені дані!\n";
	}
	return 0;
}
	


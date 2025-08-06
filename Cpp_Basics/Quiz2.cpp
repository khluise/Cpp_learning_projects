#include <iostream>

//takes three numbers as input and prints them
int main()
{
	int x{};
	int y{};
	int z{};

	std::cout << "Enter three numbers: ";
	std::cin >> x >> y >> z;

	std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
	
	return 0;
}

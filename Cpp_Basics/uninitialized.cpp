#include <iostream>

void doNothing(int&)
{
}

int main()
{
	int x; // this variable is uninitialized because we haven't given it a value
	doNothing(x); //we are tricking the complier that we are actually using x somewhere

	std::cout << x << '\n';

	return 0;
}

#include <iostream>

int main()
{
    std::cout << "Enter an integer number: ";
    int x {};
    std::cin >> x;
   
    std::cout  << "You have entered: " << x << '\n';
    
    std::cout << "Enter two number: ";
    double height {};
    double width {};
    std::cin >> height >> width;

    std::cout << "You have entered " <<  height << " and " << width << '\n';
 

    return 0;	
}


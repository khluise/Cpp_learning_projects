#include <iostream>

int main()
{
    // std::cout << 5;
    // std::cout << 6-5;
    // std::cout << 'H';
    // std::cout << "Luise";

    // int x;
    // double width;
    // int a, b;
    // int y, z;
    // int width; 

    // width = 6;
    // std::cout << width;

    // width = 9;
    // std::cout << width;

    // int length { 15 };
    // std::cout << length;
    // return 0;
    // int w1 {6.9};
    double w1 = 6.9;
    std::cout << w1;
    std::cout << '\n';
    
    float w2 {6.9f};
    std::cout << w2;
    std::cout << '\n';

    double compare  {w1 + w2};
    std::cout << compare;
    std::cout << '\n';

    int x{};
    std::cout << x;
    std::cout << '\n';

    // int a;
    // // std :: cout << a;
    // // std::cout << '\n';

    [[maybe_unused]] double pi {3.14159265358979};
    [[maybe_unused]] double gravity {9.81};
    [[maybe_unused]] double euler_number {2.718281828459045};

    std::cout << pi << '\n';
    std::cout << euler_number << '\n';

    std::cout << "Hello, Luise!" << std::endl;
    std::cout << "This should print in a new line " << std::endl;

    std::cout << "This is a test if i can compile it using only terminal" << std::endl;
    
    std::cout  << "This line will end with slash n instead of endl \n";
    std::cout << "This is better sometimes because endl not only outputs ";
    std::cout << "starts a new line but also flashs the output to display\n";
    std::cout << "Sometimes we may not want that because it is slow.\n";
    return 0;
}


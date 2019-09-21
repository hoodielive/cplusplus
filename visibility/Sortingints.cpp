#include <iostream>

int newMain()
{
    int values[100];
    for (int i = 0; i < 100; i++)
    {
        std::cout << "Enter value " << i << ": " << std::endl;
        std::cin >> values[i];
    }
};
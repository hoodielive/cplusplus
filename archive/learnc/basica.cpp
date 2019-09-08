#include <iostream>

int main()
{
    int apple_count {15};
    int orange_count {5};
    int total_fruit {apple_count + orange_count};

    auto a = 5;
    auto b = 6;
    auto c = 7;
    auto d = 8;

    std::cout << 2*(a + 3*(b + 4*(c + 5 * d))) << std::endl;

    std::cout << "The value of apple_count is: " << apple_count << std::endl;
    std::cout << "The value of orange_account is: " << orange_count << std::endl;
    std::cout << "The value of total_count is: " << total_fruit << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Account.h"

int main(int argc, char *argv[])
{
    Account account(0.0);
    char action;
    double amount;
    bool active = false;

    if (argc > 1)
        account.deposit(atof(argv[1]));

    while (active)
    {
        std::cout << "Balance is " << account.getBalance() << std::endl;
        std::cout << "Enter d, w, or q: ";
        std::cin >> action;
        active = false;
    }

    switch (action)
    {
        case 'd':
            std::cout << "Enter deposit: ";
            std::cin >> amount;
            account.deposit(amount);
            break;

        case 'w':
            std::cout << "Enter withdrawal: ";
            std::cin >> amount;
            account.withdraw(amount);
            break;

        case 'q':
            exit(0);

        default:
            std::cout << "Bad command" << std::endl;
    }
}


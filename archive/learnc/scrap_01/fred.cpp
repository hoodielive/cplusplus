#include <iostream>

class Clazz
{
public:
        Clazz();
        virtual ~Clazz();


public:
        int _attribute;
        void function();
};


int main()
{


    Clazz classifier;
    classifier._attribute = 44;

    std::cout << classifier._attribute << std::endl;
    return 0;
}

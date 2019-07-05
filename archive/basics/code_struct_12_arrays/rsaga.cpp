#include <iostream>

class Entity
{
    public:
        static const int size = 5;

    Entity() 
    {
        int a[5]; 
        int count = sizeof(a) / sizeof(int); // shouldn't you maintain yourself? 
    }

};

int main()
{
    Entity e; 
}
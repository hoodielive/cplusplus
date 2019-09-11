#include <iostream>

struct Entity
{
   int x, y;

   void Print()
   {
       std::cout << x << ", " << y << std::endl;
   }
};

enum Perfection : unsigned char
{
    A = 5, B, C
};

class Singleton
{
private:
    static Singleton* s_Instance;
public:
    static Singleton& Get() { return *s_Instance; }

    void Howdy() {}
};

Singleton* Singleton::s_Instance = nullptr;

void Function()
{
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1 = {5, 6};
    e.Print();
    e1.Print();

    Function();

    Singleton::Get().Howdy();

    Perfection value = B;
}


#include <iostream>

class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }

public:
    virtual std::string GetName() { return "Entity" };
};

class Player : public Entity
{
public:
   const char* Name;

   void PrintName()
   {
       std::cout << Name << std::endl;
   }
public:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}

    std::string GetName() { return m_Name; }
};


int main()
{
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("Larry");
    std::cout << p->GetName() << std::endl;

    std::cin.get();
}
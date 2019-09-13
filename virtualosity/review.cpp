#include <iostream>

class Printable()
{
public:
    virtual std::string GetClassName() = 0;
}

class Entity : public Printable
{
public:
    virtual std::string name GetName() = 0;
    std::string GetClassName() { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name) : m_Name(name) {}

    std::string GetName() override { return m_Name }
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)
{
    std::cout << obj->GetClassName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    Print(e);
    std::cin.get();
}

#include <iostream>
#include <utility>

class Entity
{
public:
    virtual std::string GetName() = 0;
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    explicit Player(std::string  name) : m_Name(std::move(name)) {}
    std::string GetName() override { return m_Name; }
};


int main() {
    Entity* e = new Player("");
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("Larry");
    std::cout << p->GetName() << std::endl;

    Entity* entity = p;
    std::cout << entity->GetName() << std::endl;
}
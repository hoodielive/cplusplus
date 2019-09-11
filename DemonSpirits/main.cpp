#include <iostream>

class Entity
{
public:
    enum Vectoria {
        _Love = 0, _Peace, _Joy
    };

public:
    static void ReturnVectoria(const char* message)
    {
        std::cout << "The following message comes from Vectoria: " << message << std::endl;
    }
};

int main()
{
    Entity::Vectoria vectorese;
    vectorese = Entity::_Love;

    Entity::ReturnVectoria((const char *) vectorese);
    return 0;

}
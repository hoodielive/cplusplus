#include <iostream>


class Player
{
public:
    int x, y;
    int speed;
};


void Move(Player& player, int xa, int ya)
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;

    std::cout << "The return for player.x is: " << player.x  << std::endl;
    std::cout << "The return for player.y is: " << player.y  << std::endl;
};

int main()
{
   Player player;

   player.x = 5;
   player.y = 15;

   Move(player, 1, -1);

   std::cin.get();

}

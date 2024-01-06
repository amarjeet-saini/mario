#include <iostream>
#include <GameEngine/Vec2.hpp>

int main()
{
    Vec2 v1 (1,2);
    Vec2 v2 (2,6);
    Vec2 v3 = v1 + v2;
    std::cout << v3.x << " " << v3.y << std::endl;
    return 0;
}
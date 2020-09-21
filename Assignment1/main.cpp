#include <iostream>
#include "menuinterface.h"
using namespace std;

int main()
{

    auto menu = new MenuInterface(std::cout, std::cin);
    menu -> displayWelcome("Kate", "Dungeon Game");
    menu ->run();
}

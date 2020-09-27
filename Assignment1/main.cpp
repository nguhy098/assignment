#include <iostream>
#include "menuinterface.h"
#include "game.h"
using namespace std;



int main()
{
   auto menu = new MenuInterface();
   menu -> displayWelcome("Hoang Chau Nguyen", "Dungeon Level Builder");
   menu ->run();

}

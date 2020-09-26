#include <iostream>
#include "menuinterface.h"
#include "game.h"
using namespace std;



int main()
{
   auto menu = new MenuInterface();
   menu -> displayWelcome("Kate", "Dungeon Game");
   menu ->run();



}

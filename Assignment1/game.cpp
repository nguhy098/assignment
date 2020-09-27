#include "game.h"
#include <random>
#include <ctime>
#include "wall.h"
#include <ostream>
#include <iostream>
#include "blockeddoorway.h"
#include "monster.h"
#include "lockeddoor.h"
#include "onewaydoor.h"


using namespace std;
Game::Game()
{

}

static Game* INSTANCE = nullptr;
Game *Game::instance()
{
   if(INSTANCE == nullptr){
       Game* game = new Game();
       INSTANCE = game;
   }
   return INSTANCE;
}

double Game::randomDouble()
{
    return _realDistribution(_randomGenerator);

}

void Game::createRandomLevel(std::string name, int width, int height)
{
    _name = name;
    _width = width;
    _height = height;
}

void Game::displayLevel(std::string display)
{
    _display = display;
}

void Game::createExampleLevel(){

    RoomEdge re; //+
    Wall w; // - or |
    BlockedDoorway bd; // X
    Monster m; // M
    Item i; // L
    LockedDoor ld; //@
    Doorway dw; // <>^v
    OneWayDoor owd;
    //1
    cout << re.dislayCharacter();

    for(int i = 0; i<4; i++){
        cout << w.dislayCharacter();
    }
    cout << owd.dislayCharacter();
    for(int i = 0; i<4; i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() <<"  "<<re.dislayCharacter();
    for(int i = 0; i<9; i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() <<"  "<<re.dislayCharacter();
    for(int i = 0; i<9; i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter()<< endl;
    //2
    for(int i =0; i<3; i++){
        cout << w.dislayCharacter() <<"         "<< w.dislayCharacter();
        cout << "  ";
    }
    //3

    cout << "\n" << w.dislayCharacter()<<"         " << dw.dislayCharacter();
    for(int i = 0; i<2; i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter() << "         ";

    cout << bd.dislayCharacter();
    for(int i = 0; i<2; i++){
        cout << w.dislayCharacter();
    }
    cout << bd.dislayCharacter() << "   "<< m.displayCharacter() << " "
         << i.displayCharacter() << "   " << w.dislayCharacter() << endl;
    //4
    for(int i =0; i<3; i++){
        cout << w.dislayCharacter() <<"         "<< w.dislayCharacter();
        cout << "  ";
    }
    //5
    cout << "\n" <<re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() <<"  "<<re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() <<"  "<<re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() << endl;

    //6
    for(int i =0; i<3; i++){
        cout<< "     "<< w.dislayCharacter() << "     ";
        cout<< "  ";
    }
    cout << "\n";

    //7
    cout<< re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout<< dw.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout<< re.dislayCharacter() << "  " << re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout<< re.dislayCharacter() << "  " << re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout<< ld.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout<<re.dislayCharacter() << endl;

    //8
    for(int i =0; i<3; i++){
        cout << w.dislayCharacter() <<"         "<< w.dislayCharacter();
        cout << "  ";
    }
    cout <<"\n";
    //9
    cout << w.dislayCharacter() << "         " << dw.dislayCharacter();
    for(int i =0; i<2;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter() << "   " << m.displayCharacter() << " "
         << i.displayCharacter() <<"   "<<dw.dislayCharacter();
    for(int i =0; i<2;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter() << "         " << w.dislayCharacter() << endl;

    //10
    for(int i =0; i<3; i++){
        cout << w.dislayCharacter() <<"         "<< w.dislayCharacter();
        cout << "  ";
    }
    cout << "\n";

    //11
    cout << re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << bd.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() << "  " << re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() << "  " << re.dislayCharacter();
    for(int i =0; i<9;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() << endl;


    //12
    for(int i =0; i<2; i++){
        cout<< "     "<< w.dislayCharacter() << "     ";
        cout<< "  ";
    }
    cout <<"\n";

    //13
    cout << re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << bd.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() << "  " << re.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter();
    for(int i =0; i<4;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() << "  " << re.dislayCharacter();
    for(int i =0; i<9;i++){
        cout << w.dislayCharacter();
    }
    cout << re.dislayCharacter() << endl;


   //14
    for(int i =0; i<3; i++){
        cout << w.dislayCharacter() <<"         "<< w.dislayCharacter();
        cout << "  ";
    }
    cout << "\n";

    //15
    cout << w.dislayCharacter() << "     "<< i.displayCharacter()
         <<"   " << ld.dislayCharacter();
    for(int i =0; i<2;i++){
        cout << w.dislayCharacter();
    }
    cout << ld.dislayCharacter() << "         " << dw.dislayCharacter();
    for(int i =0; i<2;i++){
        cout << w.dislayCharacter();
    }
    cout << dw.dislayCharacter() << "   " << m.displayCharacter() << "     "
         << owd.dislayCharacter() <<endl;

    //16
    for(int i =0; i<3; i++){
        cout << w.dislayCharacter() <<"         "<< w.dislayCharacter();
        cout << "  ";
    }
    cout << "\n";

    //17
    for(int i=0; i<3; i++){
        cout << re.dislayCharacter();
        for(int i =0; i<9;i++){
            cout << w.dislayCharacter();
        }
        cout << re.dislayCharacter();
        cout <<"  ";
    }
    cout << "\n";

}

void Game::setDungeonType(DungeonLevelBuilder id)
{

}



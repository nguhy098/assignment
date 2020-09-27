#include "menuinterface.h"
#include <ostream>
#include <fstream>
#include <iostream>
#include <string>
#include "room.h"
#include "game.h"
using namespace std;



MenuInterface::MenuInterface() : _author{}, _title{}
{

}
MenuInterface MenuInterface(std::ostream display, std::istream input)
{

}

void MenuInterface::displayWelcome(const std::string &author, const std::string &title){
    _title = title;
    _author = author;
    cout << "Welcome to: ";
    cin >> _title;
    cout <<"        Developed by ";
    cin >> _author;
    cout << "   COMP 3023 Software Development with C++" << endl;
}

DungeonLevelBuilder *MenuInterface::Random(std::string name, int width, int height){
    _name = name;
    _width = width;
    _height = height;
    std::cout << "What would you like to call the level?";
    cin >> _name;
    std::cout <<"How many rows in *Small dark cave*?";
    while(_width!=0){
        if (1 <_width < 4){
            cin>>_width;
        }
        else{
            cout <<"Must be in range 1-4";

        }
        cout <<"How many rows in *Small dark cave*?";
     }
    cout <<"How many columns in *Small dark cave*?";
    while(_height!=0){
        if (1<_height<4){
            cin>>_height;
        }
        else{
            cout <<"Must be in range 1-4";

        }
        cout <<"How many columns in *Small dark cave*?";
     }
    cout << "What type of dungeon level is it? (b)asic or (m)agical ";
    std::string input;
    cin>>input;

    //Create Dungeon Level
}

void MenuInterface::run() {
    char input;
    ofstream f;
    cout << """What would you like to do? \n"
            "   (g)enerate the example level \n"
            "   (r)andom dungeon level \n"
            "   (q)uit \n";
    cin >> input;
    cout << "\n";
    if (input == 'g'){
       Game g;
       cout<<"Creating Example Dungeon Level... "<< endl;
       cout <<"";
       g.createExampleLevel();
       cout <<"Dungeon Level created!"<< endl;
       cout <<"";
    }
    if (input == 'r'){
        DungeonLevelBuilder Random(std::string name, int width, int height);
    }
    if(input == 'q'){
        cout << "Are you sure you want to quit? (y/n)";
        char choose;
        if (choose = 'y'){
            cout <<"Good bye" << endl;;
        }
        else{
            cout <<"Play again" << endl;
        }
    }

    char userinput;
    ofstream f1;
    cout <<"What would you like to do? \n"
           "    (d)escribe the dungeon level \n"
           "    (v)iew the dungeon level \n"
           "    (r)eturn to the main menu \n";
    cin >> userinput;
    if(userinput == 'd'){
        cin >> _name;
        cout << "Size:";
        cin >> _width;
        cout << "x";
        cin >> _height;
        cout << "Type:";
    }
    else if(userinput == 'v'){
        cin >> _name;
        //describe dungeon level: not done yet
        cout <<"*Press Enter to continue*";
        if(userinput == '\n'){
            cout <<"What would you like to do? \n"
                   "    (d)escribe the dungeon level \n"
                   "    (v)iew the dungeon level \n"
                   "    (r)eturn to the main menu \n";
        }
    }
    else if (userinput == 'r'){
        cout <<"Returning to main menu" << endl;
        f;
    }
    char userinput2;
    ofstream f2;
    cout <<"What would you like to do? \n"
           "    (d)escribe a room \n"
           "    (r)eturn to previous menu \n";
    cin >> userinput2;
    if(userinput2 == 'd'){
        int number;
        cout <<"Which room would you like to describe? (1-4)";
        cin >> number;
        Room desciption();
        cout <<"Press enter to continue";
        if(userinput2 == '\n'){
            cout <<"What would you like to do? \n"
                   "    (d)escribe a room \n"
                   "    (r)eturn to previous menu \n";
        }
    }

}

























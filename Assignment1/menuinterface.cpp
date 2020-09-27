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

DungeonLevelBuilder *MenuInterface::Random(){

    std::cout << "What would you like to call the level?" << endl;
    cin >> _name;
    std::cout <<"How many rows in *Small dark cave*?" <<endl;;
    cin >> _width;
    while(_width!=0){
        if (1 <_width < 4){
            cin>>_width;
        }
        else{
            cout <<"Must be in range 1-4" << endl;

        }
        cout <<"How many rows in *Small dark cave*?"<< endl;
     }
    cout <<"How many columns in *Small dark cave*?" << endl;
    cin >> _height;
    while(_height!=0){
        if (1<_height<4){
            cin>>_height;
        }
        else{
            cout <<"Must be in range 1-4" << endl;;

        }
        cout <<"How many columns in *Small dark cave*?" << endl;;
     }
    cout << "What type of dungeon level is it? (b)asic or (m)agical " << endl;;
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
            "   (q)uit \n" << endl;
    cin >> input;

    if (input == 'g'){
       Game g;
       cout<<"Creating Example Dungeon Level... "<< endl;
       cout <<"";
       g.createExampleLevel();
       cout <<"Dungeon Level created!"<< endl;
       cout <<"" <<endl;;
    }
    if (input == 'r'){
        Random();
    }
    if(input == 'q'){
        cout << "Are you sure you want to quit? (y/n)" << endl;;
        char choose;
        cin >> choose;
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
           "    (r)eturn to the main menu \n" << endl;
    cin >> userinput;
    if(userinput == 'd'){
        cin >> _name;
        cout << "Size:";
        cin >> _width;
        cout << "x";
        cin >> _height;
        cout << "Type:" << endl;;
    }
    else if(userinput == 'v'){
        cin >> _name;
        //describe dungeon level: not done yet
        cout <<"*Press Enter to continue*" << endl;
        cout << "" << endl;;
        if(userinput == '\n'){
            cout <<"What would you like to do? \n"
                   "    (d)escribe the dungeon level \n"
                   "    (v)iew the dungeon level \n"
                   "    (r)eturn to the main menu \n" <<endl;
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
           "    (r)eturn to previous menu \n" <<endl;
    cin >> userinput2;
    if(userinput2 == 'd'){
        int number;
        cout <<"Which room would you like to describe? (1-4)" << endl;
        cin >> number;
        Room desciption();
        cout <<"Press enter to continue" <<endl;
        if(userinput2 == '\n'){
            cout <<"What would you like to do? \n"
                   "    (d)escribe a room \n"
                   "    (r)eturn to previous menu \n" << endl;
        }
    }

}

























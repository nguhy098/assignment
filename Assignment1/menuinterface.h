#ifndef MENUINTERFACE_H
#define MENUINTERFACE_H
#include <string>
#include <ostream>
#include "dungeonlevelbuilder.h"
class MenuInterface
{
public:
    MenuInterface();
    MenuInterface(const MenuInterface &) = default;
    MenuInterface(std::ostream display, std::istream );
    void displayWelcome(const std::string &author, const std::string &title);
    void run();
    DungeonLevelBuilder* Random();
private:
    std::string _author;
    std::string _title;
    std::string _name;
    int _width;
    int _height;
};
std::ostream& operator<<(std::ostream &out, const MenuInterface &Menu);

#endif // MENUINTERFACE_H

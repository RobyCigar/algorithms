
#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
using namespace std;

struct MenuItem
{
    string name;
    double price;
    int rating;
    MenuItem *next;
};

class Menu
{
private:
    MenuItem *head;

public:
    Menu();
    void addItem(string name, double price, int rating);
    void displayMenu();
    MenuItem *searchItem(string name);
    void deleteItem(string name);
    void sortItems();
};

#endif 
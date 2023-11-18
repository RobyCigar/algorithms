#include "menu.h"

#ifndef RESET
#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */
#define BOLDBLACK "\033[1m\033[30m"   /* Bold Black */
#define BOLDRED "\033[1m\033[31m"     /* Bold Red */
#define BOLDGREEN "\033[1m\033[32m"   /* Bold Green */
#define BOLDYELLOW "\033[1m\033[33m"  /* Bold Yellow */
#define BOLDBLUE "\033[1m\033[34m"    /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */
#define BOLDCYAN "\033[1m\033[36m"    /* Bold Cyan */
#define BOLDWHITE "\033[1m\033[37m"   /* Bold White */
#endif

Menu::Menu(): head(nullptr)
{
}

void Menu::addItem(string name, double price, int rating)
{
    MenuItem *newItem = new MenuItem;
    newItem->name = name;
    newItem->price = price;
    newItem->rating = rating;
    newItem->next = head;
    head = newItem;
}

void Menu::displayMenu()
{
    cout << "\n** Daftar Menu ** :\n";

    MenuItem *current = head;
    while (current != nullptr)
    {
        cout << YELLOW << "Nama: " << RESET << current->name << "\tHarga: Rp. " << current->price << "\tRating: " << current->rating << endl;
        current = current->next;
    }
}

MenuItem *Menu::searchItem(string name)
{
    MenuItem *current = head;
    while (current != nullptr)
    {
        if (current->name == name)
        {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

void Menu::deleteItem(string name)
{
    MenuItem *current = head;
    MenuItem *previous = nullptr;

    while (current != nullptr && current->name != name)
    {
        previous = current;
        current = current->next;
    }

    if (current == nullptr)
    {
        cout << RED << "Menu tidak ditemukan." << RESET << endl;
        return;
    }

    if (previous == nullptr)
    {
        head = current->next;
    }
    else
    {
        previous->next = current->next;
    }

    delete current;
    cout << RED << "Menu berhasil dihapus." << RESET << endl;
}

void Menu::sortItems()
{
    cout << "Daftar menu yang telah diurutkan berdasarkan harga.\n";

    if (head == nullptr || head->next == nullptr)
    {
        return;
    }

    MenuItem *sorted = nullptr;
    MenuItem *current = head;

    while (current != nullptr)
    {
        MenuItem *next = current->next;

        if (sorted == nullptr || sorted->price >= current->price)
        {
            current->next = sorted;
            sorted = current;
        }
        else
        {
            MenuItem *temp = sorted;
            while (temp->next != nullptr && temp->next->price < current->price)
            {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }

        current = next;
    }

    head = sorted;
}

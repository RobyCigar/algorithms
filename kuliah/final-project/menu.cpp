#include "menu.h"

Menu::Menu(): head(nullptr)
{
}

void Menu::create(string name, double price, int rating)
{
    MenuItem *newItem = new MenuItem;
    newItem->name = name;
    newItem->price = price;
    newItem->rating = rating;
    newItem->next = head;
    head = newItem;
}

void Menu::getAll()
{
    cout << "\n** Daftar Menu ** :\n";

    MenuItem *current = head;
    while (current != nullptr)
    {
        cout << YELLOW << "Nama: " << RESET << current->name << "\tHarga: Rp. " << current->price << "\tRating: " << current->rating << endl;
        current = current->next;
    }
}

MenuItem *Menu::search(string name)
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

void Menu::remove(string name)
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

    while (current != nullptr) {
        MenuItem *next = current->next;

        if (sorted == nullptr || sorted->price >= current->price) {
            current->next = sorted;
            sorted = current;
        } else {
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
    getAll();
}

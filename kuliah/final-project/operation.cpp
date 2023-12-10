#include "operation.h"

void Operation::getMenu(Menu *restaurantMenu)
{
    restaurantMenu->getAll();
}

void Operation::insertMenu(Menu *restaurantMenu)
{
    string name;
    double price;
    int rating;

    cout << YELLOW << "Masukkan nama menu: ";
    cin.ignore();
    getline(cin, name);

    cout << YELLOW << "Masukkan harga menu: Rp. ";
    cin >> price;

    cout << YELLOW << "Masukkan rating menu(1-10): " << RESET;
    cin >> rating;

    restaurantMenu->create(name, price, rating);
    cout << "Menu telah berhasil ditambahkan.✨\n";
}

void Operation::searchMenu(Menu *restaurantMenu)
{
    string itemName;

    cout << YELLOW << "Masukkan nama menu yang ingin dicari: " << RESET;
    cin.ignore();
    getline(cin, itemName);

    {
        MenuItem *foundItem = restaurantMenu->search(itemName);
        if (foundItem != nullptr)
        {
            cout << "Menu ditemukan:\n";
            cout << "Nama: " << foundItem->name << "\tHarga: Rp. " << foundItem->price << "\tRating: " << foundItem->rating << endl;
        }
        else
        {
            cout << "Item not found.\n";
        }
    }
}

void Operation::sortMenu(Menu *restaurantMenu) 
{
    restaurantMenu->sortItems();
}


void Operation::removeMenu(Menu *restaurantMenu)
{
    string itemName;

    cout << "Masukkan nama menu yang ingin dihapus: ";
    cin.ignore();
    getline(cin, itemName);

    restaurantMenu->remove(itemName);
}
#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

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
// referensi: https://stackoverflow.com/a/12734036/12402567

void createMenu(Menu* restaurantMenu)
{
    string name;
    double price;
    int rating;

    cout << YELLOW << "Masukkan nama menu: ";
    cin.ignore();
    getline(cin, name);

    cout << YELLOW << "Masukkan harga menu: Rp. ";
    cin >> price;

    cout << YELLOW << "Masukkan rating menu: " << RESET;
    cin >> rating;

    restaurantMenu->addItem(name, price, rating);
    cout << "Menu telah berhasil ditambahkan.\n";
}

void searchMenu(Menu* restaurantMenu)
{
    string itemName;

    cout << YELLOW << "Masukkan nama menu yang ingin dicari: " << RESET;
    cin.ignore();
    getline(cin, itemName);

    {
        MenuItem *foundItem = restaurantMenu->searchItem(itemName);
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

void deleteMenu(Menu* restaurantMenu) {
    string itemName;

    cout << "Masukkan nama menu yang ingin dihapus: ";
    cin.ignore();
    getline(cin, itemName);

    restaurantMenu->deleteItem(itemName);
}


int main()
{
    Menu restaurantMenu;

    restaurantMenu.addItem("Nasi Goreng", 1500, 4);
    restaurantMenu.addItem("Mi Ayam", 10000, 3);
    restaurantMenu.addItem("Bakso", 12000, 5);

    int choice;
    string itemName;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tampilkan Menu\n";
        cout << "2. Tambah Menu\n";
        cout << "3. Cari Menu\n";
        cout << "4. Hapus Menu\n";
        cout << "5. Sort Menu berdasarkan harga\n";
        cout << "0. Keluar\n";
        cout << "Masukkan Pilihanmu: ";
        cin >> choice;
        system("clear");

        switch (choice) {
        case 1:
            restaurantMenu.displayMenu();
            break;

        case 2: 
            createMenu(&restaurantMenu);
            break;

        case 3:
            searchMenu(&restaurantMenu);
            break;

        case 4:
            deleteMenu(&restaurantMenu);
            break;

        case 5:
            restaurantMenu.sortItems();
            break;

        case 0:
            cout << "Sampai jumpa 😭\n";
            break;

        default:
            cout << "Pilihanmu gk valid.\n";
            break;
        }
        cout << "\n\nMasukkan karakter apapun utk kembali\n";
        system("read");
        system("clear");

    } while (choice != 0);

    return 0;
}

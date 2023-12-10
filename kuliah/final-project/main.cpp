// clang++ -o output main.cpp menu.cpp operation.cpp utils.cpp auth.cpp
#include <iostream>
#include <string>
#include <iomanip>
#include "menu.h"
#include "operation.h"
#include "utils.h"
#include "auth.h"

using namespace std;

int main()
{
    Menu restaurantMenu;
    Operation operation;
    int choice;
    string itemName;

    setAuth();
    setArt();
    setData(&restaurantMenu);
    do {
        setOptions(&choice);
        switch (choice) {
        case 1:
            operation.getMenu(&restaurantMenu);
            break;

        case 2: 
            operation.insertMenu(&restaurantMenu);
            break;

        case 3:
            operation.searchMenu(&restaurantMenu);
            break;

        case 4:
            operation.removeMenu(&restaurantMenu);
            break;

        case 5:
            operation.sortMenu(&restaurantMenu);
            break;

        case 0:
            cout << "Sampai jumpa 😭\n";
            break;

        default:
            cout << "Pilihanmu gk valid.\n";
            break;
        }
        if (choice != 0) {
            cout << "\n\n > Tekan Tombol apapun utk kembali 👇 <\n";
            system("read");
            system("clear");
        }

    } while (choice != 0);

    return 0;
}

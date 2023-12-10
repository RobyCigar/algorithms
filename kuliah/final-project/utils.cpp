#include<iostream>
#include <iomanip>
#include "menu.h"

void setArt() {
    std::cout << "██████╗░███████╗░██████╗████████╗░█████╗░██╗░░░██╗██████╗░░█████╗░███╗░░██╗████████╗" << std::endl;
    std::cout << "██╔══██╗██╔════╝██╔════╝╚══██╔══╝██╔══██╗██║░░░██║██╔══██╗██╔══██╗████╗░██║╚══██╔══╝" << std::endl;
    std::cout << "██████╔╝█████╗░░╚█████╗░░░░██║░░░███████║██║░░░██║██████╔╝███████║██╔██╗██║░░░██║░░░" << std::endl;
    std::cout << "██╔══██╗██╔══╝░░░╚═══██╗░░░██║░░░██╔══██║██║░░░██║██╔══██╗██╔══██║██║╚████║░░░██║░░░" << std::endl;
    std::cout << "██║░░██║███████╗██████╔╝░░░██║░░░██║░░██║╚██████╔╝██║░░██║██║░░██║██║░╚███║░░░██║░░░" << std::endl;
    std::cout << std::setw(50) << "-- UAS Data Struktur --" << std::endl;
    std::cout << std::setw(50) << "1. Rabih Seti Utomo (23.22.2511)" << std::endl;
    std::cout << std::setw(50) << "2. Sindiani Kusumawardhani (23.22.2522)" << std::endl;
}

void setOptions(int *choice) {
    std::cout << "\nMenu:\n";
    std::cout << "1. Tampilkan Menu\n";
    std::cout << "2. Tambah Menu\n";
    std::cout << "3. Cari Menu\n";
    std::cout << "4. Hapus Menu\n";
    std::cout << "5. Sort Menu berdasarkan harga\n";
    std::cout << "0. Keluar\n";
    std::cout << "Masukkan Pilihanmu: ";
    std::cin >> *choice;
    system("clear");
}

void setData(Menu *restaurantMenu) {
    restaurantMenu->create("Nasi Goreng", 15000, 9);
    restaurantMenu->create("Mi Ayam", 10000, 10);
    restaurantMenu->create("Bakso", 12000, 7);
    restaurantMenu->create("Sego Kucing", 5000, 8);
}
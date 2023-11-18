#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string title;
    string author;
    int year;
};

int main()
{
    const int maxBooks = 100; // Maksimum jumlah buku yang dapat disimpan
    Book books[maxBooks];
    int numBooks;

    // Input jumlah buku yang akan disimpan
    cout << "Masukkan jumlah buku yang akan disimpan: ";
    cin >> numBooks;

    if (numBooks <= maxBooks)
    {
        // Input informasi buku
        for (int i = 0; i < numBooks; ++i)
        {
            cin.ignore(); // Untuk menghindari masalah dengan newline characters
            cout << "Buku ke-" << i + 1 << ":" << endl;
            cout << "Judul: ";
            getline(cin, books[i].title);
            cout << "Penulis: ";
            getline(cin, books[i].author);
            cout << "Tahun Terbit: ";
            cin >> books[i].year;
        }

        // Menampilkan informasi buku yang disimpan
        cout << "\nDaftar Buku yang Disimpan:\n";
        for (int i = 0; i < numBooks; ++i)
        {
            cout << "Buku ke-" << i + 1 << ":\n";
            cout << "Judul: " << books[i].title << endl;
            cout << "Penulis: " << books[i].author << endl;
            cout << "Tahun Terbit: " << books[i].year << endl;
        }
    }
    else
    {
        cout << "Maaf, jumlah buku yang dimasukkan melebihi batas maksimum (" << maxBooks << ")." << endl;
    }

    return 0;
}

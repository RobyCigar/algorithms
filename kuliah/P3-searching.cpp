#include <iostream>
#include <string>

using namespace std; 
int main()
{
    int numStudents;

    // Meminta pengguna untuk memasukkan jumlah siswa
    cout << "Masukkan jumlah siswa: ";
    cin >> numStudents;

    // Memasukkan nama siswa secara dinamis ke dalam array
    string *studentNames = new string[numStudents];
    cout << "Masukkan nama-nama siswa:\n";
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Siswa " << i + 1 << ": ";
        cin.ignore();
        getline(cin, studentNames[i]);
    }
    string searchName;
    bool found = false;
    // Meminta pengguna untuk memasukkan nama yang ingin dicari
    cout << "\nMasukkan nama yang ingin dicari: ";
    cin.ignore();
    getline(cin, searchName);
    // Melakukan pencarian
    for (int i = 0; i < numStudents; ++i)
    {
        if (studentNames[i] == searchName)
        {
            found = true;
            cout << "Siswa ditemukan di indeks " << i << ".\n";
            break;
        }
    }
    // Menampilkan pesan jika siswa tidak ditemukan
    if (!found)
    {
        cout << "Siswa tidak ditemukan.\n";
    }
    delete[] studentNames;

    return 0;
}

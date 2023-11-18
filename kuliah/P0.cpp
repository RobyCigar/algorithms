#include <iostream>
using namespace std;


int main() {
    string nama[100]; 
    string MK[100];
    int nilai[100];
    int jml = 0;

    cout << "masukkan jml mahasiswa: ";
    cin >> jml;

    // inpuc data
    for (int i = 0; i < jml; i++)
    {
        /* code */
        cout << "masukkan nama mahasiswa!: " ;
        cin >> nama[i];
        cout << "masukkan mata kuliah yang diambil: ";
        cin >> MK[i];
        cout << "masukkan nilai mahasiswa: ";
        cin >> nilai[i];
    }

    for (int i = 0; i < jml; i++)
    {
        cout << "\nMenampilkan data" << endl;
        cout << "nama: " << nama[i] << ", nilai: " << nilai[i] << ", matkul: " << MK[i];
    }

        return 0;
    }
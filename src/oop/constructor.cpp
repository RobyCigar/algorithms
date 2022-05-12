#include <bits/stdc++.h>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        int umur;
        Mahasiswa(string nama, int umur) {
            Mahasiswa::nama = nama;
            Mahasiswa::umur = umur;
            cout << "Terinisiasi mhs bernama: " << nama << endl;
            cout << "Dengan usia: " << umur << endl;
        }
};

int main() {
    Mahasiswa mhs1("rabih", 20);

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        int umur;
        Mahasiswa(string nama, int umur) {
            this->nama = nama;
            this->umur = umur;
            cout << "Terinisiasi mhs bernama: " << nama << endl;
            cout << "Dengan usia: " << umur << endl;
        }
};

int main() {
    Mahasiswa mhs1("rabih", 20);
    cout << mhs1->nama << endl;

    return 0;
}

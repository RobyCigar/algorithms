#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    int nilai;
    string name;
    string nim;
};

void print(Mahasiswa mhs) {
    cout << "Nim: " << mhs.nim << endl;
    cout << "Nama: " << mhs.name << endl;
    cout << "Nilai: " << mhs.nilai << endl;
    cout << "=========================" << endl;
    cout << "No 4." << endl;
}

int main() {
    Mahasiswa mhs;
    mhs.name = "Rabih Seti Utomo";
    mhs.nilai = 100;
    mhs.nim = "23.22.2511";
    print(mhs);
}



// #include <iostream>
// using namespace std;


// void print() {
//     cout << "Nim: 23.22.2511" << endl;
//     cout << "Nama: Rabih Seti Utomo" << endl;
//     cout << "=========================" << endl;
//     cout << "No 3." << endl;
// }

// void sort() {
//     int arr[] = {7, 3, 8, 5, 6, 5, 4, 1};
//     for (size_t i = 0; i < 7; i++)
//     {
//         for (size_t j = i; j < 7; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 // swap
//                 int tmp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = tmp;
//             }
//         }
//     }
//     for (size_t i = 0; i < 7; i++)
//     {
//         cout << arr[i] << ", ";
//     }
// }
// int main() {
//     print();
//     sort();
//     return 0;
// }




















// #include <iostream>
// using namespace std;

// int search(int arr[], int input) {
//     int n = 8;
//     for (int a = 0; a < n; a++)
//     {
//         if (arr[a] == input)
//         {
//             return a;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int angka[] = {7, 3, 8, 5, 6, 5, 4, 1};
//     int input = 0;
//     cout << "Nim: 23.22.2511" << endl;
//     cout << "Nama: Rabih Seti Utomo" << endl;
//     cout << "==========" << endl;
//     cout << "No 2." << endl;
//     cout << "Masukkan angka: ";
//     cin >> input;
//     cout << endl;
//     int index =  search(angka, input);
//     if(index >= 0) {
//         cout << "Angka ketemu di index " << index << endl;
//     } else {
//         cout << "Angka gk ketemu " << endl;    
//     }
//     return 0;
// }
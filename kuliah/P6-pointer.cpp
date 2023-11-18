// #include <iostream>
// using namespace std;

// int main()
// {
//     int nomer, umur;
//     float bb, tb;
//     string nama;

//     cout << "Identifikasi alamat variable" << endl;
//     cout << "==========================" << endl;
//     cout << "Alamat var nomer  : " << &nomer << endl;
//     cout << "Alamat var umur   : " << &umur << endl;
//     cout << "Alamat var bb     : " << &bb << endl;
//     cout << "Alamat var tb     : " << &tb << endl;
//     cout << "Alamat var nama   : " << &nama << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int nomer, umur;
//     char kelamin = 'A';
//     float bb, tb;
//     string nama;
//     int *angka;
//     float *decimal;
//     string *text;
//     nomer = 10;
//     umur = 34;
//     bb = 65;
//     tb = 170;
//     nama = "Nama saya aja";
//     decimal = &bb;
//     tb = bb + *decimal;
//     text = &nama;
//     nama = nama + " tambahan";

//     cout << "Pointer alamat variable " << endl;
//     cout << "=============================" << endl;
//     cout << "Isi var nomer : " << nomer << endl;
//     cout << "Isi var umur : " << umur << endl;
//     cout << "Isi var kelamin : " << kelamin << endl;
//     cout << "Isi var bb : " << bb << endl;
//     cout << "Isi var tb : " << tb << endl;
//     cout << "Isi var nama : " << nama << endl;
//     cout << "Isi Ref text : " << *text << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int nomer, umur;
//     char kelamin = 'A';
//     float bb, tb;
//     string nama;
//     int *angka;
//     float *decimal;
//     string *text;

//     angka = &nomer + 1;

//     cout << "Pointer alamat variable " << endl;
//     cout << "=====================" << endl;
//     cout << "Isi var nomer: " << nomer << endl;
//     cout << "Alamat var nomer: " << &nomer << endl;
//     cout << "Alamat var umur: " << &umur << endl;
//     cout << "Alamat var kelamin: " << (void *)&kelamin << endl;
//     cout << "Alamat var bb: " << &bb << endl;
//     cout << "Alamat var tb: " << &tb << endl;
//     cout << "Alamat var nama: " << &nama << endl;
//     cout << "Alamat Nomer + 1: " << angka << endl;
//     cout << "Isi Nomer + 1: " << *angka << endl;

//     umur = 100;
//     cout << "Isi Nomer + 1 (umur): " << *angka << endl;

//     return 0;
// }



// #include <iostream>

// using namespace std;
// int main()
// {
//     char array[5];
//     char *p;
//     p = array;
//     *p = 'a';
//     p++;
//     *p = 'b';
//     p = &array[2]; *p = 'c'; 
//     p = array + 3;
//     *p = 'd'; p = array; 
//     *(p + 4) = 'e';
//     cout << "[";
//     for (int n = 0; n < 5; n++)
//     {
//         cout << array[n];
//     }
//     cout << "]";
//     return 0;
// }

// pointer dinamis
// #include <iostream>
// using namespace std;
// main()
// {
//     char array[5];
//     char *p;
//     p = array;
//     for (int i = 0; i<= 4; i++)
//     {
//         cout<<"InInput array["<< i << "]=";
//         cin >> *p;
//         p++;

//     }
//     return 0;
// }

#include <iostream>
int main()
{
    int nilail = 4;
    int nilai2 = 5;
    float nilai3 = 3.5;
    char nama[11] = "abedefghij" int "nilai_p1 = &nilai1;
        int "nilai_p2 = &nilai2;
        char *nilai p4 = nama;
    float #nilai p3 = &nilai3;
    cout< "nilai 1 = "<< * nilai pl< " alamat1 = "<< & nilai_p1;
    cout< < "Innilai 2 = "< *nilal p2< "
        alamat2 = "<<&nilai_p2;
                      cout<< "Innilai 3 = "< *
                      nilai_p3< " alamat3 = "<< &
                  nilai_p3;
    cout< "Innilai 4 = "<< *nilai p4 <<"
        alamat4 = "<<&nilai_p4;
        getch() j
}
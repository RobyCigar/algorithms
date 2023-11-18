#include <iostream>
#include <stdlib.h>

#define max 10

using namespace std;

void push(int stack[], int *top, int value);
void pop(int stack[], int *top, int *value);

int main()
{
    int stack[max];
    int top = -1;
    int n, value;

    do
    {
        cout << "Masukkan nilai yang akan di-push: ";
        cin >> value;
        push(stack, &top, value);

        cout << "Tekan 1 untuk melanjutkan push, 0 untuk berhenti: ";
        cin >> n;

    } while (n == 1);

    do
    {
        cout << "Tekan 1 untuk melanjutkan pop, 0 untuk berhenti: ";
        cin >> n;

        while (n == 1 && top >= 0)
        {
            pop(stack, &top, &value);
            cout << "Nilai yang di-pop: " << value << endl;

            cout << "Tekan 1 untuk melakukan pop sebuah elemen, 0 untuk berhenti: ";
            cin >> n;
        }

    } while (n == 1);

    return 0;
}

void push(int stack[], int *top, int value)
{
    if (*top < max - 1)
    {
        *top = *top + 1;
        stack[*top] = value;
    }
    else
    {
        cout << "Stack penuh, push nilai tidak dapat dilakukan" << endl;
        exit(0);
    }
}

void pop(int stack[], int *top, int *value)
{
    if (*top >= 0)
    {
        *value = stack[*top];
        *top = *top - 1;
    }
    else
    {
        cout << "Stack kosong, pop tidak dapat dilakukan" << endl;
        exit(0);
    }
}

// #include <iostream>
// #include <stack>
// #include <sstream>

// using namespace std;

// void reverseSentence(const string &sentence)
// {
//     stack<string> words;
//     stringstream ss(sentence);
//     string word;

//     // Memasukkan setiap kata ke dalam stack
//     while (ss >> word)
//     {
//         words.push(word);
//     }

//     // Mengeluarkan kata-kata dari stack dan mencetaknya
//     cout << "Kalimat yang Dibalik: ";
//     while (!words.empty())
//     {
//         cout << words.top() << " ";
//         words.pop();
//     }

//     cout << endl;
// }

// int main()
// {
//     string kalimat_input;

//     cout << "Masukkan kalimat: ";
//     getline(cin, kalimat_input);

//     reverseSentence(kalimat_input);

//     return 0;
// }


// #include <iostream>
// #include <cstring>

// const int MAX_STACK = 10;

// using namespace std;

// struct Stack
// {
//     int top;
//     char data[10][10];
// } tumpuk;

// int main()
// {
//     int pil;
//     tumpuk.top = -1;
//     char dt[10];

//     do
//     {
//         cout << "1. Mengisi tumpukan\n";
//         cout << "2. Mengambil tumpukan\n";
//         cout << "3. Menampilkan data yang ditumpuk\n";
//         cout << "4. Menghapus data pada tumpukan\n";
//         cout << "5. Keluar dari aplikasi\n";
//         cout << "\nPilihan : ";
//         cin >> pil;

//         switch (pil)
//         {
//         case 1:
//             if (tumpuk.top != MAX_STACK - 1)
//             {
//                 cout << "\nData = ";
//                 cin >> dt;
//                 tumpuk.top++;
//                 strcpy(tumpuk.data[tumpuk.top], dt);
//                 cout << endl;
//             }
//             else
//             {
//                 cout << "Sudah penuh!\n";
//             }
//             break;

//         case 2:
//             if (tumpuk.top != -1)
//             {
//                 cout << "Data yang diambil: " << tumpuk.data[tumpuk.top] << endl;
//                 tumpuk.top--;
//             }
//             else
//             {
//                 cout << "Tumpukan kosong!\n";
//             }
//             break;

//         case 3:
//             cout << "Data yang ditumpuk:\n";
//             for (int i = tumpuk.top; i >= 0; i--)
//             {
//                 cout << tumpuk.data[i] << endl;
//             }
//             break;

//         case 4:
//             if (tumpuk.top != -1)
//             {
//                 cout << "Data " << tumpuk.data[tumpuk.top] << " dihapus dari tumpukan.\n";
//                 tumpuk.top--;
//             }
//             else
//             {
//                 cout << "Tumpukan kosong!\n";
//             }
//             break;

//         case 5:
//             cout << "Keluar dari aplikasi.\n";
//             break;

//         default:
//             cout << "Pilihan tidak valid.\n";
//         }
//     } while (pil != 5);

//     return 0;
// }

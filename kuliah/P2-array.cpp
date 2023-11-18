
#include <iostream>
using namespace std;

#define print2(a, n, m) for(int _i = 0 ; _i < n ; _i++){for(int _j = 0 ; _j < m ; _j++){cout << a[_i][_j] << " ";} cout << '\n';}

void inputMatrix(int matrix[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}
int main()
{
    const int N = 4; // Ukuran matriks 4x4
    int A[N][N], B[N][N], result[N][N];
    // Input elemen-elemen matriks A
    cout << "Masukkan elemen-elemen matriks A (" << N << "x" << N << "):\n";
    inputMatrix(A, 4, 4);
    // Input elemen-elemen matriks B
    cout << "Masukkan elemen-elemen matriks B (" << N << "x" << N << "):\n";
    inputMatrix(B, 4, 4);
    // Melakukan perkalian matriks
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Menampilkan hasil perkalian matriks
    cout << "Hasil perkalian matriks A dan B adalah:\n";
    print2(result, 4, 4);

    return 0;
}

// #include <iostream>
// // #include <conio.h>

// using namespace std;
// int main()
// {
//     int y[] = {1, 2, 7, 4, 5};
//     int n, r = 0;
//     for (n = 0; n < 5; n++)
//     {
//         r += y[n];
//     }
//     cout << " " << r;
//     // getch();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[] = {2, 6, 4, 3, 1, 5, 7, 2};
//     int i;

//     for (i = 1; i < 9; i = i + 2)
//     {
//         cout << "Nilai Array Elemen "  << i << " Adalah " << A[i - 1] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int A[3][8] = {
//         {2, 6, 4, 3, 1, 5, 7, 2}, 
//         {1, 8, 4, 7, 9, 5, 3, 2}, 
//         {9, 6, 0, 3, 7, 5, 8, 1}
//     };
//     int i;
//     for (i = 0; i < 8; i++) {
//         cout << A[0][i] << A[1][i] << A[2][i] << endl;
//     }
// }

// #include <iostream>

// using namespace std;

// int A[3][3] = {{2, 6, 4}, {1, 5, 7}, {1, 8, 4}};
// int B[3][3] = {{1, 3, 2}, {0, 2, 9}, {5, 11, 1}};
// int hasil[3][3];

// void summatrik() {
//     for (int i = 0; i< 3; i++)
//     {
//         for (int j = 0; i < 3;i++)
//         {
//             hasil[i][j]=A[i][j]+B[i][j];
//         }
//     }
// }
// int main() {
//     int i;
//     for (i = 0; i< 3; i++)
//     {
//         cout << "[" << A[0][i] << " " << A[1][i] << " " << A[2][i] << "]" << endl;
//     }
//     cout << endl;
//     for (i = 0; i< 3; i++)
//     {
//         cout << "["<< B[0][i]<< " "<< B[1][i]<< " "<< B[2][i] << "]"<< endl;

//     }
//     cout<< endl;
//     summatrik();
//     for (i = 0; i< 3; i++)
//     {
//         cout <<"["<<hasil[0][i]<<" " << hasil[1][i]<< " "<< hasil[2][i]<< "]"<<endl;
//     }
//     return 0;
// }

// sum and avg of array
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;

//     cout << "Masukkan banyaknya angka: ";
//     cin >> n;
//     if (n <= 0)
//     {
//         cout << "Banyaknya angka tidak valid, harus bertipe integer positif." << endl;
//         return 1; 
//     }
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Masukkan elemen ke " << i << " ";
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     double average = static_cast<double>(sum) / n;
//     cout << "Jumlah elemen pada array adlh: " << sum << endl;
//     cout << "Rata-rata elemen pd array adlh: " << average << endl;

//     return 0;
// }
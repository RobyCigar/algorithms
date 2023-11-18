// #include<iostream>

// using namespace std;

// void print(int data[]) {
//     int n = 8;
//     for (int i = 0; i < n; ++i)
//     {
//         cout << data[i];
//         if (i < n - 1)
//             cout << " ";
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int data[] = {3, 4, 1, 5, 7, 9, 2, 7};
//     int temp, n = 8;
//     cout << "Data sblm disort\n";
//     print(data);
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = n - 1; j >= i; j--)
//         {
//             if (data[j] < data[j - 1])
//             {
//                 temp = data[j];
//                 data[j]=data[j-1];

//                 data[j-1]=temp;
//             }
//         }
//     }
//     cout << "\nData sesudah disort\n";
//     print(data);

//     return 0;
// }

// selection sort
// #include <iostream>
// using namespace std;
// int main()
// {
//     int temp, length = 8;
//     int arr[] = {3, 4, 1, 5, 7, 9, 2, 7};

//     cout << "Data belum terrut\n";
//     for (int i = 0; i<length; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     int loc_min;
//     for (int i = 0; i < length; i++) {
//         loc_min = i;
//         for (int j = i; j < length; j++)
//         {
//             if (arr[j] < arr[loc_min])
//             {
//                 loc_min = j;
//             }
//         }
//         temp = arr[i];
//         arr[i] = arr[loc_min];
//         arr[loc_min] = temp;
//     }
//     cout << "\n\nData telah terurut\n";
//     for (int i = 0; i < length; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void bubbleSortDescending(int arr[], int length)
// {
//     for (int i = 0; i < length - 1; i++)
//     {
//         for (int j = 0; j < length - i - 1; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void selectionSortDescending(int arr[], int length)
// {
//     for (int i = 0; i < length - 1; i++)
//     {
//         int loc_max = i;
//         for (int j = i + 1; j < length; j++)
//         {
//             if (arr[j] > arr[loc_max])
//             {
//                 loc_max = j;
//             }
//         }
//         // Tukar elemen maksimum dengan elemen ke-i
//         int temp = arr[i];
//         arr[i] = arr[loc_max];
//         arr[loc_max] = temp;
//     }
// }

// void insertionSortDescending(int arr[], int length)
// {
//     for (int i = 1; i < length; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] < key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main()
// {
//     int length = 8;
//     int arr[] = {3, 4, 1, 5, 7, 9, 2, 7};

//     // Bubble Sort dalam urutan menurun
//     bubbleSortDescending(arr, length);
//     cout << "Bubble Sort:\n";
//     for (int i = 0; i < length; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Reset array ke keadaan awal
//     int arr2[] = {3, 4, 1, 5, 7, 9, 2, 7};

//     // Selection Sort dalam urutan menurun
//     selectionSortDescending(arr2, length);
//     cout << "Selection Sort:\n";
//     for (int i = 0; i < length; i++)
//     {
//         cout << arr2[i] << " ";
//     }
//     cout << endl;

//     // Reset array ke keadaan awal
//     int arr3[] = {3, 4, 1, 5, 7, 9, 2, 7};

//     // Insertion Sort dalam urutan menurun
//     insertionSortDescending(arr3, length);
//     cout << "Insertion Sort:\n";
//     for (int i = 0; i < length; i++)
//     {
//         cout << arr3[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// int main()
// {
//     std::string input;

//     std::cout << "Masukkan kata atau kalimat: ";
//     std::getline(std::cin, input);

//     // Menghapus spasi dari string
//     input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());

//     // Mengurutkan huruf dalam string
//     std::sort(input.begin(), input.end());

//     std::cout << "Hasil pengurutan huruf: " << input << std::endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

void displayNames(const std::vector<std::string> &names)
{
    std::cout << "Data sebelum pengurutan:\n";
    for (const std::string &name : names)
    {
        std::cout << name << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<std::string> names;
    int numNames;

    std::cout << "Masukkan jumlah teman sekelas: ";
    std::cin >> numNames;
    std::cin.ignore(); // Clear newline character from the buffer

    for (int i = 0; i < numNames; ++i)
    {
        std::string name;
        std::cout << "Masukkan nama teman ke-" << i + 1 << ": ";
        std::getline(std::cin, name);
        names.push_back(name);
    }

    displayNames(names);

    int choice;
    std::cout << "\nPilihan pengurutan:\n";
    std::cout << "1. Urutkan secara ascending\n";
    std::cout << "2. Urutkan secara descending\n";
    std::cout << "Pilih opsi: ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::sort(names.begin(), names.end());
    }
    else if (choice == 2)
    {
        std::sort(names.begin(), names.end(), std::greater<std::string>());
    }
    else
    {
        std::cout << "Pilihan tidak valid.\n";
        return 1;
    }

    std::cout << "\nData setelah pengurutan:\n";
    for (const std::string &name : names)
    {
        std::cout << name << " ";
    }
    std::cout << "\n";

    return 0;
}

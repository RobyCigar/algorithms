#include <iostream>

int main()
{
    int arraySize;

    std::cout << "Masukkan jumlah elemen pada array: ";
    std::cin >> arraySize;

    int *myArray = new int[arraySize];
    int sum = 0;

    std::cout << "Harap masukkan " << arraySize << " angka:" << std::endl;
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << "Masukkan angka ke-" << i + 1 << ": ";
        std::cin >> myArray[i];
        sum += myArray[i];
    }

    std::cout << "Array yg kamu masukkan: ";
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << myArray[i];
        if (i < arraySize - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    std::cout << "Penjumlahannya adlh: " << sum << std::endl;

    delete[] myArray;

    return 0;
}

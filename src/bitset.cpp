#include <iostream>
#include <bitset>

int main() {
    int num = 10; // the integer to convert
    std::bitset<8> binary(num); // convert to binary using 8 bits
    std::cout << binary << std::endl; // print the binary representation
    return 0;
}
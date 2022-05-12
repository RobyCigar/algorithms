//
// https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus
//
#include<iostream>
#include<vector>
#include<limits>

using namespace std;

int main() {
    int x;
    char str[80];
    cout << "Enter a number and a string:\n";
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear buffer before taking new
    cin.getline(str,80); //take a string
    cout << "You have entered:\n";
    cout << x << endl;
    cout << str << endl;
    return 0;
}

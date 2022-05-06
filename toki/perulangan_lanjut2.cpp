#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int a;
    cin >> a;

    for(int i=0; i < a; i++) {
        for(int j=a-i; j > 1; j--) {
            cout << " ";
        }
        
        for(int j=0; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
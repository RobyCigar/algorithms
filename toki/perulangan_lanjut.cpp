#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int a;

    cin >> a;
    for (int i = 0; i <= a; i++) {
        if(i % 10 == 0) {
            continue;
        } else if(i == 42) {
            cout << "ERROR" << endl;
            break;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
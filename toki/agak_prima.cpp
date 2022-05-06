#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int a, n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        bool prime = true;
        int agak = 0;
        for(int j = 2; j*j <= a; j++) {
            if(a % j == 0) {
                prime = false;
                break;
            }
        }

        for(int j = 2; j*j <= a; j++) {
            if(a % j == 0) {
                agak += 1;
                break;
            }

            if(agak > 1) {
                break;
            }
        }

        if((agak == 1) || (prime == true)) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }

    }
    return 0;
}
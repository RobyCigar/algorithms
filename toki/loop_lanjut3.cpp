#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int num = 0;
    int input;

    cin >> input;

    for(int i=0; i < input; i++) {
        for(int j=0; j <= i; j++) {
            if(num == 10) {
                num = 0;
            }
            cout << num;
            num++;
        }
        cout << endl;
    }
    
    return 0;
}
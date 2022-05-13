#include <bits/stdc++.h>

using namespace std;

class Car {
    public:
        string *name;
        Car(string name) {
            this->name = &name;
            cout << *this->name << endl;
        }
};

int main() {
    Car tesla("Model S");
    cout << *tesla.name << endl;
    return 0;
}

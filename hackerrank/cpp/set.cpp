#include <bits/stdc++.h>
using namespace std;


int main() {
    set<int>s;
    int count;
    cin >> count;
    for(int i = 0; i < count; i++) {
        int type;
        int num;
        cin >> type >> num;
        if(type == 1) {
            s.insert(num);
            continue;
        } else if(type == 2) {
            s.erase(num);
            continue;
        } else if(type == 3) {
            if(s.find(num) == s.end()) {
                cout << "No" << endl;                
            } else {
                cout << "Yes" << endl;                
            }
            continue;
        }
    }
    
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    bool res = false;
    
    while(x1 < 10000 || x2 < 10000) {
        if(x1 == x2) {
            res = true;
            break;
        }

        x1 += v1; x2 += v2;
    }

    if(res) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    kangaroo(0, 3, 4, 2);
    return 0;
}

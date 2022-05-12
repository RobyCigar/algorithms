#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    bool res = false;
    
    while(x1 <= 2e9) {
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
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2) << endl;
    return 0;
}

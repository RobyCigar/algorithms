#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, x, res = 0;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++) { 
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        int tmp = 0;
        for(int j = i; j < n; j++) {
            tmp += a[j];
            if(tmp == x) {
                res++;
            }
        }
    }

    cout << res << endl;

    return 0;
}
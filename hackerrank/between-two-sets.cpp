/*

O(n log(n)) solution.
1. find the LCM of all the integers of array A.
2. find the GCD of all the integers of array B.
3. Count the number of multiples of LCM that evenly divides the GCD.

*/

#include <bits/stdc++.h>

using namespace std;

template <class T> T lcm(T a, T b){
    return (a)/__gcd<T>(a, b)*(b);
}

int gcd_list(int* input, int size) {
    int res = input[0];
    for(int i = 1; i < size; i++) {
        res = __gcd<int>(res, input[i]);
    }

    return res;
}

int lcm_list(int* input, int size) {
    int res = input[0];
    for(int i = 1; i < size; i++) {
        res = lcm(res, input[i]);
    }

    return res;
}

int main() {
    int m, n;
    int lcm_a, gcd_b;

    cin >> m >> n;
    int A[m], B[n];

    for(int i = 0; i < m; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];

    int f = lcm_list(&A[0], m);
    int l = gcd_list(&B[0], n);
    int count = 0;

    for(int i = f, j = 2; i <= l; i=f*j, j++) {
        if(l%i == 0) count++;
    }
    
    cout << count << endl;
    return 0;
}













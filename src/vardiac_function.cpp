#include <bits/stdc++.h>

using namespace std;

int sum() { return 0; }

template<typename... Args>
int sum(int a, Args... args) { 
    return a + sum(args...); 
}

int main() { 
    cout << sum(5, 7, 2, 2) + sum(3, 4); /* prints "23" */ 
    return 0;    
}
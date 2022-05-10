#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {

    tuple<int, int, char> t;
    t = {3, 4, 'f'};
    cout << get<0>(t) << '\n';
    cout << get<1>(t) << '\n';
    cout << get<2>(t) << '\n';
    
    
    return 0;
}
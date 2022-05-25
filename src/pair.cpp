#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    pair<int, int> one;
    pair<int, int> two;

    one.first = 100;
    one.second = 'G';

    two = make_pair(200, 'A');
    cout << "one: " << one.first << " and " << one.second << endl;
    cout << "two: " << two.first << " and " << two.second << endl;
    
    return 0;
}
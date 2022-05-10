#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    
    deque<vector<pair<int, int>>> d;
    d = {{{3, 4}, {5, 6}}, {{1, 2}, {3, 4}}};
    for (auto i: d) {
        for (auto j: i)
            cout << j.first << ' ' << j.second << '\n';
        cout << "-\n";
    }
    return 0;
}
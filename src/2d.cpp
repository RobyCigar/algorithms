#include <bits/stdc++.h>
#define print2(a, n, m) for(int _i = 0 ; _i < n ; _i++){for(int _j = 0 ; _j < m ; _j++){cout << a[_i][_j].second << " ";} cout << '\n';}
// kalo array biasa, tinggal hapus .first
#define print3(a, n, m, o) { for (int i = 0; i < n; ++i) { for (int j = 0; j < m; ++j) { for (int k = 0; k < o; ++k) { cout << "[" << i << "][" << j << "][" << k << "] = " << a[i][j][k].first << endl; }}}}

using namespace std;



int main(int argc, char const *argv[]) {
    vector<pair<int, int>> kotak[100];
    vector<pair<int, int>> kotak2[100][100];

    kotak[0].push_back(make_pair(10, 20));
    kotak[1].push_back(make_pair(10, 21));
    kotak[2].push_back(make_pair(10, 22));

    kotak2[0][0].push_back(make_pair(10, 22));
    kotak2[0][1].push_back(make_pair(10, 23));
    kotak2[0][2].push_back(make_pair(10, 24));

    cout << kotak2[0][0][0].first << " " << kotak2[0][0][0].second << endl << endl;
    print3(kotak2, 1, 3, 1);

    print2(kotak, 3, 3);
    return 0;
}
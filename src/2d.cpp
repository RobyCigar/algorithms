#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<pair<string, int>> board;
    board.push_back(make_pair("baju", 100000));
    board.push_back(make_pair("martabak", 3000));
    for(int i = 0; i < 2; i++) {
        if(board[i].first == "martabak") {
            cout << "harga martabak: " << board[i].second << endl;
        }
        // cout << board[i].first << " and " << board[i].second << endl;
    }
    return 0;
}
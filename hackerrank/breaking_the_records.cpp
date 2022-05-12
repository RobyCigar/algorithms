#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, top = 0, low = 2e9, win_count = 0, lose_count = 0;
    int score[1000];

    cin >> n;
    for(int i = 0; i < n; i++) cin >> score[i];

    top = score[0];
    low = score[0];
    for(int i = 0; i < n; i++) {
        if(score[i] > top) {
            top = score[i];
            win_count++;
            continue;
        } else if(score[i] < low) {
            low = score[i];
            lose_count++;
            continue;
        }
    }

    cout << win_count << " " << lose_count << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 10000;
const int LOG = 14;

vector<int> children[MAX_N];
int up[MAX_N][LOG]; 

void dfs(int a) {
    for(int b: children[a]) {
        up[b][0] = a;
        for(int j = 1; j < LOG; j++) {
            up[b][j] = up[up[b][j-1]][j-1];
        }
        dfs(b);
    }
}

int get_lca(int a, int b) {
    return -1;
}

int main() {
    int n;
    cin >> n;
    for(int v = 0; v < n; ++v) {
        int cnt;
        cin >> cnt;
        for(int i = 0; i < cnt; i++) {
            int c;
            cin >> c;
            children[v].push_back(c);
        }
    }

    dfs(0);
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << get_lca(a, b) << "\n";
    }
}

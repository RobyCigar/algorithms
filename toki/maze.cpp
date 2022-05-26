#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define MAX 105

using namespace std;

vector<pair<int, int>> kotak[MAX][MAX];
bool vis[MAX][MAX];
int dist[MAX][MAX];

void shortest(int u, int v) {
    queue<pair<int, int>> q;

    q.push(mp(u, v));
    vis[u][v] = true;
    dist[u][v] = 1;
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for(pair<int, int> it: kotak[x][y]) {
            int i = it.first;
            int j = it.second;
            if(!vis[i][j]) {
                vis[i][j] = true;
                dist[i][j] = dist[x][y] + 1;
                q.push(mp(i,j));
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    int n, m, nearest=0;
    queue<pair<int, int>> out;
    cin >> n >> m;
    // n rows
    for(int i = 0; i < n; i++) {
        // m columns
        for(int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            // jika terdapat tembok, maka jalan tidak dpt dilalui
            if(temp == -1) 
                vis[i][j] = true;
            // jika tembok atas || tembok bawah || tembok kiri || tembok kanan
            if(i == 0 || i == n-1 || j == 0 || j == m-1)
                // jika ada jalan keluar pada sisi tembok
                if(temp == 0)
                    out.push(mp(i, j));
            // jika tidak batas dinding atas 
            if(i != 0)
                // masukkan jalan ke kotak
                kotak[i][j].pb(mp(i-1, j));  
            // jika tidak batas dinding bawah
            if(i != n-1)
                kotak[i][j].pb(mp(i+1, j));
            // jika tidak batas dinding kiri
            if(j != 0)
                kotak[i][j].pb(mp(i, j-1));
            // jika tidak batas dinding kanan
            if(j != m-1)
                kotak[i][j].pb(mp(i, j+1));

        }

    }

    int a, b;
    cin >> a >> b;
    shortest(a-1, b-1);

    nearest = dist[out.front().first][out.front().second];
    out.pop();
    while(!out.empty()) {
        int i = out.front().first;
        int j = out.front().second;
        if(nearest == 0)
            nearest = dist[i][j];
        else if(dist[i][j] < nearest && dist[i][j] != 0)
            nearest = dist[i][j];
        out.pop();
    }

    cout << nearest << endl;

    return 0;
}
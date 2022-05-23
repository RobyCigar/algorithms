#include <bits/stdc++.h>

#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define MAX 105

using namespace std;

vector<pii> kotak[MAX][MAX];
bool vis[MAX][MAX];
int dist[MAX][MAX];

void shortest(int u, int v) {
    queue<pii> q;

    q.push(mp(u, v));
    vis[u][v] = true;
    dist[u][v] = 1;
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for(pii it: kotak[x][y]) {
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
    queue<pii> out;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            if(temp == -1) 
                vis[i][j] = true;
            if(i == 0 || i == n-1 || j == 0 || j == m-1)
                if(temp == 0)
                    out.push(mp(i, j));
            if(i != 0)
                kotak[i][j].pb(mp(i-1, j));
            if(i != n-1)
                kotak[i][j].pb(mp(i+1, j));
            if(j != 0)
                kotak[i][j].pb(mp(i, j-1));
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
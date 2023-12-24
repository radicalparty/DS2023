#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
int dist[26][26][2], arr[26][26];
int n, t;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
queue<tuple<int, int, int>> q[4001];
int main(){
    cin.tie(0); ios_base::sync_with_stdio(false);
    cin >> n >> t;
    fill_n(dist[0][0], 26 * 26 * 2, 1000000);
    fill_n(arr[0], 625, 1);
    REP(i, 1, n)
        REP(j, 1, n)
            cin >> arr[i][j];
    dist[n][1][0] = 0; dist[n][1][1] = 0;
    q[0].push({n, 1, 0});
    q[0].push({n, 1, 1});
    REP(i, 0, 4000){
        while (!q[i].empty()){
            auto [x, y, p] = q[i].front(); q[i].pop();
            REP(j, 0, 3){
                int nx = x + dx[j], ny = y + dy[j], w = 1;
                if (arr[nx][ny])    continue;
                if (j % 2 != p) w += t;
                int d = dist[x][y][p] + w;
                if (dist[nx][ny][j % 2] > d){
                    dist[nx][ny][j % 2] = d;
                    q[d].push({nx, ny, j % 2});
                }
            }
        }
    }

    int ans = min(dist[1][n][0], dist[1][n][1]);
    if (ans != 1000000) cout << ans;
    else    cout << -1;
}
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
char grid[MAXN][MAXN], tmp[MAXN][MAXN];
int vec[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
int n, m, d;

bool in_range(int x, int y) { return (x >= 0 && y >= 0) && (x < n && y < m); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    bool isTrue = false;
    cin >> t;

    while (t--) {
        cin >> n >> m >> d;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];
        while (d--) {
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    tmp[i][j] = grid[i][j];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    for (int k = 0; k < 4; k++) {
                        int dx = i + vec[k][0], dy = j + vec[k][1];
                        if (!in_range(dx, dy))
                            continue;
                        if (grid[i][j] == 'S' && grid[dx][dy] == 'R')
                            tmp[i][j] = 'R';
                        if (grid[i][j] == 'P' && grid[dx][dy] == 'S')
                            tmp[i][j] = 'S';
                        if (grid[i][j] == 'R' && grid[dx][dy] == 'P')
                            tmp[i][j] = 'P';
                    }
                }
            }

            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    grid[i][j] = tmp[i][j];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << grid[i][j];
            cout << "\n";
        }
        if (t)
            cout << "\n";
    }

    return 0;
}

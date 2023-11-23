#include <bits/stdc++.h>
using namespace std;
const int MAXN = 105;
int n, m;
int dir[8][2] = {
    {1,  0 }, // 下
    {0,  1 }, //  右
    {-1, 0 }, //  上
    {0,  -1}, //  左
    {-1, 1 }, //  右上
    {1,  1 }, //  右下
    {1,  -1}, //  左下
    {-1, -1}  //  左上
};
bool in_range(int x, int y) { return (x >= 0 && y >= 0) && (x < n && y < m); }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase = 1;
    bool key = false;
    while (cin >> n >> m && (n && m)) {
        if (key)
            cout << '\n';
        key = true;
        char c;
        int arr[MAXN][MAXN] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> c;
                if (c == '*') {
                    arr[i][j] = -1;
                    for (int k = 0; k < 8; k++) {
                        int x = i + dir[k][0], y = j + dir[k][1];
                        if (in_range(x, y) && arr[x][y] != -1) {
                            arr[x][y]++;
                        }
                    }
                }
            }
        }
        cout << "Field #" << testcase++ << ":\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == -1)
                    cout << '*';
                else
                    cout << arr[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}

#include <bits/stdc++.h>
#define pii pair<int, int>
#define x first
#define y second
using namespace std;
map<int, char> mp;
int cmd[55][55];
int vec[4][2] = {
    {0,  1 },
    {1,  0 },
    {0,  -1},
    {-1, 0 }
};
pii lim, cur;
bool in_range(int a, int b) { return (a >= 0 && b >= 0) && (a <= lim.x && b <= lim.y); }
void init() {
    mp[0] = 'N';
    mp[1] = 'E';
    mp[2] = 'S';
    mp[3] = 'W';
    for (int i = 0; i < 55; i++)
        for (int j = 0; j < 55; j++)
            cmd[i][j] = -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char pos;
    init();
    cin >> lim.x >> lim.y;
    while (cin >> cur.x >> cur.y >> pos) {
        string s;
        cin >> s;
        int dir;  // N: 0, E: 1, S: 2, W:3
        if (pos == 'N')
            dir = 0;
        else if (pos == 'E')
            dir = 1;
        else if (pos == 'S')
            dir = 2;
        else if (pos == 'W')
            dir = 3;
        bool out_range = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R')
                dir = (dir + 1) % 4;
            else if (s[i] == 'L')
                dir = (dir + 3) % 4;
            else if (s[i] == 'F') {
                // cout << "<<<<<< " << s[i] << '\n';
                cur.x += vec[dir][0];
                cur.y += vec[dir][1];
                if (!in_range(cur.x, cur.y)) {
                    cur.x -= vec[dir][0];
                    cur.y -= vec[dir][1];
                    if (cmd[cur.x][cur.y] != -1)
                        continue;
                    else {
                        out_range = true;
                        cmd[cur.x][cur.y] = dir;
                        break;
                    }
                }
                // cout << ">>>>>> " << cur.x << ' ' << cur.y << ' ' << mp[dir] << '\n';
            }
        }
        if (out_range) {
            cout << cur.x << ' ' << cur.y << ' ' << mp[dir] << " LOST\n";
            cmd[cur.x][cur.y] = dir;
        }
        else
            cout << cur.x << ' ' << cur.y << ' ' << mp[dir] << '\n';
    }

    return 0;
}

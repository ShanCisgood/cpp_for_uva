#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
void init() {
    mp["north"] = 1;
    mp["west"] = 2;
    mp["east"] = 3;
    mp["south"] = 4;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;  // 0上 1北 2西 3東 4南 5下
    init();
    string s;
    while (cin >> n && n) {
        int arr[6] = {1, 2, 3, 4, 5, 6};
        while (n--) {
            cin >> s;
            if (mp[s] == 1) {
                int tmp = arr[1];
                arr[1] = arr[0];
                arr[0] = arr[4];
                arr[4] = arr[5];
                arr[5] = tmp;
            }
            else if (mp[s] == 2) {
                int tmp = arr[2];
                arr[2] = arr[0];
                arr[0] = arr[3];
                arr[3] = arr[5];
                arr[5] = tmp;
            }
            else if (mp[s] == 3) {
                int tmp = arr[3];
                arr[3] = arr[0];
                arr[0] = arr[2];
                arr[2] = arr[5];
                arr[5] = tmp;
            }
            else if (mp[s] == 4) {
                int tmp = arr[4];
                arr[4] = arr[0];
                arr[0] = arr[1];
                arr[1] = arr[5];
                arr[5] = tmp;
            }
        }
        cout << arr[0] << '\n';
    }

    return 0;
}

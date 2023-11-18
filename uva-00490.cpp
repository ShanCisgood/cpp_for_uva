#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str[105];
    int num = 0, mx = 0;

    while (getline(cin, str[num])) {
        if (str[num].length() > mx)
            mx = str[num].length();
        num++;
    }

    for (int i = 0; i < mx; i++) {
        for (int j = num - 1; j >= 0; j--) {
            if (str[j].length() <= i)
                cout << " ";
            else
                cout << str[j][i];
        }
        cout << "\n";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    while (getline(cin, a)) {
        getline(cin, b);
        if (a == " " || b == " ")  // 這題騙人，明明就有空格的測資，還說什麼只有小寫字母
            cout << "\n";
        int acnt[26] = {0}, bcnt[26] = {0};
        for (int i = 0; i < a.length(); i++)
            acnt[a[i] - 'a']++;
        for (int i = 0; i < b.length(); i++)
            bcnt[b[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            for (int j = 0; j < min(acnt[i], bcnt[i]); j++)
                cout << (char)(i + 'a');
        cout << '\n';
    }

    return 0;
}

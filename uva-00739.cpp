#include <bits/stdc++.h>
using namespace std;
map<char, char> mp;
void init() {
    // 0    A, E, I, O, U, Y, W, H
    // 1	B, P, F, V
    // 2	C, S, K, G, J, Q, X, Z
    // 3	D, T
    // 4	L
    // 5	M, N
    // 6	R
    mp['A'] = mp['E'] = mp['I'] = mp['O'] = mp['U'] = mp['Y'] = mp['W'] = mp['H'] = '0';
    mp['B'] = mp['P'] = mp['F'] = mp['V'] = '1';
    mp['C'] = mp['S'] = mp['K'] = mp['G'] = mp['J'] = mp['Q'] = mp['X'] = mp['Z'] = '2';
    mp['D'] = mp['T'] = '3';
    mp['L'] = '4';
    mp['M'] = mp['N'] = '5';
    mp['R'] = '6';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string name;
    init();
    cout << "         NAME                     SOUNDEX CODE\n";
    while (cin >> name) {
        string code;
        code.push_back(name[0]);
        for (int i = 1; i < name.length() && code.length() < 4; i++) {
            if (mp[name[i]] != '0' && mp[name[i]] != mp[name[i - 1]])
                code.push_back(mp[name[i]]);
        }
        while (code.length() < 4)
            code.push_back('0');

        cout << "         " << name;
        for (int i = 10 + name.length(); i < 35; i++)
            cout << ' ';
        cout << code << "\n";
    }
    cout << "                   END OF OUTPUT\n";
    return 0;
}

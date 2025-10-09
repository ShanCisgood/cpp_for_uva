#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<string, int> idx;
int cnt = 0;

void init() {
    for (char i = 'a'; i <= 'z'; i++) {
        string tmp;
        tmp.push_back(i);
        idx[tmp] = ++cnt;
    }
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = i + 1; j <= 'z'; j++) {
            string tmp;
            tmp.push_back(i);
            tmp.push_back(j);
            idx[tmp] = ++cnt;
        }
    }
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = i + 1; j <= 'z'; j++) {
            for (char k = j + 1; k <= 'z'; k++) {
                string tmp;
                tmp.push_back(i);
                tmp.push_back(j);
                tmp.push_back(k);
                idx[tmp] = ++cnt;
            }
        }
    }
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = i + 1; j <= 'z'; j++) {
            for (char k = j + 1; k <= 'z'; k++) {
                for (char l = k + 1; l <= 'z'; l++) {
                    string tmp;
                    tmp.push_back(i);
                    tmp.push_back(j);
                    tmp.push_back(k);
                    tmp.push_back(l);
                    idx[tmp] = ++cnt;
                }
            }
        }
    }
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = i + 1; j <= 'z'; j++) {
            for (char k = j + 1; k <= 'z'; k++) {
                for (char l = k + 1; l <= 'z'; l++) {
                    for (char m = l + 1; m <= 'z'; m++) {
                        string tmp;
                        tmp.push_back(i);
                        tmp.push_back(j);
                        tmp.push_back(k);
                        tmp.push_back(l);
                        tmp.push_back(m);
                        idx[tmp] = ++cnt;
                    }
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();
    string s;
    while (cin >> s) {
        cout << idx[s] << '\n';
    }

    return 0;
}

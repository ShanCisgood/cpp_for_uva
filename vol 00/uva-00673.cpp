#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    getline(cin, s);
    while (n--) {
        getline(cin, s);
        stack<char> stk;
        bool yes = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(')
                stk.push('(');
            else if (s[i] == '[')
                stk.push('[');
            else if (s[i] == ')') {
                if (stk.empty() || stk.top() != '(')
                    yes = false;
                else
                    stk.pop();
            }
            else if (s[i] == ']') {
                if (stk.empty() || stk.top() != '[')
                    yes = false;
                else
                    stk.pop();
            }
        }

        if (yes && stk.empty())
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}

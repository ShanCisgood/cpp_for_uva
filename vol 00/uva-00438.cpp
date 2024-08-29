#include <bits/stdc++.h>
using namespace std;

const double pi = 2 * acos(0);

struct Pt {
    double x, y;
};

double area(Pt a, Pt b) { return abs(a.x * b.y - a.y * b.x); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    Pt pts[3];
    cout << fixed << setprecision(2);
    while (cin >> pts[0].x >> pts[0].y >> pts[1].x >> pts[1].y >> pts[2].x >> pts[2].y) {
        Pt a = {pts[1].x - pts[0].x, pts[1].y - pts[0].y};
        Pt b = {pts[2].x - pts[0].x, pts[2].y - pts[0].y};
        Pt c = {pts[2].x - pts[1].x, pts[2].y - pts[1].y};
        double sint = area(a, b) / sqrt(a.x * a.x + a.y * a.y) / sqrt(b.x * b.x + b.y * b.y);
        double r = sqrt(c.x * c.x + c.y * c.y) / sint;
        cout << pi * r << '\n';
    }

    return 0;
}

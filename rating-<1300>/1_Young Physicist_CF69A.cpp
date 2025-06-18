// https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int sumX = 0, sumY = 0, sumZ = 0;

    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    cout << ((sumX == 0 && sumY == 0 && sumZ == 0) ? "YES" : "NO");
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}

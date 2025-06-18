// https://codeforces.com/problemset/problem/69/A
// Tip: check if sum of all vectors is zero. 
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // above these 2 lines are added for the faster input 
    int n;
    cin >> n;
    solve(n);
    return 0;
}

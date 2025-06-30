// https://codeforces.com/problemset/problem/34/A
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 
    vector<int> a(n); 

    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    int min = abs(a[0] - a[ n -1]); 
    int x = 0, y = n -1;

    for (int i = 1; i < n; i++) {
        int d = abs(a[i] - a[i - 1]); 

        if (d <= min) {
            min = d; 
            x = i; 
            y = i - 1; 
        }
    }

    cout << y + 1 << " " << x + 1; 
   return 0;
}

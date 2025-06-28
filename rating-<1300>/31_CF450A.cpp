// https://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m; 
    
    int last = 0; 
    int lastTurns = 0; 

    for (int i = 0; i < n; i++) {
        int a; 
        cin >> a; 
        int turns = (a + m - 1) / m; 

        if (turns >= lastTurns) {
            lastTurns = turns;
            last = i; 
        }
    }

    if (lastTurns == 0) {
        cout << n << "\n"; 
    }
    else {
        cout << last  + 1<< "\n"; 
    }

    return 0;
}

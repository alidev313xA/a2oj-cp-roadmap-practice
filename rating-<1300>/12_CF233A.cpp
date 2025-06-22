// https://codeforces.com/problemset/problem/233/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 

    if (n > 1 && n % 2 == 0) {
        vector<int> res; 

        for (int i = 1; i <= n; i++ ) {
            res.push_back(i); 
        }

        
        for (int i = 0; i <= n - 2; i++) {
            swap(res[i], res[i+1]);
            i++;  
        }
        
        for (int n: res) {
            cout << n << " "; 
        }
        
    }
    else {
        cout << -1 << "\n"; 
    }
}

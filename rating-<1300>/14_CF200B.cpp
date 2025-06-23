https://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n; 
    int sum = 0; 
    int a; 
    
    for (int i = 0; i < n; i++) {
        cin >> a; 
        sum += a; 
    }
    //cout << sum << endl;
    cout << fixed << setprecision(12) << ((double) sum / (double) (n * 100)) * 100 << endl; 
}

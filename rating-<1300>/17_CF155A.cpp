// https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; cin >> n;  
    vector<int> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    int mn = a[0]; 
    int mx = a[0]; 
    int count = 0; 

    for (int n: a) {
        if (n < mn) {
            count += 1; 
            mn = n; 
        }
        else if (n > mx) {
            mx = n; 
            count += 1; 
        }
    }

    cout << count << " "; 
}

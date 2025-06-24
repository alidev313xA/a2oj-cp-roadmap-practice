// https://codeforces.com/problemset/problem/248/A
#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; cin >> n; 
    int lZeros = 0, lOnes = 0, rZeros = 0, rOnes = 0; 

    for (int i = 0; i < n; i++) {
        int l, r; 
        cin >> l >> r; 
      
        if (l == 0) lZeros += 1; 
        else lOnes += 1; 

        if (r == 0) rZeros += 1; 
        else rOnes += 1;
    }

    cout << min(lOnes, lZeros) + min(rOnes, rZeros) << " "; 
}

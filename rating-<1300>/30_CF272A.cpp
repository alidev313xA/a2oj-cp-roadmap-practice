// https://codeforces.com/problemset/problem/272/A
# include <bits/stdc++.h>
using namespace std; 

int main () {
    int n; cin >> n; 
    int sum = 0; 
 
    for (int i = 0; i < n; i++) {
        int a; 
        cin >> a; 
        sum += a;  
    }
    int ways = 0; 

    for (int i = 1; i <= 5; i++) {
        if ( (sum + i) % (n + 1) != 1)  {
            ways += 1; 
        } 
    }

    cout << ways << " "; 
}

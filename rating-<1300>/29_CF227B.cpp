// https://codeforces.com/problemset/problem/227/B
# include <bits/stdc++.h> 
using namespace std; 

int main () {
    int n; cin >> n; 
    vector<int> a(n); 
    map<int, int> pos; 
    
    for (int i = 0; i < n; i++) {
        int a; cin >> a; 
        pos[a] = i; 
    }

    long long l = 0,r = 0; 
    int  m; cin >> m; 

    for (int i = 0; i < m; i++) {
        int a; cin >> a; 
        l += pos[a] + 1;
        r += n - pos[a];  
    }

    cout << l << " "<< r; 
}

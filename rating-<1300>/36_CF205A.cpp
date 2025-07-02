// https://codeforces.com/problemset/problem/205/A
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n; 
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    map<ll, ll> m; 
    for (auto x: v) {
        m[x]++; 
    }

    ll min = m.begin()->first;

    if(m[min] > 1) {
        cout << "Still Rozdil"; 
    }
    else {
        for (ll i = 0; i < n; i++) {
            if (v[i] == min) {
                cout << i + 1<< "\n"; 
                break; 
            }
        }
    }
    return 0;
}

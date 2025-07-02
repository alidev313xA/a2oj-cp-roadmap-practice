// https://codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k; 
    cin >> n >> k; 

    ll half = (n + 1) / 2; 

    if ( k > half ){
        cout << 2 * (k - half); 
    }
    else {
        cout << (2 * k) - 1; 
    }
}

// ll n, k; cin >> n >> k; 
// vector<ll> odd; 
// vector<ll> even; 
// ll x = 1; 

// for (ll i = 1; i <= n; i++) {
//     if (i % 2) odd.push_back(i); 
//     else even.push_back(i); 
// }

// sort(all(odd)); 
// sort(all(even)); 

// for (auto x: even) odd.push_back(x); 

// cout << odd[k-1]; 
// return 0;

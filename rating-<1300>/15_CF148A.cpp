// https://codeforces.com/contest/148/problem/A
// Solution 1: O(d) 
#include <bits/stdc++.h>
using namespace std; 

int main() {
    int l, k, m, n, d; 
    cin >> k >> l >> m >> n >> d; 
    int count = 0; 

    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 ||i % m == 0 ||i % n == 0 ) count += 1; 
    }

    cout << count << " "; 
}


// Solution 2: O(1) based on constraints (Mathematical Solution) 
#include <bits/stdc++.h>
using namespace std; 

int gcd(int a, int b) {
    if (b == 0) return a; 
    return gcd(b, a % b); 
}

long long lcm(int a, int b) {
    return a / gcd(a, b) * b * 1ll;  
}

int main() {
    int l, k, m, n, d; 
    cin >> k >> l >> m >> n >> d; 

    long long total = d / k + d / l + d / m + d / n;
    total -= d / lcm(k, l) + d / lcm(k, m) + d / lcm(k, n) + d / lcm(l, m) + d / lcm(l, n) + d / lcm(m, n); 
    total += d / lcm(k, lcm(l, m)) + d / lcm(k, lcm(l, n)) + d / lcm(k, lcm(m, n)) + d / lcm(l, lcm(m, n)); 
    total -= d / lcm(k, lcm(l, lcm(m, n)));
    
    cout << total << " "; 

}

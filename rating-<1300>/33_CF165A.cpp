// https://codeforces.com/problemset/problem/165/A
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 
    vector<pair<int, int>> v;
    set<pair<int, int>> st; 

    for (int i = 0; i < n; i++) {
        int a, b; 
        cin >> a >> b; 
        v.push_back({a, b}); 
        st.insert({a, b}); 
    }


    int count = 0; 

    for (auto p: v) {
        int i = p.first; 
        int j = p.second; 

        int t, r, b, l;
        t = r = b = l = 0; 
        
        // right point 
        while (j <= 1000) {
            j++;
            if (st.count({i, j})) {
                r = 1; 
                break; 
            } 
        }
        
        i = p.first; 
        j = p.second;

        // top point 
        while (i >= -1000) {
            i--;
            if (st.count({i, j})) {
                t = 1; 
                break; 
            }  
        }
        i = p.first; 
        j = p.second;

        // left  
        while (j >= -1000) {
            j--;
            if (st.count({i, j})) {
                l = 1; 
                break; 
            }  
        }
        i = p.first; 
        j = p.second;

        // bottom 
        while (i <= 1000) {
            i++;
            if (st.count({i, j})) {
                b = 1; 
                break; 
            } 
        }

        if (t && r && b && l) count += 1; 
    }

    cout << count << "\n"; 
}

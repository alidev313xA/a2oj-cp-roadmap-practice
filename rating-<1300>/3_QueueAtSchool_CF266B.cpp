// https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    string arr;

    cin >> n >> t;
    cin >> arr;

    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == 'B' && arr[i + 1] == 'G')
            {
                swap(arr[i], arr[i + 1]);
                i++; 
            }
        }
    }

    cout << arr;
}

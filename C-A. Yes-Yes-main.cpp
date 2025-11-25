//
//  main.cpp
//  C-A. Yes-Yes?.cpp
//
//  Created by Apple on 2/16/23.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve( )
{
    int n, x;
        cin >> n >> x;
        vector<int> a(2 * n);
    for(auto &i:a) cin>>i;
        sort(a.begin(), a.end());
    
        bool ok = true;
        for (int i = 0; i < n; ++i)
            if (a[n + i] - a[i] < x) ok = false;
        cout << (ok ? "YES" : "NO") << "\n";
    }


int32_t main( )
{
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}


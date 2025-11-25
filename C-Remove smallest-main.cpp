//
//  main.cpp
//  C-Remove Smallest.cpp
//
//  Created by Apple on 11/28/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve( )
{
    int n;
    cin>>n;
    vector<int > v(n);
    for(auto &i:v) cin>>i;
    int vv1=v[n-1];
    int vv2=v[n-2];
    sort(v.begin(),v.end());
    bool ok = true;
            for (int i = 1; i < n; ++i) {
                ok &= (v[i] - v[i - 1] <= 1);
            }
            if (ok) cout << "YES" << endl;
            else cout << "NO" << endl;
    
    
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

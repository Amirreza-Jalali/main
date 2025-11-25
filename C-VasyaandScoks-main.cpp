//
//  main.cpp
//  C-VasyaandSocks.cpp
//
//  Created by Apple on 4/1/23.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,m;
    cin>>n>>m;
    int ans = 0;
        ans = n + n/(m - 1);
        if (n%(m - 1) == 0)
            ans -= 1;
    cout<<ans<<endl;
}
int32_t main( )
{
    solve();
    return 0;
}

//
//  main.cpp
//  C-System of Equations.cpp
//
//  Created by Apple on 3/7/23.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,m,ans(0);
    cin>>n>>m;
    for(int a=0;a*a<=n && a<=m ;a++)
    {
        int b=n-a*a;
        if(a+(b*b)==m)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}

int32_t main( )
{
    solve();
    return 0;
}

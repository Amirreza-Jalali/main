//
//  main.cpp
//  C-sum.cpp
//
//  Created by Apple on 11/3/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve( )
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c)
    {
        cout<<"YES\n";
        return;
    }
    else if(a+c==b)
    {
        cout<<"YES\n";
        return;
    }
    else if (b+c==a)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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


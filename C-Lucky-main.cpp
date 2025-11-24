//
//  main.cpp
//  C-Lucky.cpp
//
//  Created by Apple on 11/8/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    string v;
    cin>>v;
    int sum1=0,sum2=0;
    sum1=v[0]+v[1]+v[2];
    sum2=v[3]+v[4]+v[5];
    
    if (sum1==sum2)
    {
        cout<<"YES\n";
        return;
    }
    else{
        cout<<"NO\n";
    }
    
}
int32_t main( )
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

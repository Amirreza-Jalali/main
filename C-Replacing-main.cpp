//
//  main.cpp
//  C-Replacing Elements.cpp
//
//  Created by Apple on 1/2/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve( )
{
    int n,d;
    cin>>n>>d;
    vector<int>  v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(), v.end());
    if(v.back( ) <=d || v[0]+v[1] <= d)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve( );
    }
    return 0;
}
 

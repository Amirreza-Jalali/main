//
//  main.cpp
//  C-Medium Number.cpp
//
//  Created by Apple on 12/18/22.
//

s
//#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve( )
{
    vector<int> v(3);
    for(auto &i:v) cin>>i;
    sort(v.begin(), v.end());
    cout<<v[1]<<endl;
}
int32_t main( )
{
    int t;
    cin>>t;
    while(t--)
    {
        solve( );
    }
    return 0;
}

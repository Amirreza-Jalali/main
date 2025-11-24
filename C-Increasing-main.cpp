//
//  main.cpp
//  C-Increasing.cpp
//
//  Created by Apple on 12/7/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    int count=0;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i]==v[j])
            {
                count++;
            }
        }
    }
    if(count==n)
    {
        cout<<"YES\n";
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

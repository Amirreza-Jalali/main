//
//  main.cpp
//  C-Next Round.cpp
//
//  Created by Apple on 11/16/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,k;
    cin>>n>>k;
    int count(0);
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=v[k-1] && v[i]>0)
        {
            count++;
        }
        
    }
    cout<<count;
    
}
int32_t main( )
{
    solve();
    return 0;
}

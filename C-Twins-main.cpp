//
//  main.cpp
//  C-Twins.cpp
//
//  Created by Apple on 11/16/22.
//
#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,sumtotal=0,count=0;
    cin>>n;
    vector<int > v(n);
    for(auto &i:v) cin>>i;
    int sumnow=0;
    
    sort(v.rbegin(), v.rend());
    for(int i=0;i<n;i++)
    {
        sumtotal+=v[i];
    }
    
    int i=0;
    for(;sumnow<=sumtotal;)
    {
        count++;
        sumnow+=v[i];
        sumtotal-=v[i];
        i++;
    }
    cout<<count<<"\n";
    
}
int32_t main( )
{
    solve();
    return 0;
}


//
//  main.cpp
//  aa.cpp
//
//  Created by Apple on 10/25/22.
//
#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,k,count=0;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(5-v[i]>=k)
        {
            count++;
        }
    }
   
    cout<<count/3;
    
}

int32_t main()
{
    solve();
    return 0;
}

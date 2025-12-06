//
//  main.cpp
//  C-Fair Playoff.cpp
//
//  Created by Apple on 11/3/22.
//

//#include"/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    vector<int>v(4);
    for(auto &i:v) cin>>i;
    int bigger1,bigger2,litte1,little2;
    if(v[0]>=v[1])
    {
        bigger1=v[0];
        litte1=v[1];
    }
    else{
        bigger1=v[1];
        litte1=v[0];
    }
    if(v[2]>=v[3])
    {
        bigger2=v[2];
        little2=v[3];
    }
    else{
        bigger2=v[3];
        little2=v[2];
    }
    if(bigger1<=little2)
    {
        cout<<"NO\n";
        return;
    }
    if(bigger2<=litte1)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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

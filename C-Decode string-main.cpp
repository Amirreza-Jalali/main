//
//  main.cpp
//  C-Decode String.cpp
//
//  Created by Apple on 1/5/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    string v;
    char alpha0[10]={'a','b','c','d','e','f', 'g', 'h', 'i' ,'j'};
    char alpha1[10]={'k','l' ,'m','n','o','p','q', 'r','s','t'};
    char alpha2[6]={'u','v', 'w', 'x','y','z'};
    cin>>v;
    for(int i=v.length()-1;i>=0;i--)
    {
        if(v[i]==0)
        {
           if(v[i-2]=='1')
           {
               string digit1= v;
               int p= stoi(digit1);
               cout<<alpha1[p];
           }
        }
    }
}
int32_t main()
{
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}

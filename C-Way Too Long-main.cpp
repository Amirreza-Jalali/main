//
//  main.cpp
//  C-Way Too Long Words.cpp
//
//  Created by Apple on 11/16/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    string s;
    cin>>s;
    if(s.length()<11)
    {
        cout<<s<<"\n";
    }
    else {
        int sum1=s.length();
        int sum=s.length()-2;
        cout<<s[0]<<sum<<s[sum1-1]<<"\n";
    }
    
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

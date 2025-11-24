//
//  main.cpp
//  C-Gennady and a Card Game.cpp
//
//  Created by Apple on 11/9/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    string s,s1,s2,s3,s4,s5;
    cin>>s>>s1>>s2>>s3>>s4>>s5;
    if(s[0]==s1[0] ||s[1]==s1[1])
    {
        cout<<"YES\n";
        return;
    }
    if(s[0]==s2[0] ||s[1]==s2[1])
    {
        cout<<"YES\n";
        return;
    }
    if(s[0]==s3[0] ||s[1]==s3[1])
    {
        cout<<"YES\n";
        return;
    }
    if(s[0]==s4[0] ||s[1]==s4[1])
    {
        cout<<"YES\n";
        return;
    }
    if(s[0]==s5[0] ||s[1]==s5[1])
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    
}
int32_t main()
{
    solve();
    return 0;
}

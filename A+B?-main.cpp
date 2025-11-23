//
//  main.cpp
//  A+B?.cpp
//
//  Created by Apple on 4/24/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    string s,s1;
    cin>>s;
    int n1,n2;
    n1 = stoi(s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+')
        {
            s1=s[i+1];
        }
    }
    n2 =stoi(s1);
    cout<<n1+n2<<"\n";
    
    
    
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

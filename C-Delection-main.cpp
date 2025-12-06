//
//  main.cpp
//  C-Deletions of Two Adjacent Letters.cpp
//
//  Created by Apple on 12/18/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve( )
{
    string s;
    cin>>s;
    string c;
    cin>>c;
    for(int i=0;i<s.length();i++)
    {
        if(i%2 ==0)
        {
            if(s[i]==c[0])
            {
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
    
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

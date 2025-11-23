//
//  main.cpp
//  C-Colourblindness.cpp
//
//  Created by Apple on 11/8/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,count=0;
    cin>>n;
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
        {
            count++;
        }
        else if(s1[i]=='G' && s2[i]=='B')
        {
            count++;
        }
        else if ( s1[i]=='B' && s2[i]=='G')
        {
            count++;
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
    while (t--) {
        solve();
    }
    return 0;
}

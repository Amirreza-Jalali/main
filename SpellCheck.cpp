//
//  main.cpp
//  SpellCheck.cpp
//
//  Created by Apple on 11/1/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve( )
{
    string s;
    int n,countt=0,counti=0,countm=0,countu=0,countr=0;
    cin>>n;
    cin>>s;
    if(n!=5)
    {
        cout<<"NO\n";
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='T' && countt==0)
        {
            countt++;
        }
        else if(s[i]=='i'&& counti==0)
        {
            counti++;
        }
        else if(s[i]=='m'&& countm==0)
        {
            countm++;
        }
        else if(s[i]=='u'&& countu==0)
        {
            countu++;
        }
        else if(s[i]=='r'&& countr==0)
        {
            countr++;
        }
    }
    int sum=countt+counti+countm+countu+countr;
    if(sum==5)
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
    while(t--)
    {
        solve();
    }
    return 0;
}

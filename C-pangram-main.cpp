//
//  main.cpp
//  aa.cpp
//
//  Created by Apple on 10/27/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    int upper=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        s[i]=towlower(s[i]);
    }
    sort(s.begin(), s.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            upper++;
        }
    }
    if(upper==26)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
}

int32_t main()
{
    solve();
    
    return 0;
}

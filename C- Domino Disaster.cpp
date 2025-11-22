//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U') s[i]='D';
        else if(s[i]=='D')  s[i]='U';
    }
    cout<<s<<"\n";
}


int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin>>n;
    string s,s1;
    cin>>s;
    s1=s;
    sort(s1.begin(),s1.end());
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s1[i])
        {
            count++;
        }
    }
    cout<<count<<"\n";
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
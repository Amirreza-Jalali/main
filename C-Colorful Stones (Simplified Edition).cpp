//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    string t,s;
    int count=0;
    cin>>s;
    cin>>t;
    int n=t.length();
    for(int i=0;i<n;i++)
    {
        if(t[i] == s[count])
        count++;
    }
    count++;
    cout<<count;

}

int32_t main()
{
    solve();
    return 0;
}
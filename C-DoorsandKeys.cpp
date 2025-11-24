//#include"/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string v;
    cin>>v;
    int count=0;
    for(int i=0;i<6;i++)
    {
        if(v[i]<=122 && v[i]>=97)
        {
            for(int j=i+1;j<6;j++)
            {
                if(v[i] == v[j]+32)
                { 
                     count++;
                }
            }
        } 
    }
    if(count < 3)  
    {
        cout<<"NO\n";
        
    }
    else if(count>2)
    cout<<"YES\n";
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
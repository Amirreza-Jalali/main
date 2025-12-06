≠≠//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int  ph, hh, n;
    cin>>ph>>hh>>n;
    int mx = 0;
    int  a[n],b[n];
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        int count = b[i]/ph;
        if(b[i]%ph)
        {
            count++;
        }
        hh -= count*a[i];
        mx = max(mx, a[i]);
    }
    if(hh+mx > 0)
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
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    return 0;
}

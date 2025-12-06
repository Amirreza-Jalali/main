#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
        int n;
        int a;
        cin>>n;
        vector<int> f(n+1) , id(n+1);
        for(int i=0 ; i<n ; i++){
            cin>>a;
            id[a]=i+1;
            f[a]++;
        }
        int index=-1;
        for(int i=0 ; i<=n ; i++){
            if(f[i]==1){
                index=id[i];
                break;
            }
        }

        cout<<index<<"\n";
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







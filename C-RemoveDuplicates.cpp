#include"/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(v[i]==v[j] && i!=j)
            {
                v[i]=0;
                flag=1;
            }
        }
        if(flag==1)
             {
                 count++;
             }
       
    }
    cout<<n-count<<"\n";
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0)
        {
            cout<<v[i]<<" ";
        }
    }

}
int32_t main()
{
    solve();
    return 0;
}
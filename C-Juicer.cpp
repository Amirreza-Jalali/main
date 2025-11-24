//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,b,d;
    cin>>n>>b>>d;
    vector <int> v(n);
    for(auto &i:v)  cin>> i;
    int count=0,sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=b)
        {
            sum+=v[i];
            if(sum>d)
            {
                sum=0;
                count++;
            }
        }
    }
    cout<<count;

}
int32_t main()
{
    solve();
    return 0;
}

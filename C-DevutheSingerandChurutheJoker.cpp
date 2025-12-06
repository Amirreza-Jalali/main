#include"/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,d;
    cin>>n>>d;
    int s=n-1;
    int sum=0;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    vector<int> v1;
    v1.push_back(5);
    for(int i=0;i<n;i++)
    {
        v1.push_back(v[i]);
    }

    v1.push_back(n);
    while(!v.empty())
    {
        sum+=v.back();
        v.pop_back();
    }
    int b=(n-1)*10;

if(sum+b>d) cout<<"-1";
else {
	int count=(d-sum)/5;
	cout<<count<<"\n";
}

}
int32_t main()
{
    solve();
    return 0;
}
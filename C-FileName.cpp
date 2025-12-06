#include"/Users/apple/Desktop/computer/bits.cpp"

//#include<bits/stdc++.h.>
#define int long long 
using namespace std;
void solve()
{
    int n,count=0,countx=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]=='x')
        {
            countx++;
        }
        if(s[i]==s[i+1]&&s[i]==s[i+2]&&s[i]=='x')
        {
            count++;
        }
    }
    int sum=0;
    if(countx==n)
    {
        sum=n-2;
    }
    else{
        sum=count;
    }
    cout<<sum<<"\n";

}
int32_t main()
{
    
        solve();
    
    return 0;
}
//#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int  long long 
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counto=0;
    int countc=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' && s[i+1]==')')
        {
            i++;
            continue;
        }
        if(s[i]=='(')
        {
            counto++;
        }
        else if(s[i]==')')
        {
            countc++;
        }
        if(counto < countc)
        {
            sum++;
            countc--;
        }
    }
     cout<<sum<<"\n"; 
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
#include"/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    for(int i=n;i<n+1000;i++)
    {
        int sum=0;
        int adad=i;
        while (adad!=0)
        {
            int remain=adad%10;
            adad=adad/10;
            sum+=remain;
        }
        if(sum%4 == 0)
        {
            cout<<i;
            break;
        }      
    }

}
int32_t main()
{
    solve();
    return 0;
}


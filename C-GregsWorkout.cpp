//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int sum1=0,sum2=0,sum3=0;
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        if(i%3==0)
        {
            sum1+=a;
        }
        else if(i%3==1)
        {
            sum2+=a;
        }
        else{
            sum3+=a;
        }
    }
    
        if(sum1>sum2 && sum1>sum3)
        {
            cout<<"chest\n";
        }
         else if(sum2>sum1 && sum2>sum3)
         {
             cout<<"biceps\n";
         }
         else if(sum3>sum1 && sum3>sum2){
             cout<<"back\n";
         }
}
int32_t main()
{
    solve();
    return 0;
}
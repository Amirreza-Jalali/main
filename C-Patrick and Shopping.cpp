#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int d1,d2,d3;
    int sum1=0,sum2=0,sum3=0,sum4=0;
    int s=0;

    while(cin>>d1>>d2>>d3)
    {
      sum1=d1+d2+d3;
      sum2=2*d1+2*d2;
      sum3=2*d1+2*d3;
      sum4=2*d2+2*d3;
      s=min(sum1,min(sum2,min(sum3,sum4)));

      cout<<s<<"\n";
      return ;

    }
    
}


int32_t main()
{
        solve();

    return 0;
}
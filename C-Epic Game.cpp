#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int x,int n)
{
   int s;
    while((s = x%n) != 0)
    {
        x=n;
        n=s;
    }
    return n;
}

int32_t main()
{
    int x, y, n;
    cin>>x>>y>>n;
    while (1)
    {
        n -=gcd(x,n);
        if (n == 0)
        {
            cout<<0<<"\n";
            break;
        }
        n -= gcd(y,n);
        if (n == 0)
        {
            cout<<1<<"\n";
            break;
        }
    }
    return 0;
}
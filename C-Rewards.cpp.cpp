#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    cin>>n;
    int sum1=0,sum2=0,sum3=0,sum4=0;
    sum1=a1+a2+a3;
    sum2=b1+b2+b3;
    sum3 = sum1 / 5;
    sum1 -= sum3 * 5;
    sum4 = sum2 / 10;
    sum2 -= sum4 * 10;
    if (sum1 > 0) {
        sum3++;
    }
    if (sum2 > 0) {
        sum4++;
    }
    n -= (sum3 + sum4);
    if (n < 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}

int32_t main()
{
    solve();
    return  0;
}




 
//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int  long long
using namespace std;

void solve()
{
    int n,k,f,t,maxjoy,joy;
    cin >>n>> k>>f>>t;
    if (t>k)
    {
        maxjoy = f - (t - k);
    }
    else{
        maxjoy = f;
    }
    while (--n){
        cin >> f >> t;
        if (t > k){
            joy = f - (t - k);
        }
        else {
            joy = f;
        }
        if (joy > maxjoy){
            maxjoy = joy;
        }
    }
    cout << maxjoy << endl;
}

int32_t main()
{
    solve();
    return 0;
}
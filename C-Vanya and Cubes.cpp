//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,i=0,c=0,l=0;
    cin >> n;
    while (n > 0) {
        i++;
        c = l + i;
        l = c;
        n -= c;
        if (n < 0) {
            i--;
        }
    }
    cout << i;
}

int32_t main()
{
    solve();
    return 0;
}
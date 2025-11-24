//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
  cin >> n;
  string s;
  cin >> s;
  string s2;
  int skip = 0;
  for (int i = 0; i < n; i += skip) {
    s2 += s[i];
    skip++;
  }
  cout << s2 << endl;
}


int32_t main()
{
    solve();
    return 0;
}
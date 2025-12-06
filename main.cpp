//
//  main.cpp
//  review
//
//  Created by Apple on 11/12/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"

#define int long long
using namespace std;

 void solve()
{
     int n;
     cin>>n;
     vector<int> a(n);
     for(auto &i:a) cin>>i;
     for( int i=0;i<n;i++)
     {
         cout<<a[i]<<"\n";
     }
}
         
int32_t main()
{
    solve();
}


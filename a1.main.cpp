//
//  main.cpp
//  a1.cpp
//
//  Created by Apple on 5/13/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
#define int long long
using namespace std;
void solve( )
{
    
    array<int, 5> array={1,2,5,4,4};
    int n=5;
    int x;
    cin>>x;
    auto k = equal_range(array.begin(),array.end(),x);
    cout<<k.second-k.first;
}
int32_t main( ){
    solve();
}

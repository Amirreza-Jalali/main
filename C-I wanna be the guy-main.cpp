//
//  main.cpp
//  C-I Wanna Be the Guy.cpp
//
//  Created by Apple on 4/17/23.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,m1,m2;
    cin>>n>>m1;
    vector<int> v1;
    for(int i=0;i<m1;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cin>>m2;
    int m3=m1+m2;
    for(int i=m1;i<m3;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int c=0;
    sort(v1.begin(), v1.end());
    for(int i = 0 ; i < m1+m2 ; i++){
        if(v1[i] != v1[i+1]){
            c++;
        }
    }
    if(n == (c)){
            cout << "I become the guy." <<endl;
        }else{
            cout << "Oh, my keyboard!" << endl;
        }
}
int32_t main( )
{
    solve();
    return 0;
}

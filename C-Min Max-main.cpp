//
//  main.cpp
//  C-Min Max Swap.cpp
//
//  Created by Apple on 12/20/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( ){
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(auto & i:v1) cin>>i;
    for(auto &i :v2) cin>>i;
    
    for(int i=0;i<n;i++)
    {
        if(v1[i]<v2[i])
        {
            int temp=v1[i];
            v1[i]=v2[i];
            v2[i]=temp;
        }
    }
    int max1=*max_element(v1.begin(), v1.end());
    
    int max2=*max_element(v2.begin(), v2.end());
    
    cout<<max1*max2<<endl;
}

int32_t main( )
{
    int t;
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}

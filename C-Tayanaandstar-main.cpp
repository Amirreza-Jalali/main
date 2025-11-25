//
//  main.cpp
//  aa.cpp
//
//  Created by Apple on 5/29/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve( )
{
    int n,count=0;
    cin>>n;
    vector <int> v (n);
    
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            count++;
        }
        
    }
    
    int m=count;
    
    vector<int> v1(m);
    
    int j=0;
    
    
    cout<<count<<'\n';
    for(int i=1;i<n;i++)
    {
        if(v[i]==1)
        {
            v1[j]=v[i-1];
            j++;
        }
    }
    
   
    v1[m-1]=v[n-1];
    for(int i=0;i<count;i++)
    {
        cout<<v1[i]<<" ";
    }
    
}

int32_t main( )
{
    solve( );
    
    return 0;
    
}

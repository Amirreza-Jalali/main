//
//  main.cpp
//  C-Cypher.cpp
//
//  Created by Apple on 1/3/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    vector<int > newpass(n);
    for(auto &i:newpass) cin>>i;
    for(int i=0;i<n;i++)
    {
        int b;cin>>b;
        if(b==0){continue;}
        string sniff;
        cin>>sniff;
        for(int j=0;j<b;j++)
        {
            if(sniff[j]=='U'){newpass[i]--;}
            else if(sniff[j]=='D'){newpass[i]++;}
            if(newpass[i]<0){newpass[i]+=10;}
            else if(newpass[i]>9){newpass[i]-=10;}
            
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<newpass[i]<<" ";
    }
    
    
}
int32_t main( )
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}

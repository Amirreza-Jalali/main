//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0 ; i<n ; i++)
    {
     int b=(v[n-1]-v[i]);
     sum+=b;
    }
    cout<<sum<<"\n";
    
    return 0;
}
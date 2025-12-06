//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int s;
    int sum=0;
    int b=0;
    vector<int> v;
    for(int i=0 ; i<3 ; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        
    }
    sort(v.begin(),v.end());
       sum+=(v[1]-v[0])+(v[2]-v[1]);
cout<<sum;

    return 0;
}
    
//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;
string str;
int call(string sub){
    int cnt=0,maxi=0;

    for(int i=0;i<str.size()-1;i++){
        if(str[i]==sub[0] && str[i+1]==sub[1])
            cnt++;
    }
    return cnt;
}


void solve()
{
    int maxi=0,n;
    string gram,sub;

    cin>>n;
    cin>>str;

    for(int i=0;i<str.size()-1;i++){
        sub= str.substr(i,2); //substr(index, length)***
         int temp= call(sub);

        if(temp>maxi){
            maxi= temp;
            gram= sub;
        }
    }
    cout<<gram<<"\n";   
}

int32_t main()
{
        solve();

    return 0;
}
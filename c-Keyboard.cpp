//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    string s1;
    cin>>s1;
    string s3;
    int len=s1.length();
    for(int i=0;i<len;i++)
    {
        int index=s.find(s1[i]);
    if(c=='R')
    {
        s3+=s[index-1];
    }
    else{
        s3+=s[index+1];
     }
    }
    cout<<s3;
}
int main()
{
solve();
    return 0;
}
//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){

   int a,b,c,d;
   cin>>a>>b>>c>>d;
   string s;
   cin>>s;
   int sum=0;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='1') sum+=a;
       else if(s[i]=='2') sum+=b;
       else if(s[i]=='3') sum+=c;
       else{sum+=d;}
       
   }
   cout<<sum;
 }
int32_t main()
{
    solve();
    return 0;

}
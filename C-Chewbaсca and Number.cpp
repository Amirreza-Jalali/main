#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;

void solve()
{
   string s,s2;
   cin>>s;
   s2=s;
int len=s.length();
for(int i=0;i<len;i++){
if(i)
   {
    if(9-(s[i]-'0')>=0 &&(9-(s[i]-'0'))<s[i]-'0')
    {
	
	s[i]=(9-(s[i]-'0'))+'0';
}
}
else {
	if(9-(s[i]-'0')>0 &&(9-(s[i]-'0'))<s[i]-'0'){
	
	s[i]=(9-(s[i]-'0'))+'0';

    }
    }
  }
if(s<s2)
cout<<s<<"\n";
else {
	cout<<s2<<"\n";
}

}
int main(){
    solve();
    return 0;
} 
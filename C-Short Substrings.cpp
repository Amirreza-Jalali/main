//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a,b;
    while(t--)
    {
        int count=0;
        a.clear();
        b.clear();
        cin>>b;
        int n=b.length();
        for(int i=0;i<b.length()-1;i++)
        {
           if(b[i]!=b[i+1])
           {
               a.push_back(b[i]);
           }
           else if(b[i]==b[i+1])
           {
               a.push_back(b[i+1]);
               i++;
           }
           else if(b[1]==b[2]&&b[2]==b[3])
           {
               count=1;
           }
        }
        a.push_back(b[n-1]);
        cout<<a<<"\n";
        
    }
    return 0;
}

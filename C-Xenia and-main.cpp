//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int c=1;
    long long move=0;
    for(int i=0;i<m;i++)
    {
        int s;
        cin>>s;
        if(s-c>=0)
        {
            move+=s-c;
            c=s;
        }
        else{
            move+=s-c+n;
            c=s;
        }
    }
    cout<<move<<"\n";
    return 0;
}

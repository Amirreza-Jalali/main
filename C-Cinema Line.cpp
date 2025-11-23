//#include "/Users/apple/Desktop/computer/bits.cpp"

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,count(1);
    int c1=0,c2=0;
    cin>>n;
    vector<int> v(n);

    for(auto &i:v) cin>>i;

    int sum=0;
    sum+=v[0];

      for(int i=0; i<n; i++)
        {
            if(v[i]==25)
                c1++;
            else if(v[i]==50)
            {
                if(c1<1)
                {
                    count=0;
                    break;
                }
                else
                {
                    c1=c1-1;
                    c2=c2+1;
                }
            }
            else if(v[i]==100)
            {
                if(c1>=1&&c2>=1)
                {
                    c1=c1-1;
                    c2=c2-1;
                }
                else if(c1>=3)
                {
                    c1=c1-3;
                }
                else
                {
                    count=0;
                    break;
                }
            }
        }
 if(count==1)
     cout<<"YES\n";
 else
     cout<<"NO\n";

}
int32_t main()
{
    solve();
    return 0;
}
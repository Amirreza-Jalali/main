//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int n;
    cin>>n;
    int count=0;
    vector<int> v;
    vector<int>v1;
    if(n>0)
    {
        cout<<n;
        return 0;
    }
    else
    {
        while(n!=0)
        {
            int remain=n%10;
            n=n/10;
            v.push_back(remain);
            count++;
        }
    }
   
           if(v[1]>v[0]){
               int j=0;
                for(int i=count-1;i>=0;i--){
                       if(v[i]!=v[1])
                      v1.push_back(v[j]);
                      j++;
                }
                v1.push_back(v[0]);
           }
           else{
               int j=0;
                for(int i=count-1;i>=0;i--){
                       if(v[i]!=v[0])
                      v1.push_back(v[j]);
                      j++;
                }
           }
     for(int i=count-1;i>=0;i--){
         cout<<v[i];
     }
      
    return 0;
}*/


using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n>=0) {
        cout << n << endl;
    }
    else  {
        int a = n/10;
        int b = n/100*10+n%10;
        cout << max(a, b) << endl;
    }
    return 0;
}
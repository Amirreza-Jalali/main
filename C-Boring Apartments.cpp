#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;

 void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int n;
        cin>>n;
        int adad=n;
        int remain=adad%10;
        sum=((remain-1)*10);
        int count=0;
        while(adad!=0){
            remain=adad%10;
            adad/=10;
            count++;
        }
        if(count==1){
            sum+=1;
        }
        else if(count==2){
            sum+=3;
        }
        else if(count==3){
            sum+=6;
        }
        else{
            sum+=10;
        }
        cout<<sum<<"\n";
    

    }
}
int main(){
    solve();
    return 0;

}
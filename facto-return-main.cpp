#include <iostream>

using namespace std;
int fact(int n)
{
   if(n==0)
    return (1);
   return (n*fact(n-1));
}
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    cout<<"    *************    "<<"\n";
    cout<<"fact:"<<" "<<fact(n);

    return 0;
}

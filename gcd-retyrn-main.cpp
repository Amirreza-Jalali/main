#include <iostream>

using namespace std;

int gcd(int x,int y)
{
    if(y==0) return (x);
    else
        return (gcd(y,x%y));
}



int main()
{
    int x,y;
    cout<<"x:";
    cin>>x;
    cout<<"y:";
    cin>>y;
    cout<<"       **************       "<<"\n";
    cout<<"gcd ("<<x<<","<<y<<") = "<<gcd(x,y);

    return 0;
}

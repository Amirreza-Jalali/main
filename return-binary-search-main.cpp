#include <iostream>

using namespace std;

int recBinarysearch(int a[],int low,int hight,int x)
{
    int mid;
    if(low>hight) return(-1);
    mid=(low+hight)/2;
    if(x==mid) return (mid);
    else if(a[mid]<mid)
        return (recBinarysearch(a,low,mid-1,x));
    else
        return (recBinarysearch(a,mid+1,hight,x));
}
void read (int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a:";
        cin>>a[i];
    }
}




int main()
{

    int n,x;
    cout<<"n:";
    cin>>n;
    cout<<"x:";
    cin>>x;
    int low=0,hight=n-1;
    int a[n];
    read(a,n);
    cout<<recBinarysearch(a,low,hight,x);


    return 0;
}

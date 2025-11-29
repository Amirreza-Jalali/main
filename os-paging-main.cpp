//
//  main.cpp
//  os_paging.cpp
//
//  Created by Apple on 1/27/23.
//AmirReza Jalali

#include "/users/apple/Desktop/computer/bits.cpp"
#define int long long
using namespace std;
void paging()
{
    //main memory is 1kb
    cout<<"number of process : ";
    int n,sum(0);
    cin>>n;
    vector<int> v(n);
    vector<int> memory(10);//1KB
    
    for(auto &i:v) {cout<<"p : ";cin>>i;}
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    if(sum > 10){
        cout<<"------------------------------\n";
        cout<<"memory does not have enough space";
        cout<<"\n------------------------------\n";
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0 ;j<v[i];j++)
        {
            memory[m]=i+1;
            m++;
        }
    }
    cout<<"1 : show main memory\n";
    cout<<"2 : erase process\n";
    cout<<"3 : new process\n";
    cout<<"4 : show physiacl address of process\n";
    cout<<"5 : exit\n";
    cout<<"choice between 1 to 5\n";
    while(1){
        int s;
        cout<<"please enter : ";
        cin>>s;
        switch (s) {
                
            case 1:
                cout<<"\n";
                cout<<"***show memory***\n";
                cout<<"------------------------------\n";
                for(int i=0;i<10;i++)
                {
                    cout<<memory[i]<<"  ";
                }
                cout<<"\n------------------------------\n";
                break;
                
            case 2:
                cout<<"\n";
                cout<<"enter which process : ";//only index;
                int p;cin>>p;
                for(int i=0;i<10;i++)
                {
                    if(memory[i]==p)
                    {
                        memory[i]=NULL;
                    }
                }
                cout<<"------------------------------\n";
                cout<<" --> process "<<p<<" is erase\n";
                cout<<"------------------------------\n";
                break;
            case 5:
                exit(0);
               
            case 4:
                
                cout<<"which process : ";
                int p1;cin>>p1;
                cout<<"------------------------------\n";
                for(int i=0;i<10;i++)
                {
                    if(memory[i]==p1)
                    {
                        cout<<i+1<<" ";
                    }
                }
                cout<<"\n------------------------------\n";
                break;
                
            case 3:
                cout<<"\n";
                cout<<"enter the volume of the process : ";
                int newprocess;
                cin>>newprocess;
                n++;
                int ne=n,count(0);
                
                for(int i=0;i<10;i++)
                {
                    if(memory[i]==0){
                        count++;
                    }
                }
                
                if(count>=newprocess)
                {
                    
                    for(int i=0;i<10;i++)
                    {
                        if(memory[i]==0)
                        {
                            memory[i]=ne;
                            newprocess--;
                        }
                        if(newprocess==0)
                        {
                            break;
                        }
                        
                    }
                    cout<<"------------------------------\n";
                    cout<<" --> process added\n";
                    cout<<"------------------------------\n";
                }
                
                else{
                    cout<<"------------------------------\n";
                    cout<<" --> memory does not have enough space\n";
                    cout<<"------------------------------\n";
                }
                
                break;
                
            
        }
    }
}
int32_t main( )
{
    paging();
    
    return 0;
}

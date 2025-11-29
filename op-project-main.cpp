
#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++..h>
//#define int long long
using namespace std;

vector<long long> main_memory(10); // total size of memory

void paging_os ( )
{
    int num,count=0,sum=0;
    cout<<"number of process --> ";
    cin>>num;
    vector<int> process(num);
    int h=1;
    for(auto &i: process) // capacity of process
    {
        cout<<"process "<<h<<" is : ";
        cin>>i;
        h++;
    }
    for(int i=0;i<num;i++)
    {
        sum+=process[i];
    }
    if(sum>10)
    {
        cout<<"\n --> memory is FULL\n";
        cout<<" --> first exit process\n";
        
    }
    
    for(int i=0;i<num;i++)
    {
        for(int j=0 ;j<process[i];j++)
        {
            main_memory[count]=i+1;// show form one to ten
            count++;
        }
    }
    //        --> switch case
    
    cout<<"\n1 : display memory\n";
    cout<<"2 : exit process\n";
    cout<<"3 : add process\n";
    cout<<"4 : dispaly physiacl address of process\n";
    cout<<"5 : Reset main memory\n";
    cout<<"6 : END\n";
    
    while (true) {
        int s;
        cout<<" --> choice between 1to6 : ";
        cin>>s;
        cout<<endl;
        switch (s) {
                
            case 1:
                cout<<"\n";
                cout<<"--> dispaly memory\n";
                
                for(int i=0;i<10;i++)
                {
                    cout<<main_memory[i]<<"  ";
                }
                cout<<endl;
                
                break;
                
            case 2:
                cout<<"\n";
                cout<<"which process you want to exit from memory : ";//only index;
                int p;
                cin>>p;
                for(int i=0;i<10;i++)
                {
                    if(main_memory[i]==p)
                    {
                        main_memory[i]=NULL;
                    }
                }
                
                cout<<" --> cpu burst fin \n";
                cout<<endl;
                break;
                
            case 4:
                
                cout<<"which process : ";
                int p1;
                cin>>p1;
                
                for(int i=0;i<10;i++)
                {
                    if(main_memory[i]==p1)
                    {
                        cout<<i+1<<" ";
                    }
                }
                cout<<endl;
                break;
                
                
            case 6:
                exit(0);
                
            case 5:
                for(int i=0;i<10;i++)
                {
                    main_memory[i]=NULL;
                }
                cout<<"--> Reset main memory is fin\n";
                cout<<endl;
                break;
                
            case 3:
                cout<<"\n";
                cout<<"value of new process : ";
                int newprocess;
                cin>>newprocess;
                num++;
                int ne=num,count1(0);
                
                for(int i=0;i<10;i++)
                {
                    if(main_memory[i]==0){
                        count1++;
                    }
                }
                
                if(count1>=newprocess)
                {
                    
                    for(int i=0;i<10;i++)
                    {
                        if(main_memory[i]==0)
                        {
                            main_memory[i]=ne;
                            newprocess--;
                        }
                        if(newprocess==0)
                        {
                            break;
                        }
                        
                    }
                    
                    cout<<" --> cpu burst fin \n";
                    cout<<endl;
                }
                
                else{
                    cout<<" --> memory is FULL \n";
                    cout<<" --> please wait or exit process\n";
                    cout<<endl;
                }
                break;
        }
    }
}

int main( )
{
    paging_os();

    return 0;
}


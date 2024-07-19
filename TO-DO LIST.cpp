/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <unordered_map>
#include <string>
#define lit long long 
#define RAP(i,n) for(int i=0;i<n;i++)
using namespace std;
unordered_map<string,int> list;
void add(string a)
{
    
    list[a]=0;
    
}
void display()
{
    for(auto x: list)
    {
        cout<<x.first<<" ";
        if(x.second==1)
        {
            cout<<"Task completed"<<endl;
        }
        else 
        {
            cout<<"Task not completed"<<endl;
        }
    }
}
void mark_task(string g)
{
    if(list.find(g)!=list.end())
    list[g]=1;
    else
    {
        cout<<"This task does not exist in the list"<<endl;
    }
}
void remove_task(string g)
{
    if(list.find(g)!=list.end())
    list.erase(g);
    else
    {
        cout<<"This task does not exist in the list"<<endl;
    }
}
int main()
{
    int i=1;
    string g;
    int ch;
    while(i!=-1)
    {
        cout<<"If you want to enter any task enter 1 "<<endl<<"If you want to view the list enter 2 "<<endl<<"If you want to mark a task completed enter 3 "<<endl<<"If you want to delete a task enter 4:"<<endl;
        
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter the task name: ";
            std::getline(std::cin >> std::ws, g);
          
            add(g);
            break;
        
        case 2:
            display();
            break;
        
        case 3:
        cout<<"Enter the task name: ";
            std::getline(std::cin >> std::ws, g);
            mark_task(g);
            break;
        
        case 4:
        cout<<"Enter the task name: ";
            std::getline(std::cin >> std::ws, g);
            remove_task(g);
            break;
        
        default:
            cout<<"Wrong choice"<<endl;
        
    }
        cout<<"If you want to quit enter -1: ";
        cin>>i;

    }

}

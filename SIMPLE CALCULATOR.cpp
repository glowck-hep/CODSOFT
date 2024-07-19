/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <climits>
#include <cstring>
#include <cmath>
#define lit long long 
#define RAP(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{

        int a,b;
        char c;

        cout<<"Enter 1st operand: ";
        cin>>a;
        cout<<"ENter 2nd operand: ";
        cin>>b;
        cout<<"Enter operator ";
        cin>>c;
        if(c=='+')
        {
            cout<<a+b<<endl;
        }
        else if(c=='-')
        {
            cout<<a-b<<endl;
        }
        else if(c=='*')
        {
            cout<<a*b<<endl;
        }
        else if(c=='/')
        {
            cout<<a/b<<endl;
        }
        else if(c=='%')
        {
            cout<<a%b<<endl;
        }
        else{
            cout<<"Unidentified sh-operator"<<endl;
        }

       
        
    
       
}

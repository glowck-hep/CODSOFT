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
#include <bits/stdc++.h> 
#define lit long long 
#define RAP(i,n) for(int i=0;i<n;i++)
using namespace std;
int randomNoGenerator(int limit) 
{ 
    // uniformly-distributed integer random number 
    // generator that produces non-deterministic 
    // random numbers. 
    random_device rd; 
  
    // A Mersenne Twister pseudo-random generator 
    // of 32-bit numbers with a state size of 
    // 19937 bits. 
    mt19937 gen(rd()); 
  
    // Uniform distribution 
    uniform_int_distribution<> dis(1, limit); 
    return dis(gen); 
} 
int main()
{
lit i;
cout<<"Enter the times you want to play this game:  ";
cin>>i;
    while(i--)
    {
        int limit = 100; 
    limit=randomNoGenerator(limit); 
    cout<<"Guess the number from 1 to 100: ";
    int g=-1;
    cin>>g;
    while(g!=limit)
    {
        if(g>limit)
        {
            cout<<"You have guessed more than the number try again... ";
        }
        else
        {
            cout<<"You have guessed less than the number try again... ";
        }
        cin>>g;
    }
    cout<<"Congrats you have guessed the right number"<<endl;
    
    }   
}

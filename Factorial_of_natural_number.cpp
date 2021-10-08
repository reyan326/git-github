#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

/* write program to find sum of natural number */

int main()
{
    int n, i, factorial = 1;  
    
    cout<<"Enter the number n =  ",cin>>n;


    for(int i=1; i<=n; i++)
    {
       factorial = factorial*i;
    }       

    cout<<"factorial of "<<n<<" is = "<<factorial<<endl;
    cout<<n<<"! = "<<factorial<<endl;
    return 0;
    
}
 

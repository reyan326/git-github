#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

/* write program to find number is primenumber or not */


int main()
{
    int n, i, count = 0;
    cout<<"enter number = ",cin>>n;
    
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
            
            count ++;
     
    } 
     
    if(count == 2)
        cout<<"it is prime number."<<endl;
    else
        cout<<"it is composite number."<<endl;
    
    
    return 0;
    
}
 

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

/* write program to find perfect number 

for perfect number => sum of factor = 2*number

*/

int main()
{
    int n, i, sum = 0;
    cout<<"enter number = ",cin>>n;
    
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
            cout<<"factor of n are = "<<i<<endl;
            sum += i;
        
    }
    cout<<"sum of factor = "<<sum<<endl;
    if(sum==(2*n))
    {
        cout<<"it is perfect number"<<endl;
    }
    else
    {
        cout<<"it is not perfect number"<<endl;
    }
    
    
    return 0;
    
}
 

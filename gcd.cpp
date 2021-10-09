#include <iostream>
#include <cmath>

using namespace std;
/* write a program to find gcd of two number*/



int main()
{
    int n, m;
    
    cout<<"Enter 2 number. = ",cin>>m>>n;
    
    while(m!=n)
    {
        
        if(m>n)
            m = m-n;
        else if(n>m)
            n = n-m;
    }
    cout<<"gdc = "<<m<<endl;
    
    
    
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;
/* write the program find the digits of number */

int main()
{
    int n, r;   // n denote the number , r denote remainder who become digits
    
    cout<<"Enter the number = ",cin>>n;
    
    while(n>0)
    {
       r = n % 10;
       n = n / 10;
       
       cout<<"digits are = "<<r<<endl;
    }
    
    

    
    return 0;
}

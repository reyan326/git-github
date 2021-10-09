#include <iostream>
#include <cmath>

using namespace std;
/* write the program find the digits of number */

int main()
{
    int n, r, cube_r, sum = 0;   // n denote the number , r denote remainder who become digits
    
    cout<<"Enter the number = ",cin>>n;
    int m = n;
   
    while(n>0)
    {
       r = n % 10;
       n = n / 10;
       cube_r = r*r*r;
       
       sum += cube_r;
       
    }
    cout<<sum<<endl;
    
    if(sum == m)
    {
        cout<<"It is an amstrong number."<<endl;
    }
    else
    {
        cout<<"It's not an amstrong number."<<endl;
    }

    
    return 0;
}

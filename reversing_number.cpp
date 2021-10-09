#include <iostream>
#include <cmath>

using namespace std;
/* write the program to reverse the original number */

int main()
{
    int n, r, reverse = 0;   // n denote the number , r denote remainder who become digits
    
    cout<<"Enter the number = ",cin>>n;
    
   
    while(n>0)
    {
       r = n % 10;
       n = n / 10;
      
      reverse = reverse*10 + r;
    }
    
    cout<<"Reverse number = "<<reverse<<endl;

    
    return 0;
}

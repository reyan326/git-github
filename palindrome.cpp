#include <iostream>
#include <cmath>

using namespace std;
/* write the program find the number is palindrome or not */

int main()
{
    int n, r, reverse = 0; 
    cout<<"Enter a number = ",cin>>n;
    int m = n;
    while(n>0)
    {
        r = n % 10;
        n = n / 10;
        
        reverse = reverse*10 + r;
        
    }
    cout<<"Reverse Number = "<<reverse<<endl;
    if(m == reverse)
      {
          cout<<"This number is Palindrome Number."<<endl;
      } 
    else
      {
          cout<<"This number is not Palindrome Number"<<endl;
      }
        
        
        
    return 0;    
}        
    

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int option;
    float a, b, c;
  
  cout<<"MENU\n";
  cout<<"1. Add\n"<<"2. Subtract\n"<<"3. Multiply\n"<<"4. Divide\n";
  cout<<"Enter your choice. = ";
  cin>>option;
  cout<<"Enter Two number = ";
  cin>>a;
  cin>>b;
  
  switch(option)
  {
     case 1: c = a+b;
        break;
    case 2: c = a-b;
        break;
        
    case 3: c =  a*b;
        break;
    case 4: c = a/b;
        break;
    default: cout<<"invalid input"<<endl;    
  }
  cout<<"Result is = "<<c<<endl;
 
    
    return 0;
}

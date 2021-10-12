/*
  write a program whick ckeck leap year.
  for leap year,all  years perfectly divisible by 4 
  except for century years ending with 00 which is leap year only if it is divisible by 400.


*/


#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  int year;
  cout<<"Enter the year you want to check = ",cin>>year;
 
  if(year % 4 == 0)
  {
      if(year%100 == 0)
      {
          if(year%400 == 0)
          {
              cout<<"it is leap year";
          }
          else
          {
              cout<<"it is not leap year.";
          }
          
      }
      else
      
      {
          cout<<"it is leap year.";
      }
  }  
  else
  {
       cout<<"it is not leap year." ;
  }
   
      
    
    return 0;
}


// METHOD 2 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int year;
   cout<<"Enter year   = ",cin>>year;
   
   if(year%400 ==0)
   {
       cout<<"leap year";
   }
    else if(year%100==0)
    {
        cout<<"not";
    }
    else if(year%4 ==0)
    {
        cout<<"leap year";
    }



    return 0;
}



















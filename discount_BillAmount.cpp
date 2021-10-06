/* write a program to discount bill amount.*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
   float amount;
   float discount, billamount;
   
   cout<<"Enter bill amount = ",cin>>amount;
   if(amount>= 500)
   {
       discount = (amount*20)/100;
       billamount = amount - discount;
       cout<<"you got 20 percentage discount and discount amount is = "<<discount<<endl;
       cout<<"final Bill Amount = "<<billamount<<endl;
   }
   else 
    {
        if(amount>=100 && amount<500)
        {
           discount = (amount*10)/100;
       billamount = amount - discount;
       cout<<"you got 10 percentage discount and discount amount is = "<<discount<<endl;
       cout<<"final Bill Amount = "<<billamount<<endl; 
        }
        else
        {
            discount = 0.0;
       billamount = amount - discount;
       cout<<"you got no  discount and discount amount is = "<<discount<<endl;
       cout<<"final Bill Amount = "<<billamount<<endl; 
            
        }
 
   
    }   
   

    
    return 0;
}


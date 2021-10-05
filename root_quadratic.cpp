#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c;
    float r1, r2, d;

   cout<<"ax^2 + bx + c = 0 is a quadratic equation"<<endl;
   cout<<"enter value a (coefficient of x^2) = ",cin>>a;
   cout<<"enter value b (coefficient of x) = ",cin>>b;
   cout<<"enter value c (constant term) = ",cin>>c;

   d = b*b - 4*a*c;

   if(d == 0)
   {
       cout<<"Both roots of quadratic equation are equal = "<<(-b)/(2*a)<<endl;
   }

   else if(d>0)
   {
       r1 = (-b + sqrt(d))/(2*a);
       r2 = (-b - sqrt(d))/(2*a);

       cout<<"first root  = "<<r1<<endl;
       cout<<"sec root  = "<<r2<<endl;
   }
    else
    {
        float x, real, image;

        x = d*(-1);
        real = -b/(2*a);
        image = x/(2*a);
        
        
        cout<<"first root = "<<real<< '+' <<image<<'i'<<endl;
        cout<<"sec root = "<<real<< '+' <<image<<'i'<<endl;

    }

    return 0;

}

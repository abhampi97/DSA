#include<iostream>
using namespace std;
int decimal(int n)
{
   int i,d=0,rem,pow=1;
   for(i=0;n>0;i++)
   {
       rem=n%10;
       n=n/10;
       d=d+rem*pow;
       pow=pow*2;
   }
 /*while (n>0)
   {
         rem=n%10;
         n/=10;
         d+=rem*pow;
         pow*=2;
   }*/
   cout<<"Decimal num is : "<<d;
}
int main()
{
    int n;
    cout<<"enter binary number :";
    cin>>n;
    decimal(n);
    return 0;
}

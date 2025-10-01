#include<iostream>
using namespace std;
int bin(int n)
{
    int a[20],i=1,c=0;
  while(n>0)
  {
   a[i]=n%2;
    n=n/2;
    c++;
   // cout<<c<<endl;
    i++;
  }
  //print binary number
  for(i=c;i>0;i--)
  {
    cout<<a[i];
  }
}
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    bin(n);
    return 0;
}

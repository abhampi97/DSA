#include<iostream>
using namespace std;
int neg(int a[],int c)//neg(a{0,0,1,1,0},c=4)
{
  int i;
  //first loop 
  for(i=1;i<=c+1;i++)//run 5 time c=5;
  {
    if(a[i]==1)
    {
      a[i]=0;
    }
    else
    {
      a[i]=1;
    }
  }
  /*first loop convert a{0,0,1,1,0} into a{1,1,0,0,1}*/

 int h=1;
 //second loop
  for(i=1;i<=c+1;i++)
  {
    if(a[i]==1 && h==1)
    {
      a[i]=0;
      h=1;
    }
    else if(a[i]==0 && h==1 || a[i]==1 && h==0)
    {
      a[i]=1;
      h=0;
    }
    else if(a[i]==0 && h==0)
    {
      a[i]=0;
      h=0;
    }
  }
  /* second loop 11001 
                convert into
                 00101
      */

for(i=c+1;i>0;i--)
  {
  cout<<a[i]; //print rev a{0,0,1,0,1} into a{1,0,1,0,0}
  }
}

int print(int c,int a[],int n)
{ 
if(n<0){//(-12<0) True
    a[c+1]=0;
    //call neg function
     neg(a,c);  //neg(a{0,0,1,1,0},c=4);
     }
  
//positive number print
else{
   for(int i=c;i>0;i--)
   {
     cout<<a[i];
   }
}
}

int bin(int n)
{
    int num;
    //n=-12 if is True
    if(n<0)
    {
      num=-n; //num=-(-12); num=12;
    }
    else 
    {
    num=n; 
    }
    int a[20],i=1,c=0;
  while(num>0)
  {
   a[i]=num%2; 
    num=num/2; 
    c++;
    i++;
  }
  print(c,a,n);//(4,a{0,0,1,1},-12);
}

int main()
{
    int n;
    cout<<"enter the number :"; 
    cin>>n;// suppose you enter : -12
    bin(n);//bin(-12);
    return 0;

}

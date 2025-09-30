#include<iostream>
using namespace std;
void prime(int n)
{
    int i,c=0; 
    bool isPrime=true;
    for(i=2;i<=n/2;i++)//or using this i<=n-i*i;
    {
        if(n%i==0){
        cout<<"num is not prime";
        c=1; //isPrime=false;
        break;
        }
    }
    if(c==0)//or if(isPrime ==true)
    {
    cout<<"num is prime";
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    prime(n);//number is passed to the function
    return 0;
}
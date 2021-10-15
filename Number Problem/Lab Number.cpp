#include <iostream>
using namespace std;
/*
A lab number is a number such that the square of any of its prime divisors is still one of its divisors.

For example:
Input: 8
Output: true (2 is a prime divisor of 8, and 2x2=4 is also a divisor of 8)

Input: 50
Output: true (5 is a prime divisor of 50, and 5x5=25 is also a divisor of 50)
Some Lab Numbers are:25,28,40,50,52,68,75;
*/
int isprime(int);
int islabnumber(int);
int main()
{
 int num;
// cout<<"Enter a Number: ";
   cin>>num;
   if(islabnumber(num))
    cout<<num<<" is LAB Number."<<endl;
   else
    cout<<num<<" is Not a LAB Number.";
 return 0;
}
int islabnumber(int num)
{
 int i,n,flag=0;
  for(i=2;i<num;i++){
   if(isprime(i))
    {
     n=i;
     n=n*n;
     if(num%n==0)
      flag=1;
    }
   }
   if(flag==1)
    return 1;
   else
    return 0;
}
int isprime(int n)
{
 int i;
 for(i=2;i<n;i++)
 {
  if(n%i==0)
    break;
 }
 if(n==i)
   return 1 ;
 return 0;
}

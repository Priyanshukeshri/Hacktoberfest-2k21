/*
This Program Check Weather the input(integer) number is Perfect or Not.Also Print Perfect Numbers Upto Input number.


A perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself.
The smallest perfect number is 6: its proper divisors are 1, 2, and 3, and 1 + 2 + 3 = 6.

Write a program which will check if the given input is a perfect number or not.

For Example:
Input: 6
Output: true

Input: 20
Output: false

*/
#include <iostream>
#include <iomanip>
using namespace std;
int Perfect_Check(int n)
{
 int i,sum=0;

 for(i=1;i<n;i++)
 {
  if(n%i==0)
   sum+=i;
 }
 if(sum==n)
   return 1;
  else
   return 0;
}
int main()
{
 int n;
// cout<<"Enter a Number: ";
 cin>>n;
 cout<<"Entered Number : "<<n<<endl<<endl;

 if(Perfect_Check(n))
  cout<<"👌 "<<n<<" is a Perfect Number.";
 else
  cout<<"❌ "<<n<<" is Not a Perfect Number.";
 cout<<endl<<endl;

 cout<<"Perfect Number Upto "<<n<<" Are:"<<endl<<endl;
  for(int i=1;i<=n;i++)
  {
   if(Perfect_Check(i))
     cout<<i<<" , ";
  }
 return 0;
}

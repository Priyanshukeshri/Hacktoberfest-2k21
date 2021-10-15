/*
A number is called a Spy number, if the sum and product of its digits are equal.
For example, 123 is a Spy number, as the sum of its digits is 6 (1+2+3) which is equal to the product of its digits: 6 (1x2x3).

Write a program to check if the user input is a Spy number or not.

For example:
Input: 1412
Output: true

Input: 247
Output: false

*/
#include <iostream>
#include <cmath>
using namespace std;

int Spy_Check(int num)
{
  int n,multiply,addition;

   n=num;
   addition=0;
   multiply=1;
   while(n!=0)
   {
     addition+=n%10;
     multiply*=n%10;
     n=n/10;
   }
  if(multiply==addition)
   return 1;
 return 0;
}

int main()
{
 int num;
//cout<<"Enter a Number: ";
 cin>>num;
 cout<<"Entered Number :"<<num<<endl<<endl;

  if(Spy_Check(num))
    cout<<"👍 "<<num<<" is a Spy Number.\n\n";
  else
    cout<<"❌ "<<num<<" is Not a Spy Number.\n\n";

 cout<<"\nSpy Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=0;i<=num;i++)
  if(Spy_Check(i))
   cout<<i<<" ";
 return 0;
}

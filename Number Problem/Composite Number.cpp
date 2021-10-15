/*
This program check weather the user Input(ineger) is a Composite number or Not. Also Print Composite Numbers upto given number.

A Composite number is a positive integer that is not prime. In other words, it is a positive integer that has at least one divisor other than 1 and itself.

The composite numbers up to 20 are 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20.

For example:

Input: 10
Output: yes (10 has divisors other than 1 and itself, for example, 2 or 5).

Input: 5
Output: no (5 is a prime number because it has no other divisors other than 1 and itself).


*/

#include<iostream>
using namespace std;

int Composite_Check(int num)
{
 int i;
 for(i=2;i<num;i++)
 {
   if(num%i==0){
    return 1;
   }
 }
 return 0;
}

int main()
{
 int num;
// cout<<"Enter a Number : ";
 cin>>num;
 cout<<"Entered Number : "<<num<<endl<<endl;

 if(Composite_Check(num))
  cout<<"👍 "<<num<<" is a Composite Number.";
 else
  cout<<"❌ "<<num<<" is Not a Composite Number.";

 cout<<"\n\nComposite Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=1;i<=num;i++)
   if(Composite_Check(i))
    cout<<i<<", ";

 return 0;
}

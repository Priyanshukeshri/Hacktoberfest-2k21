/*
This Program Check weather the Input(integer number) is Emirp Number or Not.Also Print Emrip numbers upto given input number.

An Emirp is a prime number that results in a different prime when its decimal digits are reversed. For example, 13 is an emirp number because both 13 and 31 are prime numbers.

This definition excludes the related Palindromic primes. The term reversible prime is used to mean the same as emirp, but may also, ambiguously, include the palindromic primes.

The sequence of emirps begins 13, 17, 31, 37, 71, 73, 79, 97, 107, 113, 149, 157, 167, 179, 199, 311, 337, 347, 359, 389, 701, 709, 733, 739, 743, 751, 761, 769, 907, 937, 941, 953, 967, 971, 983, 991, 

For example:
Input: 17
Output: true (17 and 71 are prime numbers)

Input: 113
Output: true (113 and 311 are prime numbers)

Input: 23
Output: false (23 is a prime number, but 32 is not)
*/

#include <iostream>
#include <cmath>
using namespace std;

int Is_prime(int num)
{
 int i,flag=1;

 for(i=2;i<num;i++)
 {
   if(num%i==0){
     flag=0;
     break;
   }
 }
 if(flag)
  return 1;
 return 0;
}
int Reverse(int num)
{
  int n,rev;
  n=num; rev=0;
  while(n!=0)
  {
   rev=rev*10+n%10;
   n=n/10;
  }
 return rev;
}
int Emirp_Check(int num)
{
  int rev=Reverse(num);
  int pdrom= rev==num;
  if(Is_prime(num) && Is_prime(rev) && !pdrom)
   return 1;
  return 0;
}

int main()
{
 int num;
// cout<<"Enter a Number : ";
 cin>>num;
 cout<<"Entered Number : "<<num<<endl<<endl;

 if(Emirp_Check(num)){
  cout<<"👍 "<<num<<" is a Emirp Number.";
  cout<<"\n-> ("<<num<<" and "<<Reverse(num)<<" are Prime Numbers"<<")";
 }
 else{
  cout<<"❌ "<<num<<" is Not a Emirp Number.";
    cout<<"\n-> ("<<num<<" and "<<Reverse(num)<<", one of them are Not Prime Number or Palindrome Number"<<")";
 }

 cout<<"\n\nEmirp Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=13;i<=num;i++)
  if(Emirp_Check(i))
   cout<<i<<", ";

 return 0;
}

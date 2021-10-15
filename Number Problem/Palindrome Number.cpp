#include <iostream>
using namespace std;
/*
Palindromic number is a number that is the same when written forwards or backwards.
Create a program that takes a number as input and return whether the number is palindromic, or not.

For Example:
645 - Not a Palindrome
656 - Palindrome
*/
int main()
{
 int num,n,r,rev=0;
// cout<<"Enter a Number: ";
  cin>>num;
  n=num;
 cout<<"Your Number: "<<num<<endl;
 while(n!=0)
 {
  r=n%10;
  rev=rev*10+r;
  n=n/10;
 }
 if(num==rev)
  cout<<"It is a PALINDROME Number.";
 else
  cout<<"It is Not a PALINDROME Number.";
 return 0;
}

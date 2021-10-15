/*
This program check wheather the user input is a Harshad number or Not.Also Print Harshad Numbers Up to Given input number.

A harshad number (or Niven number) is an integer that is divisible by the sum of its digits.

For example:
Input: 18
Output: true (18 is a Harshad number because it is divisible by the sum of its digits: 18 = (1 + 8) x 2)

Input: 1729
Output: true (1729 is a Harshad number because it is divisible by the sum of its digits:
1729 = (1 + 7 + 2 + 9) × 91)

*/
#include <iostream>
#include <iomanip>
using namespace std;

void Print_Harshad_Numbers(int upto)
{
 int num,n,sum;
 cout<<"Harshad Numbers Upto "<<upto<<" Are:"<<endl<<endl;
 for(int i=1;i<=upto;i++)
 {
   num=i;
   n=num;
   sum=0;
   while(n!=0)
   {
     sum=sum+n%10;
     n=n/10;
   }
   if(!(num%sum))
     cout<<setw(4)<<num;
 }
}

void Check_Harshad_Number(int num)
{
 int n,sum;
   n=num;
   sum=0;
   while(n!=0)
   {
     sum=sum+n%10;
     n=n/10;
   }
  if(!(num%sum))
    cout<<"👍 "<<num<<" is a Harshad Number.\n\n";
  else
    cout<<"❌ "<<num<<" is Not a Harshad Number.\n\n";
}

int main()
{
 int num;
// cout<<"Enter a Number: ";
 cin>>num;
 cout<<"Entered Number: "<<num<<endl<<endl;
 Check_Harshad_Number(num);
 Print_Harshad_Numbers(num);
 return 0;
}

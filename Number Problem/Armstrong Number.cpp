#include <iostream>
#include<cmath>
using namespace std;
/*
An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.

For instance, a 3 digit number will be considered an Armstrong number if the sum of the cubes of its digits is equal to the number itself.

For example, 153 is an Armstrong number,
          as 1^3 + 5^3 + 3^3 = 153
Armstrong Numbers : 1,153,370,371,407,8208,9474
*/
int Armstrongcheck(int);
int main()
{
 int num;
// cout<<"Enter a Number:";
 cin>>num;
// for(num=1;num<=1000;num++)
  if(Armstrongcheck(num) == 1)
   cout<<num<<" is Armstrong Number."<<endl;
 else
   cout<<num<<" is Not Armstrong Number."<<endl;
return 0;
}
int Armstrongcheck(int num)
{
 int n,sum,rem,digit=0;
 float p;
 n=num;
 while(n!=0)
 {
  digit++;
  n=n/10;
 }
 n=num;
 sum=0;
 while(n!=0)
 {
   rem=n%10;
   p=pow(rem,digit);
   sum+=p;
   n=n/10;
 }
 if(sum==num)
   return 1;
 else
   return 0;
}

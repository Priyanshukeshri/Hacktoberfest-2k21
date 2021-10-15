/*
This program check if the user input is a Trimorphic number or not.
Also print the Trimorphic Number Upto Given Input number.

A Trimorphic number is a number whose cube ends in the number itself.

For example:
Input: 4
Output: true (4^3 is 64, which ends in 4)

Input: 24
Output: true (24^3 = 13824)

Input: 249
Output: true (249^3 = 15438249)


*/
#include <iostream>
#include <cmath>
using namespace std;
int Trimorphic_Check(int num)
{
 int i,cube,n,nd,ln;

   cube=pow(num,3);
   n=num;
   nd=0;
   while(n!=0){
     nd++;
     n=n/10;
    }
   n=cube; ln=0;
  for(i=1;i<=nd;i++){
    ln=ln*10+n%10;
    n=n/10;
   }
  n=ln; ln=0;
   while(n!=0){
    ln=ln*10+n%10;
     n=n/10;
   }
  if(num==ln)
    return 1;
   else
    return 0;

}

int main()
{
 int num;
// cout<<"Enter a Number : ";
 cin>>num;
 cout<<"Entered Number : "<<num<<endl<<endl;

 if(Trimorphic_Check(num)){
  cout<<"👍 "<<num<<" is a Trimorphic Number.";
  cout<<"\n\t-> ("<<num<<"^3 is "<<(int)pow(num,3)<<", which ends in "<<num<<")";
 }
 else{
  cout<<"❌ "<<num<<" is Not a Trimorphic Number.";
  cout<<"\n\t-> ("<<num<<"^3 is "<<(int)pow(num,3)<<", which Not ends with "<<num<<")";
 }


 cout<<"\n\nTrimorphic Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=1;i<=num;i++)
  if(Trimorphic_Check(i))
   cout<<i<<", ";

 return 0;
}

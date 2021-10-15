/*
If the Square of a number ends with the number itself, it is considered to be Automorphic Number.

For Example:
   25 is an Automorphic number,
   as the square of 25 = 625 (ends with 25).

Sequence of automorphic numbers: 1, 5, 6, 25, 76, 376, 625, ...

*/
#include <iostream>
#include <cmath>
using namespace std;
int Automorphic_Check(int num)
{
 int i,square,n,nd,ln;

   square=pow(num,2);
   n=num;
   nd=0;
   while(n!=0){
     nd++;
     n=n/10;
    }
   n=square; ln=0;
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

 if(Automorphic_Check(num)){
  cout<<"👍 "<<num<<" is a Automorphic Number.";
  cout<<"\n\t-> ("<<num<<"^2 is "<<(int)pow(num,2)<<", which ends in "<<num<<")";
 }
 else{
  cout<<"❌ "<<num<<" is Not a Automorphic Number.";
  cout<<"\n\t-> ("<<num<<"^2 is "<<(int)pow(num,2)<<", which Not ends with "<<num<<")";
 }


 cout<<"\n\nAutomorphic Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=1;i<=num;i++)
  if(Automorphic_Check(i))
   cout<<i<<", ";

 return 0;
}

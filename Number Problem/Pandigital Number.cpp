/*
This Program Check weather the Given Input (number) is Pandigital Number or Not.

If a number contains each of the digits from 0 to 9 at least once (0 not being the leading digit), it is considered to be Pandigital Number.

For example:
 1076398452 is Pandigital.
 11145689723232309899 is also Pandigital.

*/
#include <iostream>
#include <iomanip>
using namespace std;

void Print_Frequency(int *freq)
{
 cout<<"\nDigits Frequency :"<<endl<<endl;
 for(int i=0;i<=9;i++)
  cout<<i<<"  Occurs "<<setw(2)<<freq[i]<<" times."<<endl;
}

void Pandigital_Check(string num)
{
 int flag,num_count[10]={0};
 flag=1;
 for(int i=0;i<(int)num.length();i++)
 {
  if(!(num[0]-'0'!=0 && (num[i]-'0'>=0 && num[i]-'0'<=9))){
    flag=0;
    break ;
   }
 }
 for(int i=0;i<(int)num.length();i++)
   num_count[num[i]-'0']++;
 for(int i=0;i<=9;i++)
   flag= flag && num_count[i];

 if(flag)
  cout<<num<<" is 👍 Pandigital Number.";
 else{
   cout<<num<<" is ❌ Not a Pandigital Number.\n\n";
   if(num[0]-'0'==0)
     cout<<"* Note: Pandigital Number Cannot Start with 0 (zero).";
  }
 cout<<endl<<endl;

 Print_Frequency(num_count);
}

int main()
{
 string num;
 getline(cin,num);
 cout<<"Entered Number : "<<num<<endl<<endl;
 Pandigital_Check(num);
 return 0;
}

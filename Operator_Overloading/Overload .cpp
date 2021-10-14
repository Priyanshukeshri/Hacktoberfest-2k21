#include <iostream>
using namespace std;
/*
 In C++ I/O objects cin,cout of Class istream,ostream can only able to take input of Build-in datatype.
 This Code Takes Input of User-defined Datatype like class Complex.
 Input: 4 7
 Output: 4 + i7
*/
class Complex
{
 int x,y;
 public:
 friend istream& operator >>(istream &,Complex &);
 friend ostream& operator <<(ostream &,Complex);
};
 istream& operator >>(istream &input,Complex &c)
 {
  input>>c.x>>c.y;
  return input;
 }
 ostream& operator <<(ostream &output,Complex c)
 {
  output<<c.x<<" + i"<<c.y;
  return output;
 }
int main()
{
 Complex c1;
// cout<<"Enter a Complex Number:";
 cin>>c1;    // operator >>(cin,c1);
 cout<<"Complex Number : ";
 cout<<c1;   // operator <<(cout,c1);
 return 0;
}

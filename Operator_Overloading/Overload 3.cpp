#include <iostream>
using namespace std;
class Array
{
 int arr[10];
 public:
  void insert_value(int index,int value)
  {
   arr[index]=value;
  }
  int operator [](int i)
  {
   return arr[i];
  }
};
int main()
{
 Array Arr1;
 int i;
 for(i=0;i<=9;i++){
  Arr1.insert_value(i,10*(i+1));
  }
  cout<<"Array:"<<endl;
 for(i=0;i<=9;i++)
   cout<<Arr1[i]<<endl;
  return 0;
}

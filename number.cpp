#include <iostream>
using namespace std;

class Number { 
    public:
        int num;
        Number() {
            cout<<"Default constructor called! The value is assigned to 0"<<endl;
            num = 0;            
        };
        Number(int num) {
            this -> num = num;
        };
        ~Number() {
            cout<<"Object destroyed for class Number"<<endl;
        };
        void setNumber(int num) {
            this -> num = num;
        }
        int getNumber() {
            return num;
        };
        long int factorial(int num) {
            if(num < 0)
                return -1;
            if(num == 0)
                return 1;
            else
                return(num * factorial(num - 1));
        };
        bool isPrime(int num) {
            if(num < 1)
                return false;
            for(int i = 2 ; i < num ; i++)
                if(num % i == 0)
                    return false;
            return true;
        };
        int sumOfDigits(int num) {
            int sum = 0;
            while(num != 0) {
                sum = sum + num % 10;
                num /= 10;
            }
            return sum;
        };
        int reverse(int num) {
            int rev = 0, rem;
            while(num != 0) {
                rem = num % 10;
                rev = rev * 10 + rem;
                num /= 10;
            }
            return rev;
        };
} obj;

int main() {
    int num;    
    cout<<"Num = "<<obj.num<<endl;
    cout<<"Input a value of num: ";
    cin>>num;
    obj.setNumber(num);
    int fact = obj.factorial(num);
    cout<<"The factorial of the given number is: "<<fact<<endl;
    if(obj.isPrime(num))
        cout<<num<<" is a prime number."<<endl;
    else
        cout<<num<<" isn't a prime number"<<endl;
    int sum = obj.sumOfDigits(num);
    cout<<"The sum of the digits is: "<<sum<<endl;
    int rev = obj.reverse(num);
    cout<<"The reversed number is: "<<rev<<endl;
    return 0;
}

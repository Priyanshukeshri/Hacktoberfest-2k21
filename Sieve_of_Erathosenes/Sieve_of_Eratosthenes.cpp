
#include <bits/stdc++.h>
using namespace std;

//Q.. print all primes smaller than or equal to n.

//sieve of Eratosthenes is the most efficient way to do this..
 
void primeSieve(int n)
{   
    //creating an array of n+1 to ensure that we dont have to do -1 every time while indexing
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    
    // loop is traversed from 2 to sqrt(n)
    for (int i = 2; i*i <= n; i++)
    {
        // If prime[p] is not changed then it is a prime or else it will be tured false
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
 
    // will print all the prime no.s before n....
    for (int i = 2; i <= n; i++)
        if (prime[i])
            cout << i << " ";
}


int main()
{
    int n = 30;
    cout << n << endl;
    primeSieve(n);
    return 0;
}
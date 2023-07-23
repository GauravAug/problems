#include<iostream>
using namespace std ;
bool isPrime(int n);

int main ()
{
    // lords code here
    for(int num = 2; num <= 500; num++)
    {
        if(isPrime(num))
        {
            cout<<num<<" is Prime Number"<<endl;
        }
        else
        {
            cout<<num<<" is Non Prime Number"<<endl;
        }
    }
}

// lords prime implementation

bool isPrime(int num)
{
    if(num == 1)
    {
        return false;
    }
    for(int i=2;i<num;i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}


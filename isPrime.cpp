#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>> n ;
    bool isPrime(int n);
    if(isPrime(n))
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
    return 0;
}

bool isPrime(int n)
{
    if(n == 1)return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

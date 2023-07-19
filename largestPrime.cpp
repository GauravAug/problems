#include<iostream>
using namespace std;
bool isPrime(int n);
bool isPrimeAdv(int n);
//3243542
int main()
{
    int n;
    cin>> n;
    int ans = 2;
    for(int i=2;i<=n;i++)
    {
        if(isPrimeAdv(i))
        {
            ans = i;
        }
    }
    cout<<ans;
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

bool isPrimeAdv(int n)
{
    if(n == 1)return false;
    for(int i=2;i*i <= n;i++)
    {
        if(n%i == 0)return false;
    }
    return true;
}

#include<iostream>
using namespace std ;

int main ()
{
    int n ;
    int s ;
    cin >> n ;
    while(n>0)
    {
        s = s + n%10;
        n=n/10;
    }
    cout<< s ;

    return 0 ;
}


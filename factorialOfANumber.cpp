//Write a program in C++ to find the factorial of a number.
//Sample output:
//Input a number to find the factorial: 5
//The factorial of the given number is: 120


#include<iostream>
using namespace std ;

int main()
{
    int n;
    int i;
    int factorial =1;
    cin>> n ;

    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    cout<<"Factorial of the number " << n << " is " << factorial ;
    return 0 ;
}

#include<iostream>
using namespace std ;

int main()
{
    int x;
    cin>>x;

    // using abs function
    //x= abs(x);

    // without using abs function
    if(x<0)
    {
        x=-x;
    }
    cout<<x;
    return 0;
}

#include<iostream>
using namespace std ;

int main()
{
    int y ;
    cin>>y;

    if(y % 4 == 0)
    {
        cout<<"Year is leap  year." ;
    }
    else
    {
        cout<<"Given year is not a leap year." ;
    }
    return 0 ;
}

#include<iostream>
using namespace std ;

int main()
{
    int length, breadth;
    cin>> length>> breadth;
    int perimeter = 2*length + 2*breadth ;
    int area = length*breadth;

    if(area > perimeter)
    {
        cout<<"true ";
    }
    else
    {
        cout<< "false";
    }
    return 0 ;
}

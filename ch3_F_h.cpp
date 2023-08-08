#include<iostream>
#include<math.h>
using namespace std ;
void isPointOnAxis(int x ,int y);
int main()
{
    int x, y;
    cin>>x>>y;
    isPointOnAxis(x,y);
    return 0 ;
}

void isPointOnAxis(int x,int y)
{
    if ( x==0 && y==0)
    {
        cout<<"point is on the origin";
    }
    else if ( x==0 )
    {
        cout<<"point lies on the y-axis";
    }
    else if ( y==0 )
    {
        cout<<"point lies on the x-axis";
    }
    if ( x!=0 && y!=0)
    {
        cout<<"point lies on neither on x-axis nor on y-axis";
    }
}


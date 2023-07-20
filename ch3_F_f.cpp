#include<iostream>
using namespace std ;
bool areThreePointsCollinear (int x1,int x2, int x3, int y1,int y2, int y3);

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;
    bool ans = areThreePointsCollinear(x1,x2,x3,y1,y2,y3);
    if(ans == true)
    {
        cout<<"Collinear";
    }
    else
    {
        cout<<"Non collinear";
    }
    return 0 ;
}

bool areThreePointsCollinear(int x1,int x2, int x3, int y1,int y2, int y3)
{
    // 3 points are collinear if area of triangle formed by them is 0;
    // google the formula for area of triangle.
    int temp = x1*(y2-y3)+ x2*(y3-y1)+ x3*(y1-y2);

    if( temp == 0 )
    {
        return true ;
    }
    return false ;
}

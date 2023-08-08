#include<iostream>
using namespace std ;


bool isPointsAreOnStriaghtLineThroughSlope(int x1,int y1,int x2,int y2,int x3,int y3);
bool isPointAreOnStraightLine(int x1,int y1,int x2,int y2,int x3,int y3) ;
int main()

{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

  //  bool ans =  isPointAreOnStraightLine(x1,y1,x2,y2,x3,y3);
    bool ans = isPointsAreOnStriaghtLineThroughSlope(x1,y1,x2,y2,x3,y3);
    if( ans== true )
    {
     cout<<"points lies on straight line";
    }
    else
    {
     cout<<"points are not on straight line";
    }
   return 0 ;
}

bool isPointAreOnStraightLine(int x1,int y1,int x2,int y2,int x3,int y3)
{
    if(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2) == 0)
    {
        return true ;
    }
    return false ;
}

bool isPointsAreOnStriaghtLineThroughSlope(int x1,int y1,int x2,int y2,int x3,int y3)
{
    if( (x1==0) && (x2==0) && (x3==0) )
    {
        return true;
    }
    if((x2-x1)!=0 && (x3-x1)!=0 &&(y2-y1)/(x2-x1) == (y3-y1)/(x3-x1))
    {
        return true;
    }
    return false ;
}













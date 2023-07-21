#include<iostream>
using namespace std ;
bool isTriangleARightAngleTriangle(int a,int b,int c);
bool isValidRightTriangle(int a, int b, int c);

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    //bool ans = isTriangleARightAngleTriangle(a,b,c);
    bool ans = isValidRightTriangle(a,b,c);
    if(ans==true)
    {
        cout<<"valid right angle triangle" ;
    }
    else
    {
        cout<<"not valid right angle triangle" ;
    }
    return 0 ;
}

bool isTriangleARightAngleTriangle(int a,int b,int c)
{
    // first we will find the largest side that is hypotenuse;
    int hypotenuse=a;
    if(b>hypotenuse)
    {
        hypotenuse=b;
    }
    if(c>hypotenuse)
    {
        hypotenuse=c;
    }
    int perpendicular, base;
    // now we need to find the other two sides
    if(hypotenuse == a)
    {
        // then b and c becomes the other two sides
        perpendicular = b;
        base = c;
    }
    else if(hypotenuse == b)
    {
        perpendicular = a;
        base = c;
    }
    else
    {
        perpendicular = a;
        base = b;
    }

    // now using pythagoras theorem
    if(hypotenuse*hypotenuse == perpendicular*perpendicular + base*base)
    {
        return true;
    }
    return false ;
}

bool isValidRightTriangle(int a, int b, int c)
{
    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
    {
        return true;
    }
    return false;
}


#include<iostream>
using namespace std ;

bool isValidTriangle(int a,int b,int c);
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(isValidTriangle(a,b,c))
    {
        cout<<"Valid Triangle";
    }
    return 0;
}


bool isValidTriangle(int a,int b,int c)
{
    if(a == 0 || b == 0 || c == 0)return false;
    return a + b + c == 180;
}

#include<iostream>
using namespace std ;

int minAge(int a, int b, int c);
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<minAge(a,b,c);
    return 0;
}

int minAge(int a, int b, int c)
{
    int ans = a;
    if(b<a)ans=b;
    if(c<ans)ans=c;
    return ans;
}

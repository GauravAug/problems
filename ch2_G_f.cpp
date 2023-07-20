#include<iostream>
using namespace std ;

int main ()
{
    int a , b ,x ;
    cin >> a >> b ;

    cout<< " Before interchange " << endl;
    cout<< " a = " << a <<  " b = " << b << endl;

    x=a;
    a=b;
    b=x;

    cout<< " After interchange " << endl;
    cout<< " a = " << a <<  " b = " << b;

    return 0;
}

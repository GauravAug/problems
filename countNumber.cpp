#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many numbers you want to input";
    cin>> n;
    int num;
    int count_positive=0,count_negative=0,count_zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num>0)
        {
            count_positive++;
        }
        else if(num<0)
        {
            count_negative++;
        }
        else
        {
            count_zero++;
        }
    }
    cout<<"count positive "<<count_positive<<"count negative "<<count_negative<<"count zero "<<count_zero;

    return 0;
}

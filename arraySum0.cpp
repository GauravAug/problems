#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    int input ;
    int index=0;

    // take input and fill array
    for(int i=0;i<n; i++)
    {
        cin >> input;
        arr[index] = input;
        index++;
    }

    // now right code to execute the logic to find pair of two numbers for which sum is 0


    for(int i=0;i<n;i++)
    for(int j=1;j<n;j++)
    {
        if(arr[i]+arr[j]==0)
        {
            cout<<"sum is zero"<<endl ;
            return 0;
        }
        else
        {
            cout<<" array has no sum zero"<<endl;
        }
    }

    return 0;
}

#include<iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    int input;
    int index=0;

    for(int i=0;i<n;i++)
    {
        cin >> input;
        arr[index] = input;
        index++;
    }

    // print the min value of the array;
    int minValue = arr[0];
    int maxValue = arr[0];
    float sum = arr[0];
    for(int i=1;i<n;i++)
    {

        if(arr[i] < minValue)
        {

            minValue = arr[i];
        }

        if(arr[i] > maxValue)
        {

            maxValue = arr[i];
        }
        sum += arr[i];
    }

    cout<<"Min value of array is "<<minValue<<endl;

    cout<<"Max value of the array is "<<maxValue<<endl;
    float avg = sum/n;

    cout<<"Avg is "<<avg<<endl;
    return 0;
}

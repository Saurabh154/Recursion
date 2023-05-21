#include<iostream>
using namespace std;

void print(int *arr , int s)
{
    for (int i = 0; i < s; i++)
    {
        /* code */
        cout<<arr[i];
    }
    cout<<endl;
    
}

int getSum(int *arr , int size)
{
    print(arr , size);
    //Base Case
    if(size == 0)
    return 0;

    if(size == 1)
    return arr[0];

    int remaingPart = getSum(arr+1 , size-1);
    int ans = arr[0] + remaingPart;
    return ans;
}

int main()
{
    int ar[]={2,4,5,6,4};
    int size = 5;

    int ans = getSum(ar , size);

    cout<<"Sum is :"<<ans;
}

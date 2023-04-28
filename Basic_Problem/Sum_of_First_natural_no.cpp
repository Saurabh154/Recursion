//Sum of N natural numbers 

#include<iostream>
using namespace std;

int Sum(int n){
    //int sum=0;
    if(n==0)
    return 0;
    else 
    return Sum(n-1)+n;
    
}
int main()
{
    int n;
    cout<<"Enter value : ";
    cin>>n;
    cout<<"Sum Upto "<<n<<" is : "<<Sum(n);
    return 0;
}
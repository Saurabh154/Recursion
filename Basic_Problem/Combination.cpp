#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    return n*fact(n-1);
}
int nCr_recursion(int n , int r)
{
    //Base case
    if(r==0 || r==n){
        return 1;
    }

    //Recursion
    return nCr_recursion(n-1 , r-1) + nCr_recursion(n-1 , r);
    
}

int nCr_Iteration(int n , int r)
{
    int num, den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}
int main()
{
    int n,r;
    cout<<"Enter value of n and c : ";
    cin>>n>>r;
    cout<<"Combination By Iteration i.e : "<<n<<"C"<<r<<" is "<<nCr_Iteration(n,r);
    cout<<"\nCombination By Recursion i.e : "<<n<<"C"<<r<<" is "<<nCr_recursion(n,r);
    return 0;
}
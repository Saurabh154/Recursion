//Power Function 

#include<iostream>
using namespace std;

int pow(int base, int power){
    if(power==0)
    return 0;
    else 
    return pow(base,power-1)*base;    
}
int main()
{
    int b,p;
    cout<<"Enter value of Base : ";
    cin>>b;

    cout<<"Enter value of Power : ";
    cin>>p;

    cout<<b<<" Power "<<p<<" is :"<<pow(b,p);
    return 0;
}
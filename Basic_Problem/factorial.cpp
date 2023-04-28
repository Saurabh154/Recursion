//Factorial of N 
#include<iostream>
using namespace std;

int  factorial(int num){
    if(num==0)
    return 1;

    //else if(num>0)
    //{
       return  num*factorial(num-1);
        
    //}
    //return 0;
}
int main(){
    int n;
    cout<<"Enter number to calculate factorial : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n);
    return 0;
}
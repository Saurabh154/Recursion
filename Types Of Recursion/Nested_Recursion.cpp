//Nested Recursion 

#include<iostream>
using namespace std;

int fun(int A)
{
    if(A>100)
    {
        return A-10;
    }
    else{
        return fun(fun(A+11));
    }
}
int main(){
    cout<<fun(95);
    return 0;
}
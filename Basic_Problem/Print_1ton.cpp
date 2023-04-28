#include<iostream>
using namespace std;

//function print 1 to limit
//Head Recursion
void print_1_to_n(int num){
    if(num>0){
        print_1_to_n(num-1); 
        cout<<num<<"\t"; //print value in returing time
    }
}
//function print n to 1
//Tail Recursion
void print_n_to_1(int num){
    if(num>0){
        cout<<num<<"\t"; //first print then call the function
        print_n_to_1(num-1); 
    }
}

void test(int n)
{
    if(n>0)
    {
        cout<<n;
        test(n-1);
        test(n-1);
    }
}
int main()
{
    int n;
   /* cout<<"Enter limit upto print: ";
    cin>>n;
    print_1_to_n(n);
    cout<<endl;
    print_n_to_1(n);

    cout<<endl;*/
    test(3);
    return 0;

}
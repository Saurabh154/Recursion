#include<iostream>
using namespace std;
/*void swap( int i , int j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
}*/
void Reverse_String(string &str , int i , int j)
{
    cout<< " call recieved for "<< str <<endl;
    //Base case
    if(i>j)
        return ;
    swap(str[i] , str[j]);
    i++;
    j--;
    //Recursive call
    Reverse_String(str,i,j);

}
int main()
{
    string name = "abcdef";
    
    Reverse_String(name , 0 , name.length()-1 );

    cout<<"Reverse is : "<<name;

    return 0;
}
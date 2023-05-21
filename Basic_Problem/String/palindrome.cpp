#include<iostream>
using namespace std;
/* Approach 1
   T.C - O(N)
*/
/*void Reverse_String(string &str , int i , int j)
{
    //cout<< " call recieved for "<< str <<endl;
    string temp = str;
    //Base case
    if(i>j)
        return ;
    swap(str[i] , str[j]);
    i++;
    j--;
    //Recursive call
    Reverse_String(str,i,j); 
}*/

/* Approach 2 
   T.C - O(1)
*/
void Reverse_String(string &str , int i , int j)
{
    //cout<< " call recieved for "<< str <<endl;
    string temp = str;
    //Base case
    if(i>j)
        return ;
    swap(str[i] , str[j]);
    if(i == j){
        i++;
        j--;
        Reverse_String(str,i,j); 
    }
    //Recursive call
    
}
int main()
{
    string name = "fgsergjh";
    string temp = name;
    Reverse_String(name , 0 , name.length()-1 );
    if(name == temp)
    {
        cout<<"Palindrome!!";
    }
    else{
        cout<<"Not Palindrome!!";
    }


    return 0;
}
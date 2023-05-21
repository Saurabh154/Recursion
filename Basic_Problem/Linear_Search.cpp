#include<iostream>
using namespace std;

bool LinearSearch(int *arr , int size , int key)
{
    // Base Case
    if(size == 0)
       return false;

    if(arr[0] == key)
       return true;
    else{
        bool remainPart = LinearSearch(arr+1 , size-1 , key);
        return remainPart;
    }

    
}
int main()
{
   int arr[] = {2,10,5,6,3,7,5};
   int n = sizeof(arr)/sizeof(arr[0]);
   int key = 9;
   bool ans = LinearSearch(arr , n , key); 

   if(ans)
   {
      cout<<"Found!!";
   } 
   else{
      cout<<"Not Found!!";
   }

} 


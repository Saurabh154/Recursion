#include<iostream>
using namespace std;

void print(int arr[] , int s , int e)
{
    for(int i=0 ;i<=e ; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

bool BinarySearch(int *arr , int start , int end , int key)
{
    cout<<endl;
    print(arr,start,end);
    // Base Case

    // element nor found
    if (start > end)
        return false;
    
    int mid = start + (end-start)/2;
 
    // element found
    if(arr[mid] == key)
        return true;

    if(arr[mid] < key){
        return BinarySearch(arr , mid+1 , end , key);
    }
    else{
        BinarySearch(arr , start , mid-1 , key);
    }
    
    

    
}
int main()
{
   int arr[] = {2,10,5,6,3,7,5};
   int n = sizeof(arr)/sizeof(arr[0]);
   int key = 2;
   bool ans = BinarySearch(arr , 0 , 6  , key); 

   if(ans)
   {
      cout<<"Found!!";
   } 
   else{
      cout<<"Not Found!!";
   }

} 


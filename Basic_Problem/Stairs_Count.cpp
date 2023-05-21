#include<iostream>
using namespace std;

int StairCount(int nStairs)
{
    if(nStairs == 0)
    {
        return 1;
    }
    if(nStairs<0)
    {
        return 0;
    }
    
    return StairCount(nStairs-1 + nStairs-2); 

}

int main()
{
    cout<<StairCount(5);
    return 0;
}
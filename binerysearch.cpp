#include<iostream> 
 using namespace std;
 int main ()
 {
    int arr [29];
    cin>>arr;
 }
 
 {
    int lo = 0, hi = input.size() - 1;
    int ans = -1;
    while(lo <= hi )
    {
        int mid = lo + (hi-lo|)/2;
        if(input [mid] == target){
            ans = mid;
            hi = mid - 1;
        }
        else if (input[mid] > target)
        {
            int hi = [mid] - 1;
        }
        else{
            int lo = [mid] + 1;
        }
    }
    return ans;
 }
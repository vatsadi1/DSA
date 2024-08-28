#include<iostream> 
 using namespace std;
int main()
{
    int array[]={1,2,3,4};
    cout<<sizeof(array)<<endl;       //to find the size of array
     cout<<sizeof(array)/sizeof(array[0])<<endl;    // to find number of element


     int array2[4];         //if we try to transver array without initialize we get garbag value as aa output  
     cout<<array2[0]<<endl;
     cout<<array2[1]<<endl;
     cout<<array2[2]<<endl;
     cout<<array2[3]<<endl;
     
return 0;
}
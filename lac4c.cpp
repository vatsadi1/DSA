#include<iostream> 

 using namespace std;
int main()
{
    int num;
    
    cout<<"enter the number";
        cin>>num;

        if(num%2==0)
        {
            cout<<"number is even";
        }
        else if(num%2==1)
        {
            cout<<"number is odd";

        }
        else
        {
            cout<<"zero";
        }


return 0;
}
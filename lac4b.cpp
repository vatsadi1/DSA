//number is positive or negative
#include<iostream> 
 using namespace std;
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    if(num>0)
    {
      cout<<"positive number";  

    }
    else if (num=0)
    {
        cout<<"negative number";
    }
    else  
{
        cout<<"nor negative nor positive";
    }
return 0;
}
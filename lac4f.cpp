#include<iostream> 
 using namespace std;
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    for(int i=1;i<=10;i++)
{
    cout<<num<< "x"<<i<<"="<<i*num<<endl;
}
return 0;
}
# include<iostream>
using namespace std;
void incrementby1(int & n)
{
    n++;
}
 int main ()
 {
    int n;
    cin>>n;
    incrementby1(n);
    cout<<"n:"<<n<<endl;
 }
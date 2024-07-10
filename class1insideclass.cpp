#include <iostream>
#include <conio.h>
using namespace std;
class student
{
public:
    int roll_no;
    char name[20];
    char branch[20];
    void getdata()
    {
        cin >> roll_no >> name >> branch;
    }
    void putdata()
    {
        cout << roll_no  <<endl
             << name <<endl
             << branch;
    }
};
int main()
{
     
    int n=0;
     student s1[5];
  while (n<5)
  {
        s1[n].getdata();
     n++;
  }
    while (n<5)
  {
        s1[n].putdata();
     n++;
  }

        
     
    return 0;
}
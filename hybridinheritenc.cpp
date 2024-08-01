# include<iostream>
#include<conio.h>
using namespace std;
class student 
{
    public:
    int rollno;
    char name[20];
    void getdata ()
    {
        cout<<"enter the roll number of the student"<<endl;
        cin>>rollno;
        cout<<"enter the name of yhe student"<<endl;
        cin>>name;
    }
    void putdata()
    {
        cout<<rollno<<name;
    }
};
class acedmics 
{
    public:
    char branchname[20];
    char hodname[20];
    void agetdata ()
        {
        
            cout<<"enter course name"<<endl;
            cin>>branchname; 
            cout<<"enter the name of the Hod"<<endl;
            cin>>hodname;
        }
        void bputdata ()
        {
            
           cout<<branchname<<hodname;
        }
};
         class deept :   public student
         {
            public:
           int fee ;
           int schlorship;
           void cgetdata()
           { 
            getdata();           
            cout<<"enter the fee amount";
            cin >> fee;
            cout<<"enter the amount of the schlorship get ";
            cin>>schlorship;
           }
           void dputdata()
           {
            putdata();
            cout<<fee<<schlorship;
           }
          };
          class hostel : public acedmics,public deept
          {
            public :
            int roomno;
            void egetdata()
            {
                agetdata();
                cgetdata();
                cin>>roomno;
            }
            void fputdata()
            {
                bputdata();
                dputdata();
                cout<<"enter room no"<<roomno;
            }
          };

int main()
{
    hostel h1;
    h1.egetdata();
    h1.fputdata();
    
    getch ();
}
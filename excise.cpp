 #include<iostream>
 using namespace std ;
   int  main ()
 {
    int num;
  cout<<"enter the value of the number whose multipication table is to be printed "<<endl;
  cin>>num;
   
  for (int i = 0; i < 10; i++)
  {
    cout<<num<<" x "<<i+1<< "="<<(i+1)*num<< endl;
  }
  
  return 0 ;  
 }
  
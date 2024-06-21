# include<iostream>
#include<vector>
using namespace std;
 void printvector(vector<int>&v){
    // int size= v.size()-1;
    for(int i=0;i<v.size();i++){
        cout<<"print the vector"<<v[i]<<endl;
    }
    cout<<endl;
 }
 void bubblesort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            swap(v[j],v[j+1]);

            }
        }
    }
 
int main(){
    vector<int>v={5,3,0,-1,33,56,4};

    bubblesort(v);
    print(vector(v));
    return 0;

}
//#include<iostream>
//using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}
 //OR ( || ) - If EITHER or BOTH sides of the operator is true, the result will be true. AND ( && ) - If BOTH and ONLY BOTH sides of the operator are true, the result will be true. Otherwise, it will be false.

  
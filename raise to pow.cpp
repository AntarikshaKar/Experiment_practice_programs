#include<iostream>
using namespace std;

int raise2pow(int pow1, int num1);

int main(){
int pow1,num1;

cout<<"please enter the power value"<<endl;
cin>>pow1;
cout<<"please enter the number";
cin>>num1;

cout<<"the final value is = "<<raise2pow(pow1,num1);
return 0;
}
int raise2pow(int pow1, int num1){
int res=1;
for (int i=0;i<pow1;i++){
    res*=num1;
}
return res;
}

#include <iostream>
#include<string>
int num_digit(int a);

int main(){
std::string str;
int sqdnumber, sqdNumber_result=0;
std::cout<<"Enter the sqdnumber\n";
std::cin>>sqdnumber;
int x=num_digit(sqdnumber);
std::cout<<"The number of digits is=\n"<<x;

//now conversion to string
str= std::to_string(sqdnumber);
for (int i=0;i<x;i++){
	char a= str[i];
	int c=int (a)- 48;
	int sqr=c*c;

	sqdNumber_result+=sqr;
}

std::cout<<"The sum of square is = \n"<<sqdNumber_result;

   return 0;
}



int num_digit(int a){
int n=0;
float x=float(a);
while(x>1){
x=x/10;
n+=1;

}
return n;
}






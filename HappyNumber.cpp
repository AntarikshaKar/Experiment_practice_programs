#include <iostream>
#include<string>
//Function declaration

int num_digit(int a);
int sqrofnum(int sqdnumber, int sqdNumber_result, int x);
int happy_num_detect(int sqdnumber);

//main
int main(){
int sqdnumber,z=0;
std::cout<<"Enter the number\n";
std::cin>>sqdnumber;




z=happy_num_detect(sqdnumber);
if (z==1){
	std::cout<<"Its a happy number\n";
	std::cout<<"The sum of square is = \n"<<z;
}
	else if (z!=1){
		std::cout<<"Its not happy number\n";
		std::cout<<"The sum of square is = \n"<<z;

}


   return 0;
}






//Functions


int num_digit(int a){
int n=0;
float x=float(a);
while(x>1){
x=x/10;
n+=1;

}
return n;
}

int sqrofnum(int sqdnumber, int sqdNumber_result, int x){
	std::string str;
	sqdNumber_result=0;
	//now conversion to string
	str= std::to_string(sqdnumber);
	for (int i=0;i<x;i++){
		char a= str[i];
		int c=int (a)- 48;
		int sqr=c*c;

		sqdNumber_result+=sqr;
	}
return sqdNumber_result;
}

int happy_num_detect(int sqdnumber){
int cycle=1;
int x=0,z=0,sqdNumber_result=0;
    x=num_digit(sqdnumber);
    z=sqrofnum(sqdnumber,sqdNumber_result, x);


	while(1){
	x=num_digit(z);
	z=sqrofnum(z,sqdNumber_result, x);
	cycle+=1;
	if ((cycle==10)||z==1){
		break;
	}

	}
	return (z);
}



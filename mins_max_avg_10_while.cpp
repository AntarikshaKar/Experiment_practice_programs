
#include <iostream>

int main() {

int n,i=0,sum,max=0,min=1000;
std::cout<<"Enter the number of students(max 10)\n";
std::cin>>n;
int a[10];

std::cout<<"Enter the elements\n";

while(a[i-1]!=-1000){
	std::cin>>a[i];

//array calculations
if (a[i]>max){
			max=a[i];
		}
	if (a[i]<=min){
			min=a[i];
		}
     sum+=a[i];
i+=1;
}

float avg=sum/n;
std::cout<<"The avg is =\n" <<avg<<"The min is = \n"<<min<<"The max is = \n"<<max;


	return 0;
}

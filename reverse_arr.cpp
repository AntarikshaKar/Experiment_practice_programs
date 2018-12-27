//reverse an array
//Author : Antariksha Kar
//Date: 12/26/2018
//version: v.1
#include<iostream>


int main(){
 int a[20],i,n;
 std::cout<<"Enter the elements of array(<20)\n";
 std::cin>>n;
 for (i=0;i<n;i++){
 std::cin>>a[i];
 }
int temp=0;
i=0;
 while(1){

	 temp=a[n-i-1];
	 a[n-i-1]= a[i];
	 a[i]=temp;
	 i+=1;
	 if ((n%2!=0)&&(i==((n-1)/2))){
		 break;

	 }
	 if ((n%2==0)&&(i==(n/2))){
			 break;

		 }
 }

std::cout<<"The  reverse array is :\n";

for (i=0;i<n;i++){
 std::cout<<a[i]<<"\t";
 }

return 0;
}
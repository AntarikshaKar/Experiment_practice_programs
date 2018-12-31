//insertion sort
//Author : Antariksha Kar
//Date: 12/31/2018
//version: v.1
#include<iostream>
int main(){

int a[5];
int i,j,key;
std::cout<<"Enter the elements \n";
for(i=0;i<5;i++){
std::cin>>a[i];
}

//sorting algo
for (j=1;j<5;j++){

i=j-1;

key=a[j];


while((i>=0)&&(a[i]>key)){

a[i+1]=a[i];
i--;
a[i+1]=key;
}


}

std::cout<<"The sorted array is \n";

for(i=0;i<5;i++){
std::cout<<"\n"<<a[i];
}
	return 0;
}

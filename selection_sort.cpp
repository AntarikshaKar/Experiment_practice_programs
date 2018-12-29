//selection sort of  an array
//Author : Antariksha Kar
//Date: 12/27/2018
//version: v.1
#include<iostream>

int max_index(int a[],int top,int n);
int swap(int a[],int top,int max_ind,int n);


int main(){
int a[20],top=0,max_ind,n;
std::cout<<"Enter the size of array\n";
std::cin>>n;
std::cout<<"Enter the elements of array\n";

for(int i=0;i<n;i++){
	std::cin>>a[i];
}

for (top=0;top<n;top++){

	max_ind= max_index(a,top,n);
	swap(a,top,max_ind,n);
}
std::cout<<"The sorted array is = \n";
for(int i=0;i<n;i++){
	std::cout<<a[i]<<"\n";
}
return 0;
}


int max_index(int a[],int top,int n){

	int max=0,max_ind,i;


	for (i=top;i<n;i++){
		if(a[i]>max){
			max=a[i];
			max_ind=i;
		}
	}
	return max_ind;
}

int swap(int a[],int top,int max_ind,int n){
	int temp;
temp=a[top];
a[top]=a[max_ind];
a[max_ind]=temp;
	return 0;
	}


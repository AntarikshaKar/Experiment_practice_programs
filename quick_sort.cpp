//quick sort of  an array
//Author : Antariksha Kar
//Date: 12/29/2018
//version: v.1
#include<iostream>

int partition(int a[], int left, int right,int pivot);
void quick_sort(int a[],int left,int right);


int main(){

int a[100],n;
std::cout<<"Enter the number of elements\n";
std::cin>>n;
for(int i=0;i<n;i++){
	std::cin>>a[i];
}

quick_sort(a,0,n-1);
std::cout<<"\nThe elements are =";


for(int i=0;i<n;i++){
	std::cout<<"\n"<<a[i];
}
return 0;

}

int partition(int a[], int left, int right, int pivot){
while(left<=right){

while(a[left]<pivot){
	left++;
}

while(a[right]>pivot){
	right--;
}

int temp;
if(left<=right){

	temp=a[left];
		a[left]=a[right];
		a[right]=temp;
	left++;
	right--;
}
}

	return left;
}
void quick_sort(int a[], int left, int right){
if(left<right){
int pivot=a[(left+((right-left)/2))];
int index=partition(a,left,right,pivot);

	quick_sort(a,left, index-1);
	quick_sort(a,index,right);
}

}


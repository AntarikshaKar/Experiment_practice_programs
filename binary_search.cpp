//binary search of  an array
//Author : Antariksha Kar
//Date: 12/29/2018
//version: v.1
#include<iostream>

int partition(int a[], int left, int right,int pivot);
void quick_sort(int a[],int left,int right);
int binary_search(int a[], int c,int top, int last);


int main(){

int a[100],n,c;
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
int top=0;
int last=n-1;
std::cout<<"\nEnter the element to be searched\n";
std::cin>>c;
int outcome=binary_search(a,c,top,last);
std::cout<<outcome;

if(outcome){
	std::cout<<"Congrats Element found\n";

}
else if(!outcome){
	std::cout<<"Sorry :) Element not found\n";
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

int binary_search(int a[], int c,int top, int last){
//check if array comparison has only one element left
//And whether the query element has been found or not




int mid=top+((last-top)/2);
if (last==top){
	if(a[mid]==c){
		return true;
	}
	else if(a[mid]!=c){
		return false;
	}

}
if(a[mid]==c){
		return true;
	}
else if (a[mid]>c){
		return binary_search(a,c,top,mid-1);
		}
else if (a[mid]<c){
		return binary_search(a,c,mid+1,last);
			}


return -1;
}




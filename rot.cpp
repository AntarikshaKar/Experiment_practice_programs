//rotate one by one clockwise
#include<iostream>

void rotate(int a[],int len,int d){

int temp=0;
	for(int i=0;i<d;i++){
		temp=a[0];

		for (int j=1;j<len;j++){
			a[j-1]=a[j];
		}
		a[len-1]=temp;
	}
}

int main(){
int n=5;
int a[]={2,3,4,5,6};
int d=4;
rotate(a,n,d);

for(int i=0;i<5;i++){
	std::cout<<a[i]<<"\n";

}
	return 0;
}



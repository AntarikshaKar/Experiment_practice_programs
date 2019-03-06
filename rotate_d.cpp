#include<iostream>


void rotate(int a[],int d,int kc);
int main(){

int a[]={2,3,4,5,6};
int d=3;
int kc=sizeof(a)/sizeof(a[0]);


rotate(a,d,kc);

	return 0;
}


void rotate(int a[],int d, int kc){
int size_on=(sizeof(a[kc])/sizeof(a[0]));
int temp;
for(int i=0; i < d;i++)
{

temp=a[0];
for(int j=0; j < size_on;j++){

	a[j]=a[j+1];

   std::cout<<a[j];

}
a[(sizeof(a[kc])/sizeof(a[0]))-1]=temp;

}

for (int i = 0; i <kc; i++)
{

std::cout<<a[i]<<"\n";
}


}


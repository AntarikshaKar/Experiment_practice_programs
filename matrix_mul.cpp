//matrix multiplication program
//Author : Antariksha Kar
//Date: 12/25/2018
//version: v.1
#include<iostream>


int main(){

int a[100][100],b[100][100],c[100][100],m,n,p;
std::cout<<"Enter the dimensions of the two matrices \n";
std::cout<<"the first\n";
std::cin>>m>>n;
std::cout<<"the second\n";
std::cin>>p;

//matrix multiplication
std::cout<<"Enter the elements of matrix a\n";
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
		std::cin>>a[i][j];
		}
	}
	std::cout<<"Enter the elements of matrix b\n";

	for (int i=0;i<n;i++){
		for (int j=0;j<p;j++){
		std::cin>>b[i][j];
		}
	}
	std::cout<<"Printing the matrices\n";
	for (int i=0;i<m;i++){
		std::cout<<"\n";
		for (int j=0;j<n;j++){
		std::cout<<a[i][j];
		}
	}
	std::cout<<"\n";
	for (int i=0;i<n;i++){
		std::cout<<"\n";
		for (int j=0;j<p;j++){
		std::cout<<b[i][j];
		}
	}

//matrix multiplication
		std::cout<<"\nmultiplication begins\n";
		for (int i=0;i<m;i++){
			for (int j=0;j<p;j++){
				c[i][j]=0;
				int k=0;
			while(k!=n){

				c[i][j]+=a[i][k]*b[k][j];
				k+=1;
			}

			}
			}

		std::cout<<"the resultant matrix is\n";

		for (int i=0;i<m;i++){
			std::cout<<"\n";
				for (int j=0;j<p;j++){
					std::cout<<c[i][j]<<"\t";
					}

					}

return 0;

}







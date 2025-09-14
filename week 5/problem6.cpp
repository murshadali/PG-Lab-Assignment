/*6# Write a C++ program to perform the following: 
a. Addition of two matrices 
b. Multiplication of two matrices */

#include<iostream>
using namespace std;
int main()
{
	int array1[3][3], array2[3][3], i, j, sum_matrix[3][3], mul_matrix[3][3];

	cout<<"Enter the First Matrix(3*3) Elements for Addtion:"<<endl; // input first matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>array1[i][j];
		}
	}
	
	cout<<"Enter the Second Matrix(3*3) Elements for Addtion:"<<endl; // input second matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>array2[i][j];
		}
	}
	

	
	for(i=0;i<3;i++) // addition both matrices
	{ 
		for(j=0;j<3;j++)
		{
			sum_matrix[i][j]=(array1[i][j]+array2[i][j]);
		}
	}
	cout<< "sum:" <<endl;
	for(i=0;i<3;i++) // printign sum matrix
	{ 
		for(j=0;j<3;j++)
		{
			cout<<sum_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	// assigning 0;
		for(i=0;i<3;i++) // printign multiplication matrix
	{ 
		for(j=0;j<3;j++)
		{
			mul_matrix[i][j]=0;
		}
	}
	// Multiplication
		for(i=0;i<3;i++)
	{ 
		for(j=0;j<3;j++)
		{
		   for(int k=0; k<3; k++){
		   	mul_matrix[i][j] += array1[i][k]*array2[k][j];
		   }
		}
		cout<<endl;
	}
	cout<< "Multiplication: "<<endl;
	for(i=0;i<3;i++) // printign multiplication matrix
	{ 
		for(j=0;j<3;j++)
		{
			cout<<mul_matrix[i][j]<<" ";
		}
		cout<<endl;
	}					
} 


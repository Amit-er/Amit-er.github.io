//Sorting of element in Array in C **BUBBLE SORTING**
#include<stdio.h>
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
void arr_rotation(int arr[],int n)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	
	}
	
}
int main()
{
	int arr[5]={33,22,11,55,44};
	int n=5;
	printf("Before Rotation - \n");
	display(arr,n); //Printing Array
	arr_rotation(arr,n);
	printf("\nAfter Rotation - \n");
	display(arr,n);//Printing Array
	
	
	return 0;
}


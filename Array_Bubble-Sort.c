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
void arr_bubblesort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
}
int main()
{
	int arr[5]={33,22,11,55,44};
	int n=5;
	printf("Before Sorting - \n");
	display(arr,n); //Printing Array
	arr_bubblesort(arr,n);
	printf("\nAfter Sorting - \n");
	display(arr,n);//Printing Array
	
	
	return 0;
}


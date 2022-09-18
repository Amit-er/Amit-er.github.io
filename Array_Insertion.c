//Instertion of element in Array in C 
#include<stdio.h>
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
void arr_insertion(int arr[],int *n,int index,int val)
{
	int i;
	for(i=*n-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=val;
	*n=*n+1;
}
int main()
{
	int arr[6]={11,22,33,44,55};
	int n=5;
	int index=2;//Array index which you want to Insertion.
	int value=77;
	printf("Before Insertion - \n");
	display(arr,n); //Printing Array Before Insertion..
	arr_insertion(arr,&n,index,value);
	printf("\nAfter Insertion - \n");
	display(arr,n); //Printing Array After Insertion..
	return 0;
}


//Deletion of element from Array in C 
#include<stdio.h>
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
void arr_deletion(int arr[],int *n,int index)
{
	int i;
	for(i=index;i<*n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	*n=*n-1;
}
int main()
{
	int arr[5]={11,22,33,44,55};
	int n=5;
	int index=2;//Array index which you want to delete.
	printf("Before Deletion - \n");
	display(arr,n); //Printing Array Before Deletion..
	arr_deletion(arr,&n,index);
	printf("\nAfter Deletion - \n");
	display(arr,n); //Printing Array After Deletion..
	return 0;
}


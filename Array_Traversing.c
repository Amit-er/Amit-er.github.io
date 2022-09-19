//Deletion of element from Array in C 
#include<stdio.h>
void arr_traversing(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
int main()
{
	int arr[5]={11,22,33,44,55};
	int n=5;
	arr_traversing(arr,n);
	return 0;
}


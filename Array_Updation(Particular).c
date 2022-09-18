//Updation of element in Array in C
#include<stdio.h>
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
void arr_rotation(int arr[],int index)
{	
	arr[index]=arr[index]+5;		
}
int main()
{
	int arr[5]={33,22,11,55,44};
	int n=5;
	int index=3;//index which you want to update.
	printf("Before Updation- \n");
	display(arr,n); //Printing Array
	arr_rotation(arr,index);
	printf("\nAfter Updation- \n");
	display(arr,n);//Printing Array
	
	
	return 0;
}


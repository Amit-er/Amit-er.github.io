//Seaching of element in Array in C **LINEAR SEARCH**
#include<stdio.h>
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
int arr_linearsearch(int arr[],int n,int element)
{
	int i,index=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			index=i;
			break;
		}	
	}
	return index;
}
int main()
{
	int arr[5]={11,22,33,44,55};
	int n=5;
	int index;//Array index in which element is found
	int element=77;//Elelment which you want to search
	printf("Before Deletion - \n");
	display(arr,n); //Printing Array
	index=arr_linearsearch(arr,n,element);
	if(index==-1)
	{
		printf("\nNot Found in Array");
	}
	else
	{
		printf("\nElement found at %d index in Array",index);
	}
	return 0;
}


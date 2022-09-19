//Seaching of element in Array in C **BINARY SEARCH**
#include<stdio.h>
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
int arr_binarysearch(int arr[],int n,int element)
{
	int low=0,index=-1,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==element)
		{
			index=mid;
			break;
		}
		else if(arr[mid]<element)
			low=mid+1;
		else
			high=mid-1;
	}
	return index;
}
int main()
{
	int arr[5]={11,22,33,44,55};
	int n=5;
	int index;//Array index in which element is found
	int element=77;//Elelment which you want to search
	printf("Array Elements Are- \n");
	display(arr,n); //Printing Array
	index=arr_binarysearch(arr,n,element);
	if(index==-1)
		printf("\nNot Found in Array");
	else
		printf("\nElement found at %d index in Array",index);
	return 0;
}


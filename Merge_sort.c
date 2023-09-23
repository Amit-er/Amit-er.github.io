#include <stdio.h>
void merge(int arr[], int low, int mid, int high)
{

    int l1 = mid - low + 1;
    int l2 = high - mid;
    int L[l1], M[l2];

    for (int i = 0; i < l1; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < l2; j++)
        M[j] = arr[mid + 1 + j];

    int i=0, j=0, k=low;
    while (i < l1 && j < l2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
//Remaining Elements Loop
    while (i < l1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < l2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >=high)
        return ;

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{
    int arr[] = {20,14,5,21,33,11,10},i;
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    printf("Sorted array: \n");
    for(i=0; i<size; i++) {
        printf("%d ",arr[i]);
    }
}

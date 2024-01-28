#include <stdio.h>
#include <stdlib.h>

void printArr(int arr[], int len) // to print an array
{
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void modify(const int arr[], int len) //using const keyword to avoid any change in original array
{
    int *brr = malloc(len * sizeof(int)); //creating a new copy of original array
    if (brr == NULL)
    {
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++)
    {
        brr[i] = arr[i] * 2;
    }

    printf("Inside modify(),every element of array is doubled:");
    printArr(brr, len);

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Inside main(), Original array:");
    printArr(arr, len);

    modify(arr, len);
    printf("Inside main(), After Calling modify():");
    printArr(arr, len);

    return 0;
}



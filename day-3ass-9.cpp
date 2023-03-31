#include <stdio.h>
#define SIZE 100 
int main()
{
    int arr1[SIZE];
    int arr2[SIZE]= {0};
    int size;
    int *arr1StartIndex = arr1;  
    int *arr2StartIndex = arr2;
    int *arr1EndIndex;
    printf("Please enter size of array(max 100): ");
    scanf("%d", &size);
    printf("Please enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
    scanf("%d", (arr1StartIndex + i));   
    }
    printf("The elements of array 1 entered by user are: \n");
    for (int k = 0; k < size; k++)
    {
        printf("Index [%d]= %d, \n",k, *arr1StartIndex);
        arr1StartIndex++;
    }
     
    arr1StartIndex = arr1; 
    arr1EndIndex = &arr1[size - 1];
     
    while(arr1StartIndex <= arr1EndIndex)
    {
        *arr2StartIndex = *arr1StartIndex;
 
        arr1StartIndex++;
        arr2StartIndex++;
    }
    arr2StartIndex = arr2;
    printf("The elements of Array2 after Copy from Array 1 are: \n");
    for (int k = 0; k < size; k++)
    {
        printf("Index [%d]= %d, \n",k, *arr2StartIndex);
        arr2StartIndex++;
    }
 
    return 0;
}

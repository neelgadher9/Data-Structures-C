// Write a program to merge two unsorted arrays.
#include <stdio.h>
void readArray(int array[], int n);
void mergeUnsortedArray(int newArray[], int array1[], int array2[], int n1, int n2);
void displayArray(int a[], int n);

void main()
{
    int n1, n2;

    printf("Enter Size O f Array1 : ");
    scanf("%d", &n1);
    printf("Enter Size O f Array2 : ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2];
    readArray(arr1, n1);
    readArray(arr2, n2);

    int newArray[n1 + n2];
    mergeUnsortedArray(newArray, arr1, arr2, n1, n2);
    displayArray(newArray, n1 + n2);
}

void readArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d] Element : ", i);
        scanf("%d", &array[i]);
    }
    printf("\n");
}

void mergeUnsortedArray(int newArray[], int array1[], int array2[], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        newArray[i] = array1[i];
    }
    for (int j = 0; j < n2; j++)
    {
        newArray[j + n1] = array2[j];
    }

    // sorting merged array
    int swap;
    for (int k = 0; k < n1 + n2; k++)
    {
        for (int l = k + 1; l < n1 + n2; l++)
        {
            if (newArray[k] > newArray[l])
            {
                swap = newArray[k];
                newArray[k] = newArray[l];
                newArray[l] = swap;
            }
        }
    }
}

void displayArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("mergedArray[%d] : %d\n", i, a[i]);
    }
}
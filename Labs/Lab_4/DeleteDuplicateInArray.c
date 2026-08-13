// Write a program to delete duplicate numbers from an array.
#include <stdio.h>
void readArray(int array[], int n);
void deleteDuplicateInArray(int array[], int n);

void main()
{
    int n;

    printf("Enter Array Size : ");
    scanf("%d", &n);
    int a[n];

    printf("\nEnter Element In Array\n");
    readArray(a, n);

    deleteDuplicateInArray(a, n);
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

void deleteDuplicateInArray(int array[], int n)
{
    int dupLocation;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (array[i] == array[k])
            {
                dupLocation = k;
                for (int j = dupLocation; j < n - 1; j++)
                {
                    array[j] = array[j + 1];
                }
                n--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }
}
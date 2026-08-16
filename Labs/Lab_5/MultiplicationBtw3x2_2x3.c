// Read two matrices, first 3x2 and second 2x3, perform multiplication operation and store result in third matrix and print it.
#include <stdio.h>
void read3x2(int array[][2]);
void read2x3(int array[][3]);
void multiplicationBtw3x2_2x3(int resultArray[][3], int array1[][2], int array2[][3]);
void display3x3(int array[][3]);

void main()
{
    int arr1[3][2], arr2[2][3], result[3][3];

    printf("Enter elements for 2x3 Matrix : \n");
    read3x2(arr1);
    printf("Enter elements for 3x2 Matrix : \n");
    read2x3(arr2);

    multiplicationBtw3x2_2x3(result, arr1, arr2);
    display3x3(result);
}

void read3x2(int array[][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Array1[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void read2x3(int array[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Array2[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void multiplicationBtw3x2_2x3(int resultArray[][3], int array1[][2], int array2[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultArray[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                resultArray[i][j] += array1[i][k] * array2[k][i];
            }
        }
    }
}

void display3x3(int array[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
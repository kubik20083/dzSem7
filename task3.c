// Задача 3. Циклический сдвиг массива вправо на 4
// Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента. 

#include <stdio.h>
#define SIZE 12

void shift(int arr[], int len);
int input(int arr[], int n);

int main(int argc, char const *argv[])
{
    printf("Enter 12 numbers: \n");
    int arrShift[SIZE];
    input(arrShift, SIZE);
    for (int i = 0; i < 4; i++)
        shift(arrShift, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", arrShift[i]);
    printf("\n");

    return 0;
}

void shift(int arr[], int len)
{
    int temp;
    temp = arr[len - 1];
    for (int i = len - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}

int input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}

// Задача 1. Среднее арифметическое чисел

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    printf("enter five numbers: \n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += arr[i];
    printf("average = %.3f", (float)sum / 5);
    return 0;
}

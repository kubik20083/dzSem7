// Задача 2. Найти минимум

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    printf("Enter five numbers: \n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    for (int i = 0; i < 5; i++)
        if(arr[i] < min)
            min = arr[i];
    printf("minimum = %d\n", min);
    return 0;
}

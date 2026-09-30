#include <stdio.h>

int main()
{
    int j;

    printf("Enter size of array: ");
    scanf("%d", &j);

    int a[j];
    int *ptr = a;

    printf("Enter elements:\n");
    for (int i = 0; i < j; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Square of each element:\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}
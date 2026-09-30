#include <stdio.h>

int main() {
    int size, largest;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter array elements:\n");

    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for(int j = 1; j < size; j++) {
        if(a[j] > largest) {
            largest = a[j];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}
/*
 * Pointer Arithmetic Demonstration
 * Shows how pointers can traverse an integer array.
 */

#include <stdio.h>

void print_array(const int *ptr, size_t length)
{
    for (size_t i = 0; i < length; i++) {
        printf("Element %zu: value = %d, address = %p\n",
               i, *(ptr + i), (const void *)(ptr + i));
    }
}

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);
    int *ptr = numbers;

    printf("Pointer arithmetic with an integer array\n");
    printf("------------------------------------------\n");
    printf("First element: %d\n", *ptr);
    printf("Third element: %d\n", *(ptr + 2));

    printf("\nTraversing the array using pointer arithmetic:\n");
    print_array(numbers, length);

    printf("\nMoving the pointer forward by one element...\n");
    ptr++;
    printf("New pointer value: %d\n", *ptr);

    printf("Moving the pointer backward by one element...\n");
    ptr--;
    printf("Pointer value again: %d\n", *ptr);

    return 0;
}

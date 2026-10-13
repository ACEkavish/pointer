#include <stdio.h>

int main() {
    // 1. Declare a normal integer variable
    int age = 25;

    // 2. Declare a pointer variable that points to an integer
    int *ptr;

    // 3. Store the memory address of 'age' in the pointer 'ptr'
    ptr = &age;

    // Display the results
    printf("Value of age: %d\n", age);
    printf("Memory address of age (&age): %p\n", (void*)&age);

    printf("\n--- Using the Pointer ---\n");
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Value reached by dereferencing ptr (*ptr): %d\n", *ptr);

    // 4. Modify the value directly through the pointer
    *ptr = 30;
    printf("\nNew value of age after modifying via pointer: %d\n", age);

    return 0;
}

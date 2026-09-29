#include <stdio.h>
#include <stdlib.h>

int global_var = 150;   // Data segment
int bss_var;            // BSS segment

int main() {

    int local_var = 30;             // Stack segment
    static int local_static = 20;   // Data segment

    int *heap_var = malloc(sizeof(int));  // Heap segment
    *heap_var = 500;

    printf(".......Variable Addresses.......\n\n");

    printf("global_var: %p (Data)\n", (void *)&global_var);
    printf("bss_var: %p (BSS)\n", (void *)&bss_var);
    printf("local_var: %p (Stack)\n", (void *)&local_var);
    printf("local_static: %p (Data)\n", (void *)&local_static);
    printf("heap_var ptr: %p (Stack - pointer)\n", (void *)&heap_var);
    printf("heap_var: %p (Heap - data)\n", (void *)heap_var);

    printf("\n------Address Difference Between Stack and Heap------\n");
    printf("Stack - Heap = %ld bytes\n", (long)((char *)&local_var - (char *)heap_var));

    free(heap_var);

    return 0;
}

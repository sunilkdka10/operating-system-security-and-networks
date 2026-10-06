#include <stdio.h>

// 1. Data Section: Initialized global variable
int data_global_var = 0x12345678;

// 2. Read-Only Data (ROData): String literal
const char *text_string_literal = "Text_Segment_Verification";

// 3. Text Section: Function code
void check_execution()
{
    printf("Executing within the text segment instruction block.\n");
}

int main()
{
    printf("Addresses:\n");

    printf("Data (Global Initialized): %p\n",
           (void *)&data_global_var);

    printf("Text String (ROData): %p\n",
           (void *)text_string_literal);

    printf("Text Code (Function): %p\n",
           (void *)&check_execution);

    check_execution();

    // Breakpoint here to inspect text and data segments
    printf("Ready for Text/Data segment inspection!\n");

    return 0;
}

#include <stdio.h>

int main()
{
    FILE *fptr;

    // Create a file on your computer (filename.txt)
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Some text");

    // Close the file
    fclose(fptr);

    return 0;
}

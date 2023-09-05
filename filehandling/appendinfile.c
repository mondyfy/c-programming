#include <stdio.h>

int main() {
  FILE *fptr;

  // Open a file in append mode
  fptr = fopen("filename.txt", "a");

  // Append some text to the file
  fprintf(fptr, "\nHi everybody!");
  
  // Close the file
  fclose(fptr);

  return 0;
}

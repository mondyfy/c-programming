#include <stdio.h>
#include <string.h>
 
int main() {
  char str1[20] = "Hello ";
  char str2[] = "Nepal!";
 
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s\n", str1);
 
  return 0;
}
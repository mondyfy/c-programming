#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello Nepal!";
  char str2[20];

  // Copy str1 to str2
  strcpy(str2, str1);

  // Print str2
  printf("%s \n", str2);
  
  return 0;
}
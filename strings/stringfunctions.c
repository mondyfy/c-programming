#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("Length is: %lu \n ", strlen(alphabet));
  printf("Size is: %lu \n ", sizeof(alphabet));
  return 0;
}
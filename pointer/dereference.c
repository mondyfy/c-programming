#include <stdio.h>

int main() {
  int myAge = 58;  // Variable declaration
  int* ptr = &myAge;  // Pointer declaration

  // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p \n", ptr);

  // Dereference: Output the value of myAge with the pointer (43)
  printf("%d \n", *ptr);
  
  return 0;
}
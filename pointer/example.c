#include <stdio.h>

int main() {
  int myAge = 43;  // An int variable
  int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

  // Output the value of myAge (43)
  printf("%d \n", myAge);

  // Output the memory address of myAge
  printf("%p \n", &myAge);

  // Output the memory address of myAge with the pointer
  printf("%p\n", ptr);

  return 0;
}
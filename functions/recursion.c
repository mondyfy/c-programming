#include <stdio.h>

int factorial(int n);

int main() {
  int result = factorial(5);
  printf("%d \n", result);
  return 0;
}

int factorial(int n) {
  if (n > 1) {
    return n*factorial(n - 1);
  } else {
    return 1;
  }
}
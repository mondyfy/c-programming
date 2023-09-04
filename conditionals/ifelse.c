#include <stdio.h>

int main() {
  int myNum = 0;
  
  if (myNum > 0) {
    printf("The value is a positive number.");
  } else if (myNum < 0) {
    printf("The value is a negative number.");
  } else {
    printf("The value is 0.");
  }
  
  return 0;
}
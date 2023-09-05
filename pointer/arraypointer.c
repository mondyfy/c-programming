#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};
    int i;
    int *ptr = myNumbers;

    for (i = 0; i < 4; i++)
    {
        printf("%p\n", &myNumbers[i]);
    }

    // Get the memory address of the myNumbers array
    printf("address of array: %p\n", myNumbers);

    // Get the value of the first element in myNumbers
    printf("%d \n", *myNumbers);

    // Get the size of the myNumbers array
    printf("size of array: %lu \n", sizeof(myNumbers));

    for (i = 0; i < 4; i++)
    {
        printf("%d \n", *(ptr + i));
    }

    // Change the value of the first element to 13
    *myNumbers = 13;

    // Change the value of the second element to 17
    *(myNumbers + 1) = 17;

    printf("after changing array of elements by pointers \n");
    for (i = 0; i < 4; i++)
    {
        printf("%d \n", *(ptr + i));
    }

    return 0;
}
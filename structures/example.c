#include <stdio.h>
#include <string.h>

// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30]; // String
};

int main()
{
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);

    // Assign a value to the string using the strcpy function
    strcpy(s1.myString, "Some text");

    // Print the value
    printf("My string: %s\n", s1.myString);

    // Create a structure variable and assign values to it
    struct myStructure s2 = {23, 'C', "Another text"};
    
    // Print values
    printf("%d %c %s \n", s2.myNum, s2.myLetter, s2.myString);

    struct myStructure s3;

    // Copy s1 values to s3
    s3 = s1;

    // Print values
    printf("%d %c %s \n", s3.myNum, s3.myLetter, s3.myString);

    // Change s3 values
    s3.myNum = 30;
    s3.myLetter = 'D';
    strcpy(s3.myString, "Something else");

    printf("%d %c %s \n", s3.myNum, s3.myLetter, s3.myString);

    return 0;
}
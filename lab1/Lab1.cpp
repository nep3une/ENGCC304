#include <stdio.h> // Corrected header: It's "stdio.h" not "stduio.h"

int main() {
    char Name[50];
    int Age = 0;

    printf("Enter your name: ");
    scanf("%s", Name); // Missing semicolon at the end of the previous line

    printf("Enter your age: ");
    scanf("%d", &Age); // Corrected: You need '&' before 'Age' when using scanf for an int

    printf("- - - - - -\n");
    printf("Hello %s \n", Name); // Corrected: You need to pass the 'Name' variable here
    printf("Age = %d\n", Age);   // Corrected: You need to pass the 'Age' variable here

    return 0; // Added: It's good practice for main to return 0 on successful execution
} // end main function
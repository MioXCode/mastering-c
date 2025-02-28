#include <stdio.h>

/**
 * Function to print greeting message with name and age
 * @param name Array of characters representing person's name
 * @param age Integer representing person's age
 */
void hello(char[], int);

/**
 * Main function - entry point of program
 * Demonstrates usage of hello() function
 * @return 0 on successful execution
 */
int main()
{
    char name[] = "Tomio"; // Name to be printed
    int age = 21;          // Age to be printed

    hello(name, age); // Call hello function with name and age

    return 0;
}

/**
 * Implementation of hello function
 * Prints greeting with provided name and age
 * @param name Array of characters containing person's name
 * @param age Integer containing person's age
 */
void hello(char name[], int age)
{
    printf("\nHello %s", name);             // Print greeting with name
    printf("\nYour are %d years old", age); // Print age
}

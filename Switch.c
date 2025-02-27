#include <stdio.h>

int main()
{
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("At least it's not an E!\n");
        break;
    case 'E':
        printf("You Failed!\n");
        break;
    default:
        printf("Please enter a valid grade!");
        break;
    }

    return 0;
}

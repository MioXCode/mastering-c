#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;

    do
    {
        printf("\nEnter a # above 0: ");
        scanf("%d", &number);

        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0);

    return 0;
}

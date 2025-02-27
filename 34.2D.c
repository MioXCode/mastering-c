#include <stdio.h>

int main()
{
    int numbers[2][3] = {{1, 2, 3}, {1, 2, 3}};

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int colums = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    printf("Rows: %d\n", rows);
    printf("Colums: %d\n", colums);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", numbers[i][j]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "Convette", "Camaro"};
    strcpy(cars[0], "Tesla");

    for (int i = 1; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}

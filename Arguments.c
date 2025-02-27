#include <stdio.h>

void birtday(char name[], int age)
{
    printf("Happy Birhday Dear %s!\n", name);
    printf("You are %d years old!\n", age);
}

int main()
{
    char name[] = "Tomio";
    int age = 17;

    birtday(name, age);
    return 0;
}

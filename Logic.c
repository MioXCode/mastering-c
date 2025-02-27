#include <stdio.h>
#include <stdbool.h>

int main()
{
    float temp = 25;
    bool suny = false;

    if (temp >= 0 && !temp <= 30 || suny)
    {
        printf("The weather is good!");
    }
    else
    {
        printf("The weather is bad!");
    }

    return 0;
}

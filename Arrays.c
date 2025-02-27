#include <stdio.h>

int main()
{
    double prices[] = {5.6, 7.5, 3.6, 9.0, 9.3, 5.4};

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}

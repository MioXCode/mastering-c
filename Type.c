#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'A';     // Single character, format specifier: %c
    char b[] = "AAA"; // String (array of chars), format specifier: %s

    float c = 3.181818f;          // 4 bytes (6-7 significant digits), format specifier: %f
    double d = 3.181818181818181; // 8 bytes (15-16 significant digits), format specifier: %lf

    bool e = true; // Boolean (1 byte), format specifier: %d (prints 1 for true, 0 for false)

    char f = 100;          // 1 byte (-128 to 127), format specifier: %d or %c
    unsigned char g = 255; // 1 byte (0 to 255), format specifier: %d or %c

    short int h = 32767;          // 2 bytes (-32,768 to 32,767), format specifier: %d
    unsigned short int i = 65535; // 2 bytes (0 to 65,535), format specifier: %u

    int j = 2147483647;           // 4 bytes (-2,147,483,648 to 2,147,483,647), format specifier: %d
    unsigned int k = 4294967295U; // 4 bytes (0 to 4,294,967,295), format specifier: %u

    long long int l = 9223372036854775807LL;            // 8 bytes (-9 quintillion to 9 quintillion), format specifier: %lld
    unsigned long long int m = 18446744073709551615ULL; // 8 bytes (0 to 18 quintillion), format specifier: %llu

    return 0;
}

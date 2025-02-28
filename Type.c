#include <stdio.h>
#include <stdbool.h>

/*
Program ini mendemonstrasikan berbagai tipe data dalam bahasa C
dan menunjukkan cara penggunaannya beserta format specifier untuk printf
*/

int main()
{
    // Tipe data karakter
    char a = 'A';     // Karakter tunggal, format specifier: %c
    char b[] = "AAA"; // String (array dari karakter), format specifier: %s

    // Tipe data floating point (desimal)
    float c = 3.181818f;          // 4 bytes (6-7 angka signifikan), format specifier: %f
    double d = 3.181818181818181; // 8 bytes (15-16 angka signifikan), format specifier: %lf

    // Tipe data boolean
    bool e = true; // Boolean (1 byte), format specifier: %d (mencetak 1 untuk true, 0 untuk false)

    // Tipe data char sebagai integer
    char f = 100;          // 1 byte (rentang: -128 sampai 127), format specifier: %d atau %c
    unsigned char g = 255; // 1 byte (rentang: 0 sampai 255), format specifier: %d atau %c

    // Tipe data integer 16-bit
    short int h = 32767;          // 2 bytes (rentang: -32.768 sampai 32.767), format specifier: %d
    unsigned short int i = 65535; // 2 bytes (rentang: 0 sampai 65.535), format specifier: %u

    // Tipe data integer 32-bit
    int j = 2147483647;           // 4 bytes (rentang: -2.147.483.648 sampai 2.147.483.647), format specifier: %d
    unsigned int k = 4294967295U; // 4 bytes (rentang: 0 sampai 4.294.967.295), format specifier: %u

    // Tipe data integer 64-bit
    long long int l = 9223372036854775807LL;            // 8 bytes (rentang: -9 kuintiliun sampai 9 kuintiliun), format specifier: %lld
    unsigned long long int m = 18446744073709551615ULL; // 8 bytes (rentang: 0 sampai 18 kuintiliun), format specifier: %llu

    return 0;
}

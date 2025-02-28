#include <stdio.h>

/**
 * Program untuk menghitung kuadrat dari sebuah bilangan
 * Program ini mendemonstrasikan penggunaan fungsi dengan return value
 */

/**
 * Fungsi untuk menghitung kuadrat dari sebuah bilangan
 * @param x bilangan yang akan dikuadratkan
 * @return hasil kuadrat dari bilangan x
 */
double square(double x)
{
    return x * x;
}

int main()
{
    // Menghitung kuadrat dari 3.14 menggunakan fungsi square
    double x = square(3.14);
    // Menampilkan hasil perhitungan
    printf("%lf", x);

    return 0;
}
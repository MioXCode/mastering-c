#include <stdio.h>

/**
 * Fungsi untuk mencari nilai maksimum dari dua bilangan
 * menggunakan operator ternary
 *
 * @param x Bilangan pertama yang akan dibandingkan
 * @param y Bilangan kedua yang akan dibandingkan
 * @return Nilai maksimum dari kedua bilangan
 */
int findMax(int x, int y)
{
    return (x > y) ? x : y; // Mengembalikan x jika x > y, jika tidak mengembalikan y
}

/**
 * Fungsi utama program
 * Mendemonstrasikan penggunaan fungsi findMax
 */
int main()
{
    int max = findMax(5, 4); // Mencari nilai maksimum antara 5 dan 4
    printf("%d", max);       // Menampilkan hasil

    return 0;
}

/**
 * Program untuk menghitung keliling dan luas lingkaran
 * Program ini meminta input jari-jari dari pengguna,
 * kemudian menghitung keliling dan luas lingkaran menggunakan rumus:
 * - Keliling = 2 * π * r
 * - Luas = π * r²
 *
 * Menggunakan konstanta M_PI dari math.h untuk nilai π yang akurat
 */

#include <stdio.h>

int main()
{
    // Deklarasi variabel untuk menyimpan jari-jari, keliling, dan luas
    double radius, circumference, area;

    // Meminta input jari-jari dari pengguna
    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    // Menghitung keliling menggunakan rumus 2πr
    circumference = 2 * 3.14 * radius;
    // Menghitung luas menggunakan rumus πr²
    area = 3.14 * radius * radius;

    // Menampilkan hasil perhitungan dengan format 2 angka desimal
    printf("\nCircumference: %.2lf", circumference);
    printf("\nArea: %.2lf\n", area);

    return 0; // Program selesai dengan sukses
}

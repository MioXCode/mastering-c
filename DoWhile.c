#include <stdio.h>

/**
 * Program untuk menjumlahkan angka positif yang dimasukkan pengguna
 * Program akan terus meminta input sampai pengguna memasukkan angka 0 atau negatif
 */
int main()
{
    // Variabel untuk menyimpan input dari pengguna
    int number = 0;
    // Variabel untuk menyimpan hasil penjumlahan
    int sum = 0;

    do
    {
        // Meminta input dari pengguna
        printf("\nEnter a # above 0: ");
        scanf("%d", &number);

        // Jika input positif, tambahkan ke sum
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0); // Loop berlanjut selama input positif

    return 0;
}

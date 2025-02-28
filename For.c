/**
 * Program untuk menampilkan angka dari 10 sampai 1 dengan pengurangan 2
 * Menggunakan perulangan for
 * Output: 10, 8, 6, 4, 2
 */

#include <stdio.h>

int main()
{
    // Perulangan for dengan i=10 sebagai nilai awal
    // Kondisi i >= 1 sebagai batas akhir
    // i-=2 sebagai pengurangan nilai i sebanyak 2 setiap iterasi
    for (int i = 10; i >= 1; i -= 2)
    {
        printf("%ld\n", i); // Mencetak nilai i
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

/**
 * Program untuk menukar nilai antara dua variabel string
 * Program ini mendemonstrasikan:
 * - Penggunaan array karakter (string)
 * - Fungsi strcpy untuk menyalin string
 * - Teknik penukaran nilai menggunakan variabel sementara
 */

int main()
{
    // Inisialisasi dua string yang akan ditukar
    char x[15] = "Water"; // String pertama
    char y[15] = "Oil";   // String kedua
    char temp[15];        // Variabel sementara untuk penukaran

    // Proses penukaran nilai menggunakan variabel temp
    strcpy(temp, x); // Simpan nilai x ke temp
    strcpy(x, y);    // Salin nilai y ke x
    strcpy(y, temp); // Salin nilai temp (nilai x awal) ke y

    // Tampilkan hasil penukaran
    printf("x = %s\n", x); // Cetak nilai x setelah penukaran
    printf("x = %s\n", y); // Cetak nilai y setelah penukaran

    return 0;
}

#include <stdio.h>

/**
 * Program untuk menampilkan pesan ulang tahun
 * Program ini memiliki fungsi birthday yang menerima nama dan umur
 * sebagai parameter untuk menampilkan ucapan selamat ulang tahun
 */

/**
 * Fungsi untuk mencetak pesan ulang tahun
 * @param name Array karakter yang berisi nama penerima ucapan
 * @param age Integer yang menyimpan umur penerima ucapan
 */
void birthday(char name[], int age)
{
    printf("Happy Birthday Dear %s!\n", name);
    printf("You are %d years old!\n", age);
}

/**
 * Fungsi utama program
 * Mendeklarasikan variabel nama dan umur
 * Memanggil fungsi birthday untuk menampilkan pesan
 */
int main()
{
    // Inisialisasi variabel nama
    char name[] = "Tomio";
    // Inisialisasi variabel umur
    int age = 17;

    // Memanggil fungsi birthday dengan parameter name dan age
    birthday(name, age);

    return 0;
}

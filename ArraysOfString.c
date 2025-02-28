/**
 * Program untuk mendemonstrasikan penggunaan array of strings dalam C
 * Program ini menyimpan nama-nama mobil dalam array 2D karakter,
 * mengganti salah satu nama, dan menampilkan semua nama mobil
 */
#include <stdio.h>
#include <string.h>

/**
 * Fungsi utama program
 * Mendeklarasikan array nama mobil, mengganti nama pertama,
 * dan menampilkan semua nama mobil
 */
int main()
{
    // Mendefinisikan array nama mobil (setiap string memiliki ruang 10 karakter)
    // Array 2D dimana setiap baris adalah string nama mobil
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // Mengganti nama mobil pertama dengan "Tesla" menggunakan strcpy
    // strcpy digunakan untuk menyalin string ke array karakter
    strcpy(cars[0], "Tesla");

    // Menghitung jumlah mobil dalam array dengan membagi ukuran total array
    // dengan ukuran satu baris array (satu nama mobil)
    int numCars = sizeof(cars) / sizeof(cars[0]);

    // Melakukan iterasi untuk mencetak semua nama mobil
    // Loop dimulai dari 0 hingga jumlah mobil - 1
    for (int i = 0; i < numCars; i++)
    {
        printf("%s\n", cars[i]); // Mencetak nama mobil diikuti baris baru
    }

    return 0; // Program selesai dengan sukses
}

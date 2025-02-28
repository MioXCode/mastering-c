/**
 * Program sederhana untuk menampilkan daftar harga
 * Program ini menunjukkan penggunaan array untuk menyimpan daftar harga
 * dan menampilkannya dengan format yang rapi
 */
#include <stdio.h>

int main()
{
    // Mendefinisikan array harga dengan 6 elemen
    // Setiap elemen berisi harga dalam format desimal
    double prices[] = {5.6, 7.5, 3.6, 9.0, 9.3, 5.4};

    // Menghitung jumlah elemen dalam array menggunakan sizeof
    // sizeof(prices) mengembalikan ukuran total array dalam bytes
    // sizeof(prices[0]) mengembalikan ukuran 1 elemen dalam bytes
    // Membagi keduanya menghasilkan jumlah elemen
    int numPrices = sizeof(prices) / sizeof(prices[0]);

    // Melakukan iterasi untuk setiap elemen array menggunakan for loop
    // %.2f akan menampilkan angka dengan 2 digit desimal
    // \n untuk membuat baris baru setelah setiap harga
    for (int i = 0; i < numPrices; i++)
    {
        printf("$%.2f\n", prices[i]);
    }

    return 0; // Program selesai dengan sukses
}

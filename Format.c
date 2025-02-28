#include <stdio.h>

int main()
{
    /**
     * Format Specifiers:
     * %c = untuk menampilkan karakter (char)
     * %s = untuk menampilkan string/teks
     * %f = untuk menampilkan bilangan desimal (float)
     * %lf = untuk menampilkan bilangan desimal presisi ganda (double)
     * %d = untuk menampilkan bilangan bulat (integer)
     */

    /**
     * Format Flags:
     * %.1 = menentukan jumlah digit desimal setelah koma (misal %.2f = 2 digit)
     * %1 = menentukan lebar minimum field (misal %8.2f = lebar 8 karakter)
     * %- = rata kiri (left align), default adalah rata kanan
     */

    // Deklarasi variabel float untuk harga barang
    float item1 = 5.75;   // Harga barang 1
    float item2 = 10.00;  // Harga barang 2
    float item3 = 100.99; // Harga barang 3

    // Menampilkan harga dengan format 8 karakter lebar dan 2 digit desimal
    printf("Item 1: $%8.2f\n", item1); // Output dengan padding kanan
    printf("Item 2: $%8.2f\n", item2); // $   10.00
    printf("Item 3: $%8.2f\n", item3); // $  100.99

    return 0;
};
/**
 * Program untuk mendemonstrasikan penggunaan pointer dalam C
 * - Pointer adalah variabel yang menyimpan alamat memori variabel lain
 * - Operator & digunakan untuk mendapatkan alamat memori
 * - Operator * digunakan untuk mendapatkan nilai yang disimpan di alamat tersebut
 */

#include <stdio.h>

/**
 * Fungsi untuk mencetak umur yang diterima sebagai pointer
 * @param _age pointer ke variabel umur yang akan dicetak
 */
void printAge(int *_age)
{
    printf("You are %d years old\n", *_age); // Perbaikan: menggunakan *_age untuk mengakses nilai
}

int main()
{
    // Inisialisasi variabel umur dan pointer
    int age = 21;     // Variabel biasa bertipe integer
    int *_age = NULL; // Pointer ke integer, diinisialisasi dengan NULL
    _age = &age;      // Pointer menyimpan alamat variabel age

    // Mencetak alamat memori
    printf("Address of age: %p\n", &age); // Alamat dari variabel age
    printf("Value of _age: %p\n", _age);  // Nilai pointer (alamat yang disimpan)

    // Mencetak ukuran memori
    printf("Size of age: %d bytes\n", sizeof(age));   // Ukuran variabel integer
    printf("Size of _age: %d bytes\n", sizeof(_age)); // Ukuran pointer

    // Mencetak nilai
    printf("Value of age: %d\n", age);              // Nilai variabel age
    printf("Value at stored address: %d\n", *_age); // Nilai yang ditunjuk pointer

    printAge(&age); // Memanggil fungsi dengan memberikan alamat age

    return 0;
}

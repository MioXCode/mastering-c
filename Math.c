#include <stdio.h>

/**
 * Program sederhana untuk mendemonstrasikan operator aritmatika dalam C
 *
 * Program ini menunjukkan:
 * 1. Penggunaan variabel integer
 * 2. Type casting dari int ke float
 * 3. Operasi pembagian
 * 4. Output menggunakan printf
 */

int main()
{
    /**
     * Operator aritmatika dalam C:
     * + ( addition ) - Menambahkan dua operand
     * - ( subtration ) - Mengurangi operand kedua dari yang pertama
     * * ( multiplication ) - Mengalikan dua operand
     * / ( division ) - Membagi operand pertama dengan yang kedua
     * % ( modulus ) - Sisa hasil pembagian
     * ++ ( increment ) - Menambah nilai operand sebesar 1
     * -- ( decrement ) - Mengurangi nilai operand sebesar 1
     */

    // Deklarasi dan inisialisasi variabel
    int x = 2; // Variabel pertama
    int y = 5; // Variabel kedua

    // Melakukan pembagian dengan type casting ke float
    int z = x / (float)y; // Hasil akan dikonversi kembali ke integer

    // Menampilkan hasil
    printf("%d", z);

    return 0; // Program selesai dengan sukses
};
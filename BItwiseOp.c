#include <stdio.h>

int main()
{
    /**
     * Program ini mendemonstrasikan penggunaan operator bitwise dalam bahasa C
     *
     * Bitwise Operators in C:
     *
     * &  = AND       (Melakukan operasi AND pada level bit)
     *                Menghasilkan 1 jika kedua bit adalah 1, selain itu 0
     *
     * |  = OR        (Melakukan operasi OR pada level bit)
     *                Menghasilkan 1 jika salah satu atau kedua bit adalah 1
     *
     * ^  = XOR       (Melakukan operasi XOR pada level bit)
     *                Menghasilkan 1 jika kedua bit berbeda, 0 jika sama
     *
     * << = Shift Left  (Menggeser bit ke kiri)
     *                  Setiap pergeseran ke kiri setara dengan perkalian 2
     *
     * >> = Shift Right (Menggeser bit ke kanan)
     *                  Setiap pergeseran ke kanan setara dengan pembagian 2
     */

    // Deklarasi dan inisialisasi variabel
    int x = 6;  // 6  = 00000110 (Representasi biner)
    int y = 12; // 12 = 00001100 (Representasi biner)
    int z = 0;  // Inisialisasi z dengan nilai 0

    // Contoh operasi Bitwise AND (&)
    // Bit akan bernilai 1 hanya jika kedua bit operand adalah 1
    // 00000110 (6)
    // & 00001100 (12)
    // ------------
    //   00000100 (4)
    z = x & y;
    printf("AND = %d\n", z); // Output: 4

    // Contoh operasi Bitwise OR (|)
    // Bit akan bernilai 1 jika salah satu atau kedua bit operand adalah 1
    // 00000110 (6)
    // | 00001100 (12)
    // ------------
    //   00001110 (14)
    z = x | y;
    printf("OR = %d\n", z); // Output: 14

    // Contoh operasi Bitwise XOR (^)
    // Bit akan bernilai 1 jika kedua bit operand berbeda
    // 00000110 (6)
    // ^ 00001100 (12)
    // ------------
    //   00001010 (10)
    z = x ^ y;
    printf("XOR = %d\n", z); // Output: 10

    // Contoh operasi Left Shift (<<)
    // Menggeser bit ke kiri sebanyak 2 posisi
    // Setiap pergeseran akan mengalikan nilai dengan 2
    // 00000110 (6) << 2
    // ------------
    // 00011000 (24)
    z = x << 2;
    printf("SHIFT LEFT = %d\n", z); // Output: 24

    // Contoh operasi Right Shift (>>)
    // Menggeser bit ke kanan sebanyak 2 posisi
    // Setiap pergeseran akan membagi nilai dengan 2
    // 00000110 (6) >> 2
    // ------------
    // 00000001 (1)
    z = x >> 2;
    printf("SHIFT RIGHT = %d\n", z); // Output: 1

    return 0;
}

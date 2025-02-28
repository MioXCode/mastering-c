#include <stdio.h>

/**
 * Program untuk mendemonstrasikan Operator Assignment Majemuk (Compound Assignment) dalam C
 * 
 * Operator assignment majemuk menggabungkan operasi aritmatika dengan assignment
 * dalam satu operator. Ini membuat kode lebih ringkas dan mudah dibaca.
 */

int main()
{
    /**
     * Compound Assignment Operators in C:
     * 
     * Operator    | Contoh  | Ekuivalen dengan
     * ------------|---------|------------------
     * +=          | a += b  | a = a + b
     * -=          | a -= b  | a = a - b  
     * *=          | a *= b  | a = a * b
     * /=          | a /= b  | a = a / b
     * %=          | a %= b  | a = a % b
     */

    // Inisialisasi variabel
    int x = 6;    // Nilai awal x
    int y = 10;   // Nilai awal y

    // Menampilkan nilai awal
    printf("Initial values: x = %d, y = %d\n\n", x, y);

    // Operasi penambahan dan assignment (+=)
    x += y; // x = x + y -> 6 + 10 = 16
    printf("x += y: %d\n", x);

    // Operasi pengurangan dan assignment (-=)
    x -= y; // x = x - y -> 16 - 10 = 6 (kembali ke nilai awal x)
    printf("x -= y: %d\n", x);

    // Operasi perkalian dan assignment (*=)
    x *= y; // x = x * y -> 6 * 10 = 60
    printf("x *= y: %d\n", x);

    // Operasi pembagian dan assignment (/=)
    x /= y; // x = x / y -> 60 / 10 = 6
    printf("x /= y: %d\n", x);

    // Operasi modulus dan assignment (%=)
    x %= y; // x = x % y -> 6 % 10 = 6
    printf("x %%= y: %d\n", x); // Menggunakan '%%' untuk mencetak '%'

    return 0;
}

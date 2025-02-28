#include <stdio.h>

/**
 * Program kalkulator sederhana yang dapat melakukan operasi aritmatika dasar
 * Operasi yang didukung: penjumlahan (+), pengurangan (-), perkalian (*), dan pembagian (/)
 * Program akan meminta input operator dan dua angka dari pengguna
 * Kemudian menampilkan hasil perhitungan
 */

int main()
{
    // Deklarasi variabel
    char operator;     // Untuk menyimpan operator aritmatika
    double num1, num2; // Untuk menyimpan dua angka yang akan dioperasikan
    double result;     // Untuk menyimpan hasil perhitungan

    // Meminta input operator dari pengguna
    printf("\nEnter an operator (+ - * /): ");
    scanf(" %c", &operator); // Space sebelum %c untuk menangani masalah newline

    // Meminta input dua angka dari pengguna
    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    // Melakukan perhitungan berdasarkan operator yang dimasukkan
    switch (operator)
    {
    case '+': // Operasi penjumlahan
        result = num1 + num2;
        printf("\nResult: %.2lf\n", result);
        break;
    case '-': // Operasi pengurangan
        result = num1 - num2;
        printf("\nResult: %.2lf\n", result);
        break;
    case '*': // Operasi perkalian
        result = num1 * num2;
        printf("\nResult: %.2lf\n", result);
        break;
    case '/':          // Operasi pembagian
        if (num2 == 0) // Cek pembagian dengan nol
        {
            printf("\nError: Division by zero is not allowed!\n");
        }
        else
        {
            result = num1 / num2;
            printf("\nResult: %.2lf\n", result);
        }
        break;
    default: // Jika operator tidak valid
        printf("\nError: '%c' is not a valid operator!\n", operator);
        break;
    }

    return 0; // Program selesai dengan sukses
}

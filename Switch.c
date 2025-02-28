/**
 * Program sederhana untuk menampilkan pesan berdasarkan nilai huruf yang dimasukkan
 * Program ini menerima input berupa huruf A-E dan menampilkan pesan yang sesuai
 * Jika input tidak valid, akan menampilkan pesan error
 */

#include <stdio.h>

int main()
{
    // Variabel untuk menyimpan nilai huruf
    char grade;

    // Meminta input nilai huruf dari user
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    // Mengecek nilai huruf menggunakan switch case
    switch (grade)
    {
    case 'A':
        printf("Perfect!\n"); // Nilai terbaik
        break;
    case 'B':
        printf("You did good!\n"); // Nilai baik
        break;
    case 'C':
        printf("You did okay!\n"); // Nilai cukup
        break;
    case 'D':
        printf("At least it's not an E!\n"); // Nilai kurang
        break;
    case 'E':
        printf("You Failed!\n"); // Nilai gagal
        break;
    default:
        printf("Please enter a valid grade!"); // Input tidak valid
        break;
    }

    return 0;
}

#include <stdio.h>

/*
Program sederhana untuk menampilkan informasi pribadi
Program ini mendeklarasikan beberapa variabel dengan tipe data berbeda
dan menampilkannya menggunakan printf
*/

int main()
{
    // Variabel yang tidak digunakan
    int x = 123;

    // Deklarasi variabel untuk menyimpan data pribadi
    int age = 17;         // Menyimpan umur
    float phi = 3.18;     // Menyimpan nilai phi
    char grade = 'A';     // Menyimpan nilai grade
    char name[] = "Niam"; // Menyimpan nama dalam array karakter

    // Menampilkan informasi menggunakan printf
    printf("Hello %s\n", name);                  // Menampilkan nama
    printf("You are %d years old\n", age);       // Menampilkan umur
    printf("Your average grade is %c\n", grade); // Menampilkan grade
    printf("Values in chi are %f\n", phi);       // Menampilkan nilai phi

    return 0; // Mengakhiri program
};
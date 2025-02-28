#include <stdio.h>

/**
 * Program untuk memeriksa kelayakan pendaftaran berdasarkan usia
 * Program akan meminta input usia dari pengguna dan memberikan
 * respons yang sesuai berdasarkan rentang usia yang dimasukkan
 * @return 0 jika program berhasil dijalankan
 */
int main()
{
    // Deklarasi variabel untuk menyimpan usia
    int age;

    // Meminta input usia dari pengguna
    printf("\nEnter your age: ");
    scanf("%d", &age);

    // Memeriksa usia dan memberikan respons yang sesuai
    if (age >= 18)
    {
        printf("You are now signed up!"); // Usia mencukupi untuk mendaftar
    }
    else if (age == 0)
    {
        printf("You can't sign up! You were just born!"); // Usia 0 tahun
    }
    else if (age < 0)
    {
        printf("You haven't been born yet!"); // Usia negatif (tidak valid)
    }
    else
    {
        printf("You are to young to Sign up!"); // Usia di bawah persyaratan
    }

    return 0; // Program selesai dengan sukses
}

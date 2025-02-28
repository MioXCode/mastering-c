/**
 * Program sederhana untuk input dan output data pengguna
 * Program ini akan meminta nama dan umur pengguna, kemudian menampilkannya
 */

#include <stdio.h>
#include <string.h>

int main()
{
    // Deklarasi variabel
    char name[25]; // Array untuk menyimpan nama (maksimal 25 karakter)
    int age;       // Variabel untuk menyimpan umur

    // Meminta input nama pengguna
    printf("What's your name: ");

    // Menggunakan fgets untuk membaca string dengan spasi
    fgets(name, 25, stdin);
    // Menghapus karakter newline di akhir string
    name[strlen(name) - 1] = '\0';

    // Meminta input umur pengguna
    printf("How old are you: ");
    scanf("%d", &age);

    // Menampilkan output
    printf("\nHello %s, how are you?\n", name);
    printf("You are %d years old.", age);

    return 0;
};

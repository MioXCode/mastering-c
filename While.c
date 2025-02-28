/**
 * Program sederhana untuk meminta input nama pengguna
 * Program akan terus meminta input nama jika pengguna tidak memasukkan nama
 */

#include <stdio.h>
#include <string.h>

int main()
{
    // Deklarasi array karakter untuk menyimpan nama dengan panjang maksimal 25
    char name[25];

    // Meminta input nama dari pengguna
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // Menghapus karakter newline dari input

    // Menampilkan sapaan dengan nama yang diinput
    printf("Hello %s", name);

    // Loop while akan berjalan selama panjang string nama = 0 (kosong)
    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name?");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0'; // Menghapus karakter newline dari input
    }

    return 0;
}
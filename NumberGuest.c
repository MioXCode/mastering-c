/*
 * Program Permainan Tebak Angka
 * Program ini mengimplementasikan permainan tebak angka sederhana dimana:
 * - Program akan menghasilkan angka acak antara 1-100
 * - Pemain harus menebak angka tersebut
 * - Program akan memberikan petunjuk apakah tebakan terlalu tinggi atau rendah
 * - Permainan berlanjut sampai pemain menebak dengan benar
 * - Di akhir akan ditampilkan angka yang benar dan jumlah tebakan
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Mendefinisikan batas minimum dan maksimum angka yang dapat ditebak
    const int MIN = 1;
    const int MAX = 100;

    // Deklarasi variabel yang dibutuhkan
    int guess;       // Untuk menyimpan tebakan pemain
    int guesses = 0; // Untuk menghitung jumlah tebakan
    int answer;      // Untuk menyimpan jawaban yang benar

    // Inisialisasi generator angka acak
    srand(time(0));

    // Menghasilkan angka acak antara MIN dan MAX
    answer = (rand() % (MAX - MIN + 1)) + MIN;

    do
    {
        // Meminta input tebakan dari pemain
        printf("Enter a guess: ");
        scanf("%d", &guess);

        // Memeriksa tebakan dan memberikan petunjuk
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("\nCORRECT!\n");
        }

        guesses++; // Menambah hitungan tebakan
    } while (guess != answer);

    // Menampilkan hasil akhir permainan
    printf("*************************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("*************************\n");

    return 0;
}

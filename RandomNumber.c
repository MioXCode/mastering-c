/*
Program untuk menghasilkan 3 angka acak antara 1-6
seperti melempar dadu
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inisialisasi random seed berdasarkan waktu
    srand(time(0));

    // Generate 3 angka random antara 1-6
    int number1 = (rand() % 6) + 1; // Angka random pertama
    int number2 = (rand() % 6) + 1; // Angka random kedua
    int number3 = (rand() % 6) + 1; // Angka random ketiga

    // Tampilkan hasil
    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}

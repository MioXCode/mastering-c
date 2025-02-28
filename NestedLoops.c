#include <stdio.h>

/*
Program untuk membuat pola persegi panjang menggunakan simbol yang diinput user
Program akan meminta input:
- Jumlah baris (rows)
- Jumlah kolom (columns)
- Simbol yang akan digunakan
*/

int main()
{
    // Deklarasi variabel
    int rows;    // Untuk menyimpan jumlah baris
    int colums;  // Untuk menyimpan jumlah kolom
    char symbol; // Untuk menyimpan simbol yang akan digunakan

    // Input jumlah baris dari user
    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    // Input jumlah kolom dari user
    printf("\nEnter # of colums: ");
    scanf("%d", &colums);

    scanf("%d");

    // Input simbol yang akan digunakan
    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    // Loop untuk membuat pola
    // Loop luar untuk baris
    for (int i = 1; i <= rows; i++)
    {
        // Loop dalam untuk kolom
        for (int j = 1; j <= colums; j++)
        {
            printf("%c", symbol); // Print simbol
        }
        printf("\n"); // Pindah baris setelah selesai 1 baris
    }

    return 0;
}

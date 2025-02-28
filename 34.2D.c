/**
 * Program untuk mendemonstrasikan penggunaan array 2D dalam C
 * Program ini membuat array 2D 2x3, menghitung jumlah baris dan kolom,
 * kemudian mencetak semua elemen array
 */

#include <stdio.h>

int main()
{
    // Membuat array 2D dengan 2 baris dan 3 kolom
    // Setiap baris berisi angka 1, 2, 3
    int numbers[2][3] = {
        {1, 2, 3},  // Baris pertama
        {1, 2, 3}}; // Baris kedua

    // Menghitung jumlah baris dengan membagi ukuran total array
    // dengan ukuran satu baris
    int rows = sizeof(numbers) / sizeof(numbers[0]);

    // Menghitung jumlah kolom dengan membagi ukuran satu baris
    // dengan ukuran satu elemen
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    // Menampilkan jumlah baris dan kolom
    printf("Rows: %d\n", rows);
    printf("Columns: %d\n", columns);

    // Menggunakan nested loop untuk mengakses setiap elemen array
    // Loop luar (i) untuk baris, loop dalam (j) untuk kolom
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]); // Mencetak elemen dengan spasi
        }
        printf("\n"); // Pindah baris setelah mencetak satu baris lengkap
    }

    return 0; // Program selesai dengan sukses
}

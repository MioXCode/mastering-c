#include <stdio.h>

/**
 * Program untuk mengurutkan array menggunakan algoritma bubble sort
 * Program ini mendemonstrasikan:
 * - Implementasi algoritma bubble sort
 * - Penggunaan array dan pointer
 * - Pass by reference dalam fungsi
 */

/**
 * Fungsi untuk mengurutkan array menggunakan algoritma bubble sort
 * @param array array yang akan diurutkan
 * @param size ukuran array
 */
void sort(int array[], int size)
{
    // Loop untuk mengontrol jumlah iterasi pengurutan
    for (int i = 0; i < size - 1; i++)
    {
        // Loop untuk membandingkan dan menukar elemen berdekatan
        for (int j = 0; j < size - i - 1; j++)
        {
            // Jika elemen saat ini lebih besar dari elemen berikutnya
            if (array[j] > array[j + 1])
            {
                // Tukar posisi kedua elemen
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

/**
 * Fungsi untuk mencetak isi array
 * @param array array yang akan dicetak
 * @param size ukuran array
 */
void printArray(int array[], int size)
{
    // Loop untuk mencetak setiap elemen array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    // Inisialisasi array dan menghitung ukurannya
    int array[] = {3, 4, 6, 4, 3, 5, 4, 2};
    int size = sizeof(array) / sizeof(array[0]);

    // Mengurutkan array dan menampilkan hasilnya
    sort(array, size);
    printArray(array, size);

    return 0;
}

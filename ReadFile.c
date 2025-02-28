/**
 * Program untuk mendemonstrasikan pembacaan file dalam C
 * - Membuka file dalam mode read (r)
 * - Membaca isi file baris per baris
 * - Menampilkan isi file ke layar
 * - Menutup file setelah selesai
 */
#include <stdio.h>

int main()
{
    // Membuka file read.txt dalam mode read (r)
    FILE *pF = fopen("read.txt", "r");

    // Buffer untuk menyimpan teks yang dibaca dari file
    char buffer[255];

    // Mengecek apakah file berhasil dibuka
    if (pF == NULL)
    {
        printf("Unable open the File!\n");
    }
    else
    {
        // Membaca file baris per baris sampai EOF (End of File)
        // fgets akan mengembalikan NULL jika mencapai EOF
        while (fgets(buffer, 255, pF) != NULL)
        {
            // Menampilkan setiap baris yang dibaca
            printf("%s", buffer);
        }
    }

    // Menutup file setelah selesai digunakan
    fclose(pF);

    return 0;
}

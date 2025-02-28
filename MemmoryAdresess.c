#include <stdio.h>

/*
Program ini mendemonstrasikan penggunaan operator sizeof dan alamat memori (&)
- sizeof digunakan untuk mengetahui ukuran memori dari suatu variabel dalam bytes
- & digunakan untuk mendapatkan alamat memori dari suatu variabel
- %p adalah format specifier untuk mencetak alamat memori dalam format hexadecimal
*/

int main()
{
    // Deklarasi 3 variabel char
    char a = 'X'; // Karakter 'X'
    char b = 'Y'; // Karakter 'Y'
    char c = 'Z'; // Karakter 'Z'

    // Mencetak ukuran memori setiap variabel
    printf("%d Bytes\n", sizeof(a)); // Ukuran variabel a
    printf("%d Bytes\n", sizeof(b)); // Ukuran variabel b
    printf("%d Bytes\n", sizeof(c)); // Ukuran variabel c

    // Mencetak alamat memori setiap variabel
    printf("%p\n", &a); // Alamat memori variabel a
    printf("%p\n", &b); // Alamat memori variabel b
    printf("%p\n", &c); // Alamat memori variabel c

    return 0;
}

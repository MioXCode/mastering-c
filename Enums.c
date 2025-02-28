#include <stdio.h>

// Enum untuk merepresentasikan hari dalam seminggu
// Setiap hari memiliki nilai numerik dari 1-7
enum Day
{
    Sun = 1, // Minggu
    Mon = 2, // Senin
    Tue = 3, // Selasa
    Wed = 4, // Rabu
    Thu = 5, // Kamis
    Fri = 6, // Jumat
    Sat = 7  // Sabtu
};

/**
 * Program sederhana untuk mengecek apakah hari ini weekend atau weekday
 * menggunakan enum Day
 */
int main()
{
    // Menginisialisasi variabel today dengan nilai Sun (Minggu)
    enum Day today = Sun;

    // Mengecek apakah hari ini weekend (Sabtu atau Minggu)
    if (today == Sun || today == Sat)
    {
        printf("It's the weekend! Party time!");
    }
    else
    {
        printf("I have to work today!");
    }

    return 0;
}

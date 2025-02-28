#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan data pemain
// Memiliki nama (maksimal 12 karakter) dan skor
struct Player
{
    char name[12]; // Array karakter untuk menyimpan nama pemain
    int score;     // Variabel integer untuk menyimpan skor pemain
};

int main()
{
    // Deklarasi dua variabel bertipe struct Player
    struct Player player1;
    struct Player player2;

    // Mengisi data player1
    strcpy(player1.name, "Niam"); // Menyalin string "Niam" ke player1.name
    player1.score = 4;            // Mengatur skor player1 menjadi 4

    // Mengisi data player2
    strcpy(player2.name, "Tomio"); // Menyalin string "Tomio" ke player2.name
    player2.score = 5;             // Mengatur skor player2 menjadi 5

    // Menampilkan data player1
    printf("%s ", player1.name);   // Mencetak nama player1
    printf("%d\n", player1.score); // Mencetak skor player1

    // Menampilkan data player2
    printf("%s ", player2.name);   // Mencetak nama player2
    printf("%d\n", player2.score); // Mencetak skor player2

    return 0;
}

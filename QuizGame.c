#include <stdio.h>
#include <ctype.h>

/**
 * Program Quiz Game Sederhana
 * Program ini menampilkan beberapa pertanyaan pilihan ganda tentang bahasa C
 * dan menghitung skor akhir berdasarkan jawaban yang benar
 */

int main()
{
    // Array untuk menyimpan daftar pertanyaan
    char questions[][100] = {
        "1. Fungsi apa yang digunakan untuk mencetak output ke layar di C?",
        "2. Tipe data apa yang digunakan untuk menyimpan karakter dalam C?",
        "3. Simbol apa yang digunakan untuk mengakhiri pernyataan dalam C?"};

    // Array untuk menyimpan pilihan jawaban untuk setiap pertanyaan
    char options[][100] = {
        "A. printf()", "B. scanf()", "C. read()",
        "A. int", "B. char", "C. float",
        "A. ;", "B. #", "C. /* */"};

    // Array untuk menyimpan kunci jawaban yang benar
    char answer[3] = {'A', 'B', 'A'};

    // Menghitung jumlah pertanyaan
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    // Variabel untuk menyimpan jawaban user dan skor
    char guess;
    int score = 0;

    printf("QUIZ GAME\n\n");

    // Loop untuk menampilkan setiap pertanyaan
    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("#************************************************************************#\n");
        printf("%s\n", questions[i]);
        printf("#************************************************************************#\n");

        // Menampilkan 3 pilihan jawaban untuk pertanyaan saat ini
        for (int j = (i * 3); j < (i * 3) + 3; j++)
        {
            printf("%s\n", options[j]);
        }

        // Membaca input jawaban dari user
        printf("Guess: ");
        scanf("%c", &guess);
        scanf("%c"); // Membersihkan buffer

        // Mengubah jawaban ke huruf kapital
        guess = toupper(guess);

        // Memeriksa apakah jawaban benar
        if (guess == answer[i])
        {
            printf("\nCORRECT!\n");
            score++;
        }
        else
        {
            printf("\nWRONG!\n");
        }
    }

    // Menampilkan skor akhir
    printf("#************************************************************************#\n");
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("#************************************************************************#\n");

    return 0;
}

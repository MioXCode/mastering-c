/**
 * Program Permainan Tic Tac Toe
 * - Permainan papan 3x3 antara pemain (X) melawan komputer (O)
 * - Pemain dan komputer bergantian mengisi kotak kosong
 * - Pemenang adalah yang berhasil membuat 3 simbol berurutan (horizontal/vertikal/diagonal)
 * - Permainan berakhir seri jika papan penuh dan tidak ada pemenang
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// Deklarasi variabel global
char board[3][3];          // Papan permainan 3x3
const char PLAYER = 'X';   // Simbol untuk pemain
const char COMPUTER = 'O'; // Simbol untuk komputer (diubah dari 'X' ke 'O')

// Deklarasi fungsi
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';

    resetBoard();

    // Loop utama permainan
    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        printBoard();

        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }

        computerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
    }

    printBoard();
    printWinner(winner);

    return 0;
}

/**
 * Mengatur ulang papan permainan dengan mengisi semua kotak dengan spasi
 */
void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

/**
 * Menampilkan papan permainan ke layar
 */
void printBoard()
{
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

/**
 * Menghitung jumlah kotak kosong yang tersisa
 * @return jumlah kotak kosong
 */
int checkFreeSpaces()
{
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

/**
 * Meminta input dari pemain dan memvalidasi pergerakan
 */
void playerMove()
{
    int x;
    int y;

    do
    {
        printf("Masukkan baris #(1-3): ");
        scanf("%d", &x);
        x--;

        printf("Masukkan kolom #(1-3): "); // Diubah dari "row" ke "kolom"
        scanf("%d", &y);
        y--;

        if (x < 0 || x > 2 || y < 0 || y > 2) // Tambah validasi range input
        {
            printf("Posisi di luar papan! Silakan coba lagi.\n");
        }
        else if (board[x][y] != ' ')
        {
            printf("Posisi sudah terisi! Silakan coba lagi.\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }

    } while (1);
}

/**
 * Mengatur pergerakan komputer secara acak
 */
void computerMove()
{
    // Inisialisasi random seed sekali di awal program
    static int initialized = 0;
    if (!initialized)
    {
        srand(time(0));
        initialized = 1;
    }

    int x;
    int y;

    if (checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
}

/**
 * Memeriksa apakah ada pemenang
 * @return karakter pemenang (PLAYER/COMPUTER) atau spasi jika belum ada pemenang
 */
char checkWinner()
{
    // Cek baris
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }

    // Cek kolom
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
        {
            return board[0][i];
        }
    }

    // Cek diagonal
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }

    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }

    return ' ';
}

/**
 * Menampilkan hasil akhir permainan
 * @param winner karakter pemenang
 */
void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("\nSELAMAT ANDA MENANG!\n");
    }
    else if (winner == COMPUTER)
    {
        printf("\nANDA KALAH!\n");
    }
    else
    {
        printf("\nPERMAINAN SERI!\n");
    }
}
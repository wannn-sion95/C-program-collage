// Latihan Nomor 1

#include <stdio.h>
int main()
{
    char letters[10];
    letters[4] = 'Z';

    printf("Jadi Elemen ke-4 dari fungsi array letters adalah: %c\n", letters[4]);

    return 0;
}

// Latihan Nomor 2

#include <stdio.h>
int main()
{
    char huruf[20] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'};

    for (int i = 1; i < 20; i += 2)
    {
        printf("Huruf dengan indeks ganjil: [%d] = %c\n", i, huruf[i]);
    }
    return 0;
}

// Latihan Nomor 3

#include <stdio.h>
int main()
{
    char abjad[20] = {'G',
                      'H',
                      'I',
                      'J',
                      'K',
                      'L',
                      'M',
                      'N',
                      'O',
                      'P',
                      'Q',
                      'R',
                      'S',
                      'T',
                      'U',
                      'V',
                      'W',
                      'X',
                      'Y',
                      'Z'};

    char input;
    int found = 0;

    printf("Masukkan karakter yang anda inginkan: ");
    scanf("%c", &input);

    for (int i = 0; i < 20; i++)
    {
        if (abjad[i] == input)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("Karakter %c ditemukan dalam huruf abjad\n", input);
    }
    else
    {
        printf("Karakter %c tidak ditemukan dalam huruf abjad\n", input);
    }
}

// Latihan Nomor 4

#include <stdio.h>
int main()
{
    char nama[50];
    int jumlah_nilai;
    int total = 0, nilai, rata_rata;

    printf("Masukkan nama: ");
    scanf("%s", nama);

    printf("Jumlah nilai: ");
    scanf("%d", &jumlah_nilai);

    for (int i = 1; i <= jumlah_nilai; i++)
    {
        printf("Nilai-%d: ", i);
        scanf("%d", &nilai);
        total += nilai;
    }

    rata_rata = total / jumlah_nilai;

    printf("\n%s, nilai rata-rata adalah %d\n", nama, rata_rata);

    return 0;
}

// Latihan Nomor 5

#include <stdio.h>
int main()
{
    int arr[10] = {5, 8, 3, 8, 1, 8, 7, 2, 8, 4};
    int i;

    printf("Posisi elemen yang bernilai 8:\n");

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == 8)
        {
            printf("Elemen ke-%d (Indeks ke-%d)\n", i + 1, i);
        }
    }

    return 0;
}

// Latihan Nomor 6

#include <stdio.h>
int main()
{
    int baris, kolom;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kolom);

    int matriks[baris][kolom];

    printf("\nMasukkan elemen matriks:\n");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("Matriks[%d][%d]: ", i, j);
            scanf("%d", &matriks[i][j]);
        }
    }
    printf("\nMatriks setelah dikalikan dengan 5:\n");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            matriks[i][j] *= 5;
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}

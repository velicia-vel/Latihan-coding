/* #include <stdio.h>
int main()
{
    int bil_positif = 0, bil_negatif = 0, bil_nol = 0, angka;

    for (int i = 0; i < 5; i++)
    {
        printf("Input nilai ke-%d: ", i + 1);
        scanf("%d", &angka);

        if (angka > 0)
        {
            bil_positif++;
        }

        else if (angka < 0)
        {
            bil_negatif++;
        }

        else
        {
            bil_nol++;
        }
    }

    printf("\nJumlah bilangan positif = %d\n", bil_positif);
    printf("Jumlah bilangan negatif = %d\n", bil_negatif);
    printf("Jumlah bilangan nol     = %d\n", bil_nol);

    return 0;
} */

/* #include <stdio.h>
int main()
{
    int data[10], jumlah_genap = 0, jumlah_ganjil = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Input nilai ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nBilangan genap: ");
    for (int i = 0; i < 10; i++)
    {
        if (data[i] % 2 == 0)
        {
            printf("%d ", data[i]);
            jumlah_genap++;
        }
    }

    printf("\nBilangan ganjil: ");
    for (int i = 0; i < 10; i++)
    {

        if (data[i] % 2 != 0)
        {
            printf("%d ", data[i]);
            jumlah_ganjil++;
        }
    }

    printf("\n");

    printf("\nJumlah bilangan genap = %d\n", jumlah_genap);
    printf("Jumlah bilangan ganjil = %d\n", jumlah_ganjil);

    return 0;
} */

/* #include <stdio.h>

int cek_prima(int n);

int main()
{
    int angka, hasil;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    hasil = cek_prima(angka);

    if (hasil == 1)
    {
        printf("Bilangan tersebut merupakan bilangan prima\n");
    }
    else
    {
        printf("Bilangan tersebut bukan prima\n");
    }

    return 0;
}

int cek_prima(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
} */

/* #include <stdio.h>

typedef struct {
    char nama[100];
    int harga;
} data_barang;

int main()
{
    data_barang input[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Input barang ke-%d: ", i + 1);
        scanf("%s", input[i].nama);
        printf("Input harga barang ke-%d: ", i + 1);
        scanf("%d", &input[i].harga);
    }

    int max = input[0].harga;
    int min = input[0].harga;
    int idxMax = 0, idxMin = 0;

    for (int i = 0; i < 3; i++)
    {
        if (input[i].harga > max)
        {
            max = input[i].harga;
            idxMax = i;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (input[i].harga < min)
        {
            min = input[i].harga;
            idxMin = i;
        }
    }

    printf("\nBarang dengan harga termurah = %s Rp %d\n", input[idxMin].nama, min);
    printf("Barang dengan harga termahal = %s Rp %d\n", input[idxMax].nama, max);

    return 0;
} */

/* #include <stdio.h>
int main()
{
    int tugas, UTS, UAS;
    float nilai_akhir, remedial;
    int jumlah_A = 0, jumlah_B = 0, jumlah_C = 0, jumlah_D = 0;
    float rata = 0, max, min, total = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Nilai tugas mahasiswa ke-%d: ", i + 1);
        scanf("%d", &tugas);
        printf("Nilai UTS mahasiswa ke-%d: ", i + 1);
        scanf("%d", &UTS);
        printf("Nilai UAS mahasiswa ke-%d: ", i + 1);
        scanf("%d", &UAS);

        nilai_akhir = 0.3 * tugas + 0.3 * UTS + 0.4 * UAS;

        if (nilai_akhir < 60)
        {
            printf("Remedial!. Masukkan nilai remedial: ");
            scanf("%f", &remedial);

            if (remedial > nilai_akhir)
            {
                nilai_akhir = remedial;
            }
        }

        printf("Nilai akhir: %.2f\n", nilai_akhir);

        if (nilai_akhir > 90)
        {
            jumlah_A++;
        }
        else if (nilai_akhir > 80)
        {
            jumlah_B++;
        }
        else if (nilai_akhir > 70)
        {
            jumlah_C++;
        }
        else
        {
            jumlah_D++;
        }

        if (i == 0)
        {
            max = nilai_akhir;
            min = nilai_akhir;
        }
        else
        {
            if (nilai_akhir > max)
            {
                max = nilai_akhir;
            }
            if (nilai_akhir < min)
            {
                min = nilai_akhir;
            }
        }

        total += nilai_akhir;
        printf("\n");
    }

    rata = total / 10.0;

    printf("Jumlah nilai A: %d\n", jumlah_A);
    printf("Jumlah nilai B: %d\n", jumlah_B);
    printf("Jumlah nilai C: %d\n", jumlah_C);
    printf("Jumlah nilai D: %d\n", jumlah_D);

    printf("\nTotal nilai akhir    : %.2f\n", total);
    printf("Rata-rata nilai akhir: %.2f\n", rata);
    printf("\nNilai tertinggi      : %.2f\n", max);
    printf("Nilai terendah       : %.2f\n", min);

    return 0;
} */
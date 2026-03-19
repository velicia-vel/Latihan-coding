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

#include <stdio.h>

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

    for (int i = 0; i < 3; i++)
    {
        if (input[i].harga > max)
        {
            max = input[i].harga;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (input[i].harga < min)
        {
            min = input[i].harga;
        }
    }

    printf("\nBarang dengan harga termurah = %d\n", min);
    printf("Barang dengan harga termahal = %d\n", max);

    return 0;
} git 
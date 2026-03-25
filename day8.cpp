// 1
/* #include <stdio.h>

void fibonacci(int arr[], int n)
{
    if (n >= 1)
    {
        arr[0] = 0;
    }
    if (n >= 2)
    {
        arr[1] = 1;
    }

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

int main()
{
    int angka;
    int fi[100];

    printf("Jumlah data: ");
    scanf("%d", &angka);

    fibonacci(fi, angka);

    printf("\nHasil:\n");
    for (int i = 0; i < angka; i++)
    {
        printf("%d ", fi[i]);
    }

    return 0;
} */

// 2
/* #include <stdio.h>

int faktorial(int n)
{
    int hasil = 1;

    for (int i = 1; i <= n; i++)
    {
        hasil = hasil * i;
    }

    return hasil;
}

int main()
{
    int angka, fakt;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    fakt = faktorial(angka);

    printf("%d! = %d ", angka, fakt);
    printf("\n");

    return 0;
} */

// 3
/* #include <stdio.h>

int main()
{
    int angka, data[100];

    printf("Batas data: ");
    scanf("%d", &angka);

    for (int i = 0; i < angka; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }
    for (int i = 0; i < angka; i++)
    {
        for (int j = i + 1; j < angka; j++)
        {
            if (data[i] == data[j])
            {
                for (int k = j; k < angka - 1; k++)
                {
                    data[k] = data[k + 1];
                }
                angka--;
                j--;
            }
        }
    }

    printf("\nHasil: ");
    for (int i = 0; i < angka; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n");

    return 0;
} */

// 4
/* #include <stdio.h>
int main()
{
    int angka[5], cari, ketemu = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    printf("Masukkan angka yang ingin dicari: ");
    scanf("%d", &cari);

    for (int i = 0; i < 5; i++)
    {
        if (angka[i] == cari)
        {
            ketemu = 1;
            break;
        }
    }

    if (ketemu == 1)
    {
        printf("Angka %d ADA di dalam array\n", cari);
    }
    else
    {
        printf("Angka %d TIDAK ADA di dalam array\n", cari);
    }
    return 0;
} */

// 5
/* #include <stdio.h>
int main()
{
    int i, j, spasi;

    for (i = 1; i <= 9; i += 2)
    {
        for (spasi = 1; spasi <= (9 - i) / 2; spasi++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} */
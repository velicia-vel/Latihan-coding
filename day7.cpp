// 1
/* #include <stdio.h>

int luas(int p, int l)
{
    int L;

    L = p * l;

    return L;
}

int main()
{
    int panjang, lebar, hasil;

    printf("\n===== MENGHITUNG LUAS PERSEGI PANJANG =====\n");
    printf("Masukkan panjang : ");
    scanf("%d", &panjang);
    printf("Masukkan lebar   : ");
    scanf("%d", &lebar);

    hasil = luas(panjang, lebar);

    printf("\nLuas persegi panjang = %d\n", hasil);

    return 0;
} */

// 2
/* #include <stdio.h>

void swap(int *a, int *b)
{
    int hasil;

    hasil = *a;
    *a = *b;
    *b = hasil;
}

int main()
{
    int x, y;

    printf("Nilai x: ");
    scanf("%d", &x);
    printf("Nilai y: ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("\nHasil tukar:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
} */

// 3
/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    printf("Jumlah data : ");
    scanf("%d", &n);

    int *arr;
    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    float rata = total / n;

    printf("\nRata-rata = %.2f\n", rata);

    free(arr);
} */

// 4
/* #include <stdio.h>

void ubah_nilai(int *nilai);

int main()
{
    int angka;

    printf("Input sebuah angka: ");
    scanf("%d", &angka);

    ubah_nilai(&angka);

    printf("Hasil = %d\n", angka);

    return 0;
}

void ubah_nilai(int *nilai)
{
    *nilai = 2 * *nilai;
} */

// 5
/* #include <stdio.h>
int main()
{
    int angka[100], n;
    int *arr;
    arr = angka;

    printf("Jumlah data: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", arr + i);
    }

    printf("\nIsi array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(arr + i));
    }

    return 0;
} */
// 1
/* #include <stdio.h>
int main()
{
    int arr[5];
    int *ptr;
    ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("Input array ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nSemua elemen array : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i)); // ambil nilai di indeks ke i sama dengan arr[i]
    }

    return 0;
} */

// 2
/* #include <stdio.h>

int total(int *arr, int n);

int main()
{
    int array[100];
    int angka, hasil, i;
    int *ptr = array; //alamat awal

    printf("Banyak data: ");
    scanf("%d", &angka);

    for (i = 0; i < angka; i++)
    {
        printf("Input data ke-%d: ", i + 1);
        scanf("%d", ptr + i); //gantinya &array[i]
    }

    hasil = total(ptr, angka); //ptr = kirim ptr

    printf("Total = %d\n", hasil);

    return 0;
}

int total(int *arr, int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += *(arr + i); //akses isi array
    }

    return total;
} */

// 3
/* #include <stdio.h>

float rata(int *arr, int n);

int main()
{
    int array[100];
    int angka;
    float hasil;
    int *ptr = array;

    printf("Banyak data: ");
    scanf("%d", &angka);

    for (int i = 0; i < angka; i++)
    {
        printf("Input data ke-%d: ", i + 1);
        scanf("%d", ptr + i);
    }

    hasil = rata(ptr, angka);

    printf("Rata-rata = %.2f\n", hasil);

    return 0;
}

float rata(int *arr, int n)
{
    float rata;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += *(arr + i);
    }

    rata = total / n;

    return rata;
} */

// 4
/* #include <stdio.h>

void maxmin(int *arr, int n, int *max, int *min)
{
    *max = *arr; // isi nilai ke alamat *max
    *min = *arr;

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > *max)
        {
            *max = *(arr + i);
        }
        if (*(arr + i) < *min)
        {
            *min = *(arr + i);
        }
    }
}

int main()
{
    int array[100];
    int *ptr = array;
    int angka;
    int max, min; // alamat

    printf("Banyak data: ");
    scanf("%d", &angka);

    for (int i = 0; i < angka; i++)
    {
        printf("Input data ke-%d: ", i + 1);
        scanf("%d", ptr + i);
    }

    maxmin(ptr, angka, &max, &min); // kirim alamat variabel

    printf("\nNilai maximum = %d\n", max);
    printf("Nilai minimum = %d\n", min);

    return 0;
} */

// 5
/* #include <stdio.h>

void balik(int *arr, int n);

int main()
{
    int array[100];
    int *ptr = array;
    int angka;

    printf("Banyak data: ");
    scanf("%d", &angka);

    for (int i = 0; i < angka; i++)
    {
        printf("Input data ke-%d: ", i + 1);
        scanf("%d", ptr + i);
    }

    balik(ptr, angka);

    printf("\nHasil balik : \n");
    for (int i = 0; i < angka; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    printf("\n");

    return 0;
}

void balik(int *arr, int n)
{
    int reverse;

    for (int i = 0; i < n / 2; i++)
    {
        reverse = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n - i - 1) = reverse;
    }
} */
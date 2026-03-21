// 1
/* #include <stdio.h>

int hitung_negatif(int data[], int n);

int main()
{
    int data[5], i, hasil;

    for (i = 0; i < 5; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    hasil = hitung_negatif(data, 5);

    printf("Jumlah bilangan negatif = %d\n", hasil);

    return 0;
}

int hitung_negatif(int data[], int n)
{
    int jumlah = 0, i;

    for (i = 0; i < n; i++)
    {
        if (data[i] < 0)
        {
            jumlah++;
        }
    }
    return jumlah;
} */

// 2
/* #include <stdio.h>

int max_genap(int data[], int n);

int main()
{
    int data[5], i, hasil;

    for (i = 0; i < 5; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    hasil = max_genap(data, 5);

    printf("Nilai maximum bilangan genap = %d\n", hasil);

    return 0;
}

int max_genap(int data[], int n)
{
    int max = -1, jumlah_genap = 0, i;

    for (i = 0; i < n; i++)
    {
        if (data[i] % 2 == 0)
        {
            jumlah_genap++;

            if (max == -1 || data[i] > max)
            {
                max = data[i];
            }
        }
    }
    if (jumlah_genap == 0)
    {
        return -1;
    }
    else
    {
        return max;
    }
}
 */
// 3
/* #include <stdio.h>

float rata_negatif(int data[], int n);

int main()
{
    int i, data[5];
    float rata;

    for (i = 0; i < 5; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    rata = rata_negatif(data, 5);

    printf("Rata-rata bilangan negatif = %.2f\n", rata);

    return 0;
}

float rata_negatif(int data[], int n)
{
    float total = 0, rata;
    int jumlah = 0, i;

    for (i = 0; i < n; i++)
    {
        if (data[i] < 0)
        {
            jumlah++;
            total += data[i];
        }
    }

    if (jumlah == 0)
    {
        return 0;
    }
    else
    {
        rata = total / jumlah;
        return rata;
    }
} */

// 4
/* #include <stdio.h>

void input(int array[], int n);
void bilangan_ganjil(int array[], int n);

int main()
{
    int array[5];

    input(array, 5);
    bilangan_ganjil(array, 5);

    printf("\n");

    return 0;
}

void input(int array[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Data ke %d : ", i + 1);
        scanf("%d", &array[i]);
    }
}

void bilangan_ganjil(int array[], int n)
{
    int i, ada = 0;

    printf("\nBilangan ganjil: ");
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%d ", array[i]);
            ada = 1;
        }
    }
    if (!ada)
    {
        printf("Tidak ada bilangan ganjil\n");
    }
} */

// 5
/* #include <stdio.h>

int cek_genap(int angka);

int main()
{
    int angka, hasil;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    hasil = cek_genap(angka);

    if (hasil == 1)
    {
        printf("Bilangan genap\n");
    }
    else
    {
        printf("Bilangan ganjil\n");
    }

    return 0;
}

int cek_genap(int angka)
{

    if (angka % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
} */

// 6
/* #include <stdio.h>

int cek_positif_negatif(int n);

int main()
{
    int angka, hasil;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &angka);

    hasil = cek_positif_negatif(angka);

    if (hasil == 1)
    {
        printf("Bilangan positif\n");
    }
    else if (hasil == -1)
    {
        printf("Bilangan negatif\n");
    }
    else
    {
        printf("Bukan bilangan positif ataupun negatif\n");
    }

    return 0;
}

int cek_positif_negatif(int n)
{

    if (n > 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
} */
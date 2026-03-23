// 1
/* #include <stdio.h>

int hitung_positif(int data[][3], int n);

int main()
{
    int i, j;
    int data[2][3];
    int hasil;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Data ke [%d][%d] = ", i, j);
            scanf("%d", &data[i][j]);
        }
    }
    hasil = hitung_positif(data, 2);

    printf("Jumlah Bilangan positif = %d\n", hasil);

    return 0;
}

int hitung_positif(int data[][3], int n)
{
    int jumlah = 0;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (data[i][j] > 0)
            {
                jumlah++;
            }
        }
    }
    return jumlah;
} */

// 2
/* #include <stdio.h>

int nilai_max(int data[][3], int n);

int main()
{
    int hasil, i, j;
    int data[2][3];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Data ke [%d][%d] = ", i, j);
            scanf("%d", &data[i][j]);
        }
    }
    hasil = nilai_max(data, 2);

    printf("Nilai max = %d\n", hasil);

    return 0;
}

int nilai_max(int data[][3], int n)
{
    int max = data[0][0];
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (data[i][j] > max)
            {
                max = data[i][j];
            }
        }
    }
    return max;
} */

// 3
/* #include <stdio.h>

int nilai_min(int data[][3], int n);

int main()
{
    int hasil, i, j;
    int data[2][3];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Data ke [%d][%d] = ", i, j);
            scanf("%d", &data[i][j]);
        }
    }
    hasil = nilai_min(data, 2);

    printf("Nilai min = %d\n", hasil);

    return 0;
}

int nilai_min(int data[][3], int n)
{
    int min = data[0][0];
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (data[i][j] < min)
            {
                min = data[i][j];
            }
        }
    }
    return min;
} */

// 4
/* #include <stdio.h>

void rata_genap(int data[][3], int n);

int main()
{
    int data[2][3];

    rata_genap(data, 2);

    return 0;
}

void rata_genap(int data[][3], int n)
{
    int i, j;
    float total = 0, rata, jumlah = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Data ke [%d][%d] = ", i, j);
            scanf("%d", &data[i][j]);

            if (data[i][j] % 2 == 0)
            {
                jumlah++;
                total += data[i][j];
            }
        }
    }
    if (jumlah > 0)
    {
        rata = total / jumlah;
    }
    else
    {
        rata = 0;
    }

    printf("Rata-rata bilangan genap = %.2f\n", rata);
} */

// 5
/* #include <stdio.h>
int main()
{
    float suhu[7], max, min;
    float total = 0, rata;

    for (int i = 0; i < 7; i++)
    {
        printf("Masukkan suhu ke-%d: ", i + 1);
        scanf("%f", &suhu[i]);
        total += suhu[i];
    }

    rata = total / 7;
    printf("\nRata-rata suhu selama 7 hari = %.2f\n", rata);

    max = suhu[0];
    min = suhu[0];

    for (int i = 0; i < 7; i++)
    {
        if (suhu[i] > max)
        {
            max = suhu[i];
        }
        if (suhu[i] < min)
        {
            min = suhu[i];
        }
    }

    printf("\nSuhu terpanas = %.2f\n", max);
    printf("Suhu terdingin = %.2f\n", min);

    return 0;
} */
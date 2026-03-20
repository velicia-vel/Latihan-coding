// 1
/* #include <stdio.h>
int main()
{
    int n, angka, jumlah = 0, total = 0;
    float rata;

    printf("Berapa banyak data? : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Masukkan angka ke-%d: ", i);
        scanf("%d", &angka);
    }

    for (int i = 1; i <= n; i++)
    {
        if (angka % 2 == 0)
        {
            jumlah++;
            total += jumlah;
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

    printf("\nJumlah bilangan genap: %d\n", jumlah);
    printf("Rata-rata bilangan genap: %.2f\n", rata);

    return 0;
} */

// 2
/* #include <stdio.h>
int main()
{
    int n, angka, max, min;

    printf("Berapa banyak data? : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Masukkan angka ke-%d: ", i);
        scanf("%d", &angka);

        if (i == 1)
        {
            max = angka;
            min = angka;
        }
        else
        {
            if (angka > max)
            {
                max = angka;
            }
            if (angka < min)
            {
                min = angka;
            }
        }
    }

    printf("\nNilai maximum : %d\n", max);
    printf("Nilai minimum : %d\n", min);

    return 0;
} */

// 3
/* #include <stdio.h>
int main()
{
    int angka, balik = 0, sisa;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    while (angka != 0)
    {
        sisa = angka % 10;         // ambil digit terakhir
        balik = balik * 10 + sisa; // susun angka baru
        angka = angka / 10;        // buang digit terakhir
    }

    printf("Hasil dibalik = %d\n", balik);

    return 0;
} */

// 4
/* #include <stdio.h>
int main()
{
    int angka, hasil = 0, sisa;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    while (angka != 0)
    {
        sisa = angka % 10;         // ambil digit terakhir
        hasil += sisa;             // hitung angka
        angka = angka / 10;        // buang digit terakhir
    }

    printf("Hasil = %d\n", hasil);

    return 0;
} */

// 5
/* #include <stdio.h>
int main()
{
    int angka, balik = 0, sisa, angkaAsli;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    angkaAsli = angka;

    while (angka != 0)
    {
        sisa = angka % 10;         // ambil digit terakhir
        balik = balik * 10 + sisa; // susun angka baru
        angka = angka / 10;        // buang digit terakhir
    }

    if (angkaAsli == balik)
    {
        printf("%d adalah palindrome (Hasil balik = %d)\n", angkaAsli, balik);
    }
    else
    {
        printf("%d bukan palindrome (Hasil balik = %d)\n", angkaAsli, balik);
    }

    return 0;
} */
// 1
/* #include <stdio.h>
typedef struct
{
    char nama[50];
    int harga;
} Barang;

int total(Barang b[], int n);

int main()
{
    FILE *fp;
    Barang b[3];
    int hasil, i;

    fp = fopen("barang.txt", "w");
    if (fp == NULL)
    {
        printf("File gagal dibuka!\n");
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        printf("Barang ke-%d : ", i + 1);
        scanf("%s", b[i].nama);
        printf("Harga       : Rp ");
        scanf("%d", &b[i].harga);
    }

    for (i = 0; i < 3; i++)
    {
        fprintf(fp, "%s %d\n", b[i].nama, b[i].harga);
    }

    fclose(fp);

    printf("\nData berhasil disimpan ke file!\n");

    fp = fopen("barang.txt", "r");
    printf("\nIsi File:\n");
    for (i = 0; i < 3; i++)
    {
        fscanf(fp, "%s %d\n", b[i].nama, &b[i].harga);
        printf("%s %d\n", b[i].nama, b[i].harga);
    }
    fclose(fp);

    hasil = total(b, 3);
    printf("\nTotal Harga Barang = %d\n", hasil);

    return 0;
}

int total(Barang b[], int n)
{
    int total = 0, i;

    for (i = 0; i < n; i++)
    {
        total += b[i].harga;
    }

    return total;
} */

// 2
/* #include <stdio.h>

typedef struct {
    char nama[50];
    int nim;
    float ipk;
} Mahasiswa;

int jumlah_mahasiswa();

int main()
{
    FILE *fp;
    Mahasiswa mhs;
    int hasil;

    fp = fopen("mahasiswa.txt", "w");
    if (fp == NULL)
    {
        printf("File tidak dapat dibuka!\n");
        return 1;
    }

    printf("Input Data Mahasiswa\n");
    printf("Nama : ");
    scanf("%s", mhs.nama);
    printf("NIM  : ");
    scanf("%d", &mhs.nim);
    printf("IPK  : ");
    scanf("%f", &mhs.ipk);

    fprintf(fp, "%s %d %.2f\n", mhs.nama, mhs.nim, mhs.ipk);
    fclose(fp);

    fp = fopen("mahasiswa.txt", "r");
    printf("\nIsi File:\n");
    while (fscanf(fp, "%s %d %f", mhs.nama, &mhs.nim, &mhs.ipk) != EOF)
    {
        printf("%s %d %.2f\n", mhs.nama, mhs.nim, mhs.ipk);
    }

    fclose(fp);

    fp = fopen("mahasiswa.txt", "a");

    printf("\nTambah Data Mahasiswa\n");
    printf("Nama : ");
    scanf("%s", mhs.nama);
    printf("NIM  : ");
    scanf("%d", &mhs.nim);
    printf("IPK  : ");
    scanf("%f", &mhs.ipk);

    fprintf(fp, "%s %d %.2f\n", mhs.nama, mhs.nim, mhs.ipk);
    fclose(fp);

    hasil = jumlah_mahasiswa();

    printf("\nJumlah Mahasiswa = %d\n", hasil);

    fp = fopen("mahasiswa.txt", "r");
    printf("\nIsi File:\n");
    while (fscanf(fp, "%s %d %f", mhs.nama, &mhs.nim, &mhs.ipk) != EOF)
    {
        printf("%s %d %.2f\n", mhs.nama, mhs.nim, mhs.ipk);
    }

    fclose(fp);

    return 0;
}

int jumlah_mahasiswa()
{
    FILE *fp;
    Mahasiswa mhs;
    int jumlah = 0;

    fp = fopen("mahasiswa.txt", "r");

    while (fscanf(fp, "%s %d %f", mhs.nama, &mhs.nim, &mhs.ipk) != EOF)
    {
        jumlah++;
    }

    fclose(fp);
    return jumlah;
} */

// 3
/* #include <stdio.h>
int main()
{
    FILE *fp;
    char nama[50];
    int nilai;

    fp = fopen("nilai.txt", "w");

    printf("Nama  : ");
    fgets(nama, sizeof(nama), stdin);
    printf("Nilai : ");
    scanf("%d", &nilai);

    fprintf(fp, "%s%d", nama, nilai);

    fclose(fp);

    printf("\nData berhasil disimpan!\n");

    return 0;
} */

// 4
/* #include <stdio.h>
int main()
{
    FILE *fp;
    char nama[50];
    int nilai;

    fp = fopen("nilai.txt", "r");

    fscanf(fp, "%s %d", nama, &nilai);

    fclose(fp);

    printf("Isi file = %s %d\n", nama, nilai);
    return 0;
} */

// 5
/* #include <stdio.h>

typedef struct {
    char nama[50];
    int stok;
} Barang;

int main()
{
    FILE *fp;
    Barang b[3];
    int i;

    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("File gagal dibuka!\n");
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        printf("Nama Barang ke-%d : ", i + 1);
        scanf("%s", b[i].nama);
        printf("Stok Barang      : ");
        scanf("%d", &b[i].stok);
    }

    for (i = 0; i < 3; i++)
    {
        fprintf(fp, "%s %d\n", b[i].nama, b[i].stok);
    }
    fclose(fp);

    printf("\nData berhasil tersimpan!\n");

    printf("\nIsi File : \n");
    for (i = 0; i < 3; i++)
    {
        printf("%s %d\n", b[i].nama, b[i].stok);
    }

    return 0;
} */
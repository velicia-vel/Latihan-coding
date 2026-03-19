#include <stdio.h>
int main()
{
    int n = 0, jumlah = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Input nilai ke-%d: ", i + 1);
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("\nBilangan genap = %d ", n);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (n % 2 != 0)
        {
            printf("Bilangan ganjil = %d ", n);
        }
    }
}
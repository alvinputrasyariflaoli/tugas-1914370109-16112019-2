#include <stdio.h>

void main()
{
    int n = 7;
    for (int baris = 1; baris < n; baris++){
    for (int kolom = 1; kolom < baris; kolom++)
        printf("*");
    printf("\n");
    }
    for(int baris = 1; baris < n; baris++){
        for (int kolom = 1; kolom < 6-baris;kolom++)
            printf("*");
            printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <iostream>

int main()
{
    int clen = 0;
    int diference = 0;
    
    printf("Zadej prvni clen posloupnosti ");
    scanf_s("%d", &clen);

    printf("Zadej diferenci mezi cleny ");
    scanf_s("%d", &diference);

    for (int i = 1; i <= 20; i++) {
        printf("\nAritmeticka posloupnost je: %2d", clen);
        clen += diference;
    }
    
}



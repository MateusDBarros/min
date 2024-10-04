#include <stdio.h>

int main(void)
{
    int lista[] = {5,7,2,3,1,4,8,9,6};
    int size = sizeof(lista)/sizeof(lista[0]);
    int min = lista[0];

    for (int i = 0; i < size; i++)
    {
        if (lista[i] < min ) min = lista[i];
    }
    printf("O numero minimo e: %d\n", min);
}
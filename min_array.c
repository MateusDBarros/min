#include <stdio.h>

int main(void)
{
    //Cria uma array com diversos numeros em ordem aleatoria
    int lista[] = {5,7,2,3,1,4,8,9,6,-24,-12,-1,0,10,-5, 14, 72, 100};
    //Obtem o tamanho dessa array
    int size = sizeof(lista)/sizeof(lista[0]);
    //Define uma variavel com o valor a ser comparado com os outros valores da array
    int min = lista[0];
    int max = lista[0];
    //For Loop checando por todos os index da array e armazenando o menor e maior valor
    for (int i = 0; i < size; i++)
    {
        if (lista[i] < min ) min = lista[i];
        if (lista[i] > max ) max = lista[i];
    }
    printf("O numero minimo e: %d\n", min);
    printf("O numero maximo e: %d\n", max);
}

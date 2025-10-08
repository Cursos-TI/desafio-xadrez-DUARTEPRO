#include <stdio.h>

int main() {


    //mais facil compreenção, sera feito nesta ordem.
    int torre, bispo, rainha;


    //torre
    for (torre = 0; torre < 5; torre++)
    {
        printf("Torre - direita\n");//imprimindo movimento da torre
    }
    

    printf ("-----------\n ");//para pular linha e ler melhor



//bispo
bispo = 0;
while (bispo < 5){ 
printf("Bispo - direita, cima\n"); 
                                
bispo++;
}

    printf ("-----------\n ");//para pular linha e ler melhor



//rainha
rainha = 0;
    do {

        printf("Rainha - esquerda\n");
        rainha++;

    } while (rainha < 8); 
         
    

    return 0;
}
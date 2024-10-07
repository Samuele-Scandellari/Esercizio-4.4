#include <stdio.h>
int main() {
    float voto, somma;
    int conteggio;
    somma = 0;
    conteggio = 0;
    printf("Inserisci i voti (inserisci 0 per terminare):\n");
    while (1) {
        scanf("%f", &voto);
        if (voto == 0) {
            break;
        }
        somma += voto;
        conteggio++;
    }
    if (conteggio > 0) {
        float media = somma / conteggio;
        printf("La media dei voti e': %f\n", media);
    }else{
        printf("Nessun voto inserito.\n");
    }
}
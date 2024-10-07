#include <stdio.h>
int main() {
    float voto, somma;
    int nvoti;
    somma = 0;
    nvoti = 0;
    printf("Inserisci i voti (inserisci 0 per terminare):\n");
    while (voto > 0) {
        scanf("%f", &voto);
        somma += voto;
        nvoti++;
    }
    if (conteggio > 0) {
        float media = somma / (nvoti-1);
        printf("La media dei voti e': %f\n", media);
    }
}

#include <stdio.h>

int main(){
    
    double notaA, notaB, media;

    scanf("%lf", &notaA);
    scanf("%lf", &notaB);

    media = ((notaA * 3.5) + (notaB * 7.5)) / 11;

    printf("MEDIA = %.5f\n", media);
}
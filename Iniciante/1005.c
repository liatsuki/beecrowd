#include <stdio.h> // Média 1

int main() {
    double a, b, media;

    scanf("%lf", &a);
    scanf("%lf", &b);

    media = ((a * 3.5) + (b * 7.5)) / 11.0;

    printf("MEDIA = %.5lf\n", media);
}
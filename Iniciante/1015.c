#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2, difX, difY, quadX, quadY, soma, distancia;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    difX = x1 - x2;
    difY = y1 - y2;

    quadX = difX * difX;
    quadY = difY * difY;

    soma = quadX + quadY;

    distancia = sqrt(soma);

    printf("%.4lf\n", distancia);
}
#include <stdio.h>

int main(){
    int distancia;
    double totalcomb, totalcons;

    scanf("%d", &distancia);
    scanf("%lf", &totalcomb);

    totalcons = distancia / totalcomb;

    printf("%.3lf km/l\n", totalcons);
}
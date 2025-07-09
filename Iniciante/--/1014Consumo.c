#include <stdio.h>

int main(){
    
    float distancia, total_comb, consumo_medio;

    scanf("%f %f", &distancia, &total_comb);

    consumo_medio = distancia / total_comb;

    printf("%.3f km/l\n", consumo_medio);
}
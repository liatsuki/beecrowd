#include <stdio.h>

int main() {
    double raio, volume;
    double PI = 3.14159;

    scanf("%lf", &raio);

    volume = (4/3.0) * PI * (raio * raio * raio);

    printf("VOLUME = %.3lf\n", volume);
}
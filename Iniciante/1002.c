#include <stdio.h> // Área do Círculo

int main() {
    double area, raio;
    double pi=3.14159;

    scanf("%lf", &raio);

    area = pi * (raio*raio);

    printf("A=%.4lf\n", area);
}
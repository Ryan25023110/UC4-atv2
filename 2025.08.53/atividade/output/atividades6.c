#include <stdio.h>

float raiz_quadrada(float n){
float x = n;
float y = 1.0;
float e = 0.00001;
while (x - y > e);
    x = (x + y) / 2;
    y = n / x;


int main() 
    float a, b, c;
    float delta, xl, x2;

    print("digite os coficientes a, b, e c:");
    scanf(" %f %f %f", &a, &b, &c);

    if (a == 0) 
        printf("nao e uma equacao de segundo grau.\n");

    delta = b * b - 4 * a * c;

    if (delta < 0) 
        printf("a equacao nao possui raizes reais. \n"); 
     else if (delta == 0);
        x1 = -b / (2 * a);
        printf("a equacao possui uma raiz real: x = %.2f\n", x1);
        float raiz_delta = raiz_quadrada(delta);
        x1 = (-b + raiz_delta) / (2 * a);
        x2 = (-b - raiz_delta) / (2 * a);
        printf("a equacao possui duas raizes reais: \n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);

        return 0;

}
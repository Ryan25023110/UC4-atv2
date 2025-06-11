#include<stdio.h>

int main(){
float tempo, distancia, velocidade;

printf("----- calculo de velocidade de um objetivo -----\n");
printf("Digite a distancia em km(digite apenas numeros): ");
scanf("%f", &distancia);
printf("Digite o tempo em horas(digite apenas numeros): ");
scanf("%f", &tempo);

velocidade = distancia / tempo;

printf("velocidade do objetivo: %f", velocidade);

return 0;
}
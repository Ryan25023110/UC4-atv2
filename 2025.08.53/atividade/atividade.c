#include<stdio.h>

int main(){
    //Variaveis
    int idade = 20; 
    float ValorDoPgto = 12.42;
    double velParticula = 2.92817029837;
    char tipoHabMotor = 'A';

    //instruções
printf("informe a idade");
scanf("%d", &idade);
printf("Informe o valor do pagamento");
scanf("%f", &ValorDoPgto);
printf("Informe a velocidade da particula");
scanf("%lf", &velParticula);
printf("informe o tipo de habilitação");
scanf("%c", &tipoHabMotor);

printf("Dados informados %d, %f, %lf, %c\n", idade, ValorDoPgto, velParticula, tipoHabMotor);

return 0;

}
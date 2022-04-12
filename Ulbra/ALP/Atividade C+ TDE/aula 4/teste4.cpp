#include <stdio.h>

int main ( )

{

float salario, novosal;

printf("digite o salario\n");
scanf("%f", &salario);


 novosal=(salario*1.25);


printf("O salario final e: %.2f",novosal);

return 0;

  }
  
// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
// que este sofreu um aumento de 25%
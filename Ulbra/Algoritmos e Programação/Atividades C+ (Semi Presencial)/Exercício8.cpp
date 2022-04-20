#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <cmath>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float salReaj, salFunc;

    printf("Digite o salário do funcionário:\n");
    scanf("%f", &salFunc);

    if (salFunc <= 300)
    {
        printf("O seu aumento foi de 35 porcento\n");

        salReaj = (salFunc*30)/100 + salFunc; 
        printf("O novo salário é: %.2f\n", salReaj);
    }
    else if (salFunc > 300)
    {
        printf("O seu aumento foi de 15 porcento\n");

        salReaj = (salFunc*15)/100 + salFunc;
        printf("O novo salário é: %.2f\n", salReaj);
    }


    return 0;
}
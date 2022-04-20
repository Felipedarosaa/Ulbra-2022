#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <cmath>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float custoFab, precoDist, precoImp, precoTotal;

    printf("Digite o valor de fábrica do veículo:\n");
    scanf("%f", &custoFab);

    if (custoFab < 12000)
    {
        precoTotal = (custoFab*5)/100 + custoFab;
        printf("A taxa do distribuidor é: %.2f\n", (custoFab*5/100) );
        printf("O valor total do veículo fica: %.2f\n", precoTotal);
    }
    else if (custoFab > 12000 && custoFab < 25000)
    {
        precoTotal = (custoFab*10/100) + (custoFab*15/100) + custoFab;

         printf("A taxa do Distribuidor é: %.2f\n", (custoFab*10/100) );
         printf("A taxa de Impostos é: %.2f\n", (custoFab*15/100) );
         printf("O valor total do veículo fica: %.2f\n", precoTotal);
    }
    else if (custoFab > 25000)
    {
        precoTotal = (custoFab*15/100) + (custoFab*20/100) + custoFab; 

        printf("A taxa do Distribuidor é: %.2f\n", (custoFab*15/100) );
        printf("A taxa de Impostos é: %.2f\n", (custoFab*20/100) );
        printf("O valor total do veículo fica: %.2f\n", precoTotal);
    }


    return 0; 
}

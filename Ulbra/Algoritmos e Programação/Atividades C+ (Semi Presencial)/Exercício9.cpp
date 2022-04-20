#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <cmath>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float credEspec, saldoMed;

    printf("Digite o saldo do cliente:\n");
    scanf("%f", &saldoMed);

    if (saldoMed > 400)
    {
        printf("Seu crédito especial é de 30 porcento\n");

        credEspec = (saldoMed*30)/100 + saldoMed;
          printf("O valor do crédito especial é: %.2f\n", (saldoMed*30/100) );
        printf("O saldo junto com o crédito especial fica: %.2f\n", credEspec);
    }
    else if (saldoMed <= 400 && saldoMed > 300)
    {
         printf("Seu crédito especial é de 25 porcento\n");

         credEspec = (saldoMed*25)/100 + saldoMed;
           printf("O valor do crédito especial é: %.2f\n", (saldoMed*25/100) );
         printf("O saldo junto com o crédito especial fica: %.2f\n", credEspec);
    }
    else if (saldoMed <= 300 && saldoMed > 200)
    {
           printf("Seu crédito especial é de 20 porcento\n");

           credEspec = (saldoMed*20)/100 + saldoMed;
             printf("O valor do crédito especial é: %.2f\n", (saldoMed*20/100) );
           printf("O saldo junto com o crédito especial fica: %.2f\n", credEspec);
    }
    else if (saldoMed < 200)
    {
         printf("Seu crédito especial é de 10 porcento\n");

         credEspec = (saldoMed*10)/100 + saldoMed;
         printf("O valor do crédito especial é: %.2f\n", (saldoMed*10/100) );
         printf("O saldo junto com o crédito especial fica: %.2f\n", credEspec);
    }


    return 0;
}
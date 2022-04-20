#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <cmath>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, elevar, raizQ, raizC, oper;

    printf("Para selecionar um número Elevado ao outro digite 1;\n"
    "Para selecionar a Raíz Quadrada dos números digite 2;\n"
    "Para selecionar a Raíz Cúbica dos números digite 3;\n");

    printf("Digite sua opção:\n");
    scanf("%f", &oper);

    if (oper == 1) // Elevar número
    {
        printf("Elevar número selecionado...\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        elevar = pow(n1,n2);
        printf("Elevar = %.f\n", elevar);
    }
    else if (oper == 2) // Raíz Quadrada
    {
        printf("Raíz Quadrada selecionada...\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);

        raizQ = sqrt(n1);
        printf("Raiz Quadrada = %.f\n", raizQ);

        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        raizQ = sqrt(n2);
        printf("Raíz Quadrada = %.f\n", raizQ);
    }
    else if (oper == 3) // Raíz Cúbica
    {
        printf("Raíz Cúbica selecionada...\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);

        raizC = cbrt(n1);
        printf("Raíz Cúbica = %.f\n", raizC);

        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        raizC = cbrt(n2);
        printf("Raíz Cúbica = %.f\n", raizC);
    }    


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, oper;

    printf("Para selecionar Média digite 1;\n"
     "Para selecionar Diferença digite 2;\n"
     "Para selecionar Produto digite 3;\n"
     "Para selecionar Divisão digite 4;\n");

     printf("Qual operação deseja?\n");
     scanf("%f", &oper);

     if (oper == 1) //Média
     {
         printf("Média selecionada...\n");
         printf("Insira o primeiro número:\n");
         scanf("%f", &n1);
         printf("Insira o segundo número:\n");
         scanf("%f", &n2);

         printf("Média = %.f\n", (n1+n2)/2);  // Resultado da média
     } 
     else if (oper == 2) //Diferença
     {
         printf("Diferença selecionada...\n");
         printf("Insira o primeiro número:\n");
         scanf("%f", &n1);
         printf("Insira o segundo número:\n");
         scanf("%f", &n2);

         printf("Diferença = %.f\n", (n1-n2) ); // Resultado da diferença
     }
     else if (oper == 3) //Produto
     {
         printf("Produto selecionado...\n");
         printf("Insira o primeiro número:\n");
         scanf("%f", &n1);
         printf("Insira o segundo número:\n");
         scanf("%f", &n2);

        printf("Produto = %.f\n", (n1*n2) );
     }
     else if (oper == 4)
     {
        printf("Divisão selecionada...\n");
         printf("Insira o primeiro número:\n");
         scanf("%f", &n1);
         printf("Insira o segundo número:\n");
         scanf("%f", &n2);

         printf("Divisão = %.f\n", (n1/n2) );
     }
     else{
         printf("ERRO VALOR INVÁLIDO!");
     }
     
     
    return 0;
}
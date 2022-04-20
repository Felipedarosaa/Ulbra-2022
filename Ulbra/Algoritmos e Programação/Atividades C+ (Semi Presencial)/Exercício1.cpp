#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float nota1, nota2, nota3, nota4, mediaA;
    
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
      printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
      printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);
      printf("Digite a quarta nota:\n");
    scanf("%f", &nota4);

      mediaA = (nota1+nota2+nota3+nota4)/4;

    if (mediaA >= 7)
    {
        printf("Você está Aprovado, Parabéns!\n");
    }else{ 
        printf("Você está Reprovado, Lamento!\n");
    }
    
    
    return 0;
}
    

    
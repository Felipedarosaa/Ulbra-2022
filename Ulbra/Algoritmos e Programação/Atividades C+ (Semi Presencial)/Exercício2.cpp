#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float nota1, nota2, mediaA;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    mediaA = (nota1+nota2)/2;

    if (mediaA >=0 && mediaA <4)
    {
        printf("Reprovado\n");
    }
    if (mediaA >=4 && mediaA < 7)
    {
       printf("Você ficou para o Exame Final\n");
    }
    if (mediaA >= 7 && mediaA <=10)
    {
        printf("Aprovado\n");
    }
    
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float num1, num2;

    printf("Digite o primeiro número:\n");
    scanf("%f", &num1);
    printf("Digite o segundo número:\n");
    scanf("%f", &num2);

    if (num1 < num2)
    {
        printf("O menor número é: %.f\n", num1);
    }
    if (num2 < num1)
    {
        printf("O menor número é: %.f\n", num2);
    }


    return 0;
}
    
    
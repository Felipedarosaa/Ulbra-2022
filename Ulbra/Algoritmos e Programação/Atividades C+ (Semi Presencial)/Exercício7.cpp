#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <cmath>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float aumento30, salReaj, salFunc;

    printf("Digite o salário do funcionário:\n");
    scanf("%f", &salFunc);

    if (salFunc <= 500)
    {
        printf("Você teve aumento de 30 porcento\n");

        salReaj = (salFunc*30)/100 + salFunc;
        printf("O novo salário é de: %.2f\n", salReaj);
    }
    else if (salFunc > 500)
    {
        printf("Lamento, você não tem direito ao aumento!!!\n");
    }
    

    return 0;
}
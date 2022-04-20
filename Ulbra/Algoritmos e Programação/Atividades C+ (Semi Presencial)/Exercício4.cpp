#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float num1, num2, num3;

    printf("Digite os três números:\n");
    scanf("%f%f%f", &num1, &num2, &num3);
   
    if (num1 > num2 && num1 > num3) {
      printf("O maior número é: %.f\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
     printf("O maior número é: %.f\n", num2);
    }else{
     printf("O mair número é: %.f\n", num3);
    }
    
    return 0;
}
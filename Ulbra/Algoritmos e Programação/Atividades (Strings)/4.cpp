#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char string1[20];
    char string2[20];
    char string3 [20];

    printf("Digite a 1º string \n");
    scanf("%s%*c", string1);
    printf("Digite a 2º string \n");
    scanf("%s%*c", string2);
    //printf("Digite a 3º string \n");
    //scanf("%s%*c", string3);

    if (strcmp(string1, string2)==-1) {
        printf("Ordem alfabética: %s %s\n", string1, string2);
    }
    if (strcmp(string1, string2)==1) {
        printf("Ordem alfabetica: %s %s\n", string2, string1);
    }
}

// FUP que leia 3 strings e escreva em ordem alfabética.

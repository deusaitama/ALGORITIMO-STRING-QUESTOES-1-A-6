#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1) Crie um programa que solicita duas strings e depois mostra as duas concatenadas.
2) Crie um programa que solicita duas strings e depois e retorne se são iguais.
3) Escreva um programa que:
a) Solicite que o usuário digite uma senha:
b) Se o usuário digitar "Senha123" o programa deve mostra "Senha correta", caso contrário o programa deve mostrar "Senha INCORRETA".
5) Faça um programa que solicita uma string e mostre a string invertida.
6) Faça um programa que solicita uma string e substitua todas as ocorrências do caractere 'A' em uma string pelo caracter '4'.
7) Faça um programa que solicita uma string e conte o número de vogais em uma string.
8) Faça um programa que solicita uma string e remova todos os espaços de uma string.
9) Faça um programa que solicita uma string e conte o número de caracteres especiais (não alfanuméricos) em uma string.*/



int main()
{
    char a[50],b[50];
    printf("Digite a string A\n");
    gets(a);
    setbuf(stdin,NULL);
    printf("Digite a string B\n");
    gets(b);
    setbuf(stdin,NULL);
    strcat(a,b);
    printf("%s",a);
    return 0;
}

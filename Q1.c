#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1) Crie um programa que solicita duas strings e depois mostra as duas concatenadas.
2) Crie um programa que solicita duas strings e depois e retorne se s�o iguais.
3) Escreva um programa que:
a) Solicite que o usu�rio digite uma senha:
b) Se o usu�rio digitar "Senha123" o programa deve mostra "Senha correta", caso contr�rio o programa deve mostrar "Senha INCORRETA".
5) Fa�a um programa que solicita uma string e mostre a string invertida.
6) Fa�a um programa que solicita uma string e substitua todas as ocorr�ncias do caractere 'A' em uma string pelo caracter '4'.
7) Fa�a um programa que solicita uma string e conte o n�mero de vogais em uma string.
8) Fa�a um programa que solicita uma string e remova todos os espa�os de uma string.
9) Fa�a um programa que solicita uma string e conte o n�mero de caracteres especiais (n�o alfanum�ricos) em uma string.*/



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

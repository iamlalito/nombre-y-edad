#include <conio.h>
#include <stdio.h>

int main ()
{
    int num1 = 2024;
int num2 = 1999;
int resultado = 2024 - 1999;

    char nombre [20];
    printf("introduzca su nombre:");
    scanf("%s", nombre);

    char apellido [20];
    printf("introduzca su apellido:");
    scanf("%s", apellido);

     printf("hola %s, tu edad es.", nombre, apellido);
     printf("%d", resultado);

    return 0;
}


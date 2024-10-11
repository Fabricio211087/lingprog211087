#include <stdio.h>
#include <stdlib.h>

void main () { //main função primaria / make no do programa //

     int x = 0;

     printf("Valor de x: %d\n", x);// criando uma variavel inteira  %d

     x++;//incrementando x em 1 unidade

     printf("Valor de x: %d\n", x);

     x++;

     printf("Valor de x: %d\n", x);

     float y = 12.3;// criando uma variavel real

     printf("Valor de y: %f\n", y);//imprimdo variavel real %f

     printf("Valor de y: %.2f\n", y);

     char sexo = 'M';//variavel que aceita um caracter e deve estar entre apostrofo

     printf("Sexo: %c\n", sexo);//imprimindo variavel unitaria %c

     char nome [30] = "João";//criando varial string texte//vetor [30] caracteres

     printf("Nome: %s\n", nome);//imprimindo variavel string texto %s

     printf("Primeira Letra: %c\n", nome[0]);

     printf("Digite o valor de x: \n ");

     scanf("%d" , &x);

     printf("O valor digitado foi %d \n", x);

    printf("Ola Mundo!");
    
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void questao06() {
	int sal = 0, pre = 0, vol = 0;
	printf("Digite o valor de seu salario: ");
	scanf("%d", &sal);
	printf("Digite o valor da prestação: ");
	scanf("%d", &pre);
    vol=(sal/100) * 30;
	if (vol > pre) {
		printf("Emprestimo consedido.");
	} else {
		printf("Emprestimo negado.");		
	}
}
